
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_interface_info {struct acpi_interface_info* next; int flags; void* name; } ;
typedef int acpi_string ;
typedef int acpi_status ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct acpi_interface_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_interface_info* VAR_3 ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(acpi_string VAR_4)
{
 struct acpi_interface_info *VAR_5;



 VAR_5 =
     FUNC_0(sizeof(struct acpi_interface_info));
 if (!VAR_5) {
  return (VAR_1);
 }

 VAR_5->name = FUNC_0(FUNC_3(VAR_4) + 1);
 if (!VAR_5->name) {
  FUNC_1(VAR_5);
  return (VAR_1);
 }



 FUNC_2(VAR_5->name, VAR_4);
 VAR_5->flags = VAR_0;
 VAR_5->next = VAR_3;

 VAR_3 = VAR_5;
 return (VAR_2);
}
