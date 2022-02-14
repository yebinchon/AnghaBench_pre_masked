
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_interface_info {int flags; struct acpi_interface_info* name; struct acpi_interface_info* next; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_interface_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct acpi_interface_info* VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

acpi_status FUNC_4(void)
{
 acpi_status VAR_7;
 struct acpi_interface_info *VAR_8;

 VAR_7 = FUNC_2(VAR_5, VAR_3);
 if (FUNC_0(VAR_7)) {
  return (VAR_7);
 }

 VAR_8 = VAR_6;
 while (VAR_8) {
  VAR_6 = VAR_8->next;

  if (VAR_8->flags & VAR_1) {



   FUNC_1(VAR_8->name);
   FUNC_1(VAR_8);
  } else {


   if (VAR_8->flags & VAR_0) {
    VAR_8->flags |= VAR_2;
   } else {
    VAR_8->flags &= ~VAR_2;
   }
  }

  VAR_8 = VAR_6;
 }

 FUNC_3(VAR_5);
 return (VAR_4);
}
