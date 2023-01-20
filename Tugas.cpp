#include <iostream>
#include <string>

using namespace std;

string firstName = "Rozian";
string lastName = "Fadila";
    
string fullName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}

void printName(string firstName, string lastName)
{
    cout << "Nama saya adalah  " << lastName;
}






int main()
{

 
    printName(firstName, lastName);
    cout << "\nNama lengkap saya adalah " << fullName(firstName, lastName);
 
    return 0;
