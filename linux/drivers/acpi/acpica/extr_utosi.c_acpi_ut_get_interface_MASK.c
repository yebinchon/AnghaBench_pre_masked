
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_interface_info {struct acpi_interface_info* next; int name; } ;
typedef int acpi_string ;


 struct acpi_interface_info* VAR_0 ;
 int FUNC_0 (int ,int ) ;

struct acpi_interface_info *FUNC_1(acpi_string VAR_1)
{
 struct acpi_interface_info *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2) {
  if (!FUNC_0(VAR_1, VAR_2->name)) {
   return (VAR_2);
  }

  VAR_2 = VAR_2->next;
 }

 return (((void*)0));
}
