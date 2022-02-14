
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct acpi_interface_info {int flags; struct acpi_interface_info* next; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct acpi_interface_info* VAR_6 ;

acpi_status FUNC_0(u8 VAR_7)
{
 struct acpi_interface_info *VAR_8;

 VAR_8 = VAR_6;
 while (VAR_8) {
  if (((VAR_8->flags & VAR_2) &&
       (VAR_7 & VAR_1)) ||
      (!(VAR_8->flags & VAR_2) &&
       (VAR_7 & VAR_4))) {
   if (VAR_7 & VAR_0) {



    VAR_8->flags |= VAR_3;
   } else {


    VAR_8->flags &= ~VAR_3;
   }
  }

  VAR_8 = VAR_8->next;
 }

 return (VAR_5);
}
