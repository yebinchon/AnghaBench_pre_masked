
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_buffer {scalar_t__ length; int pointer; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

acpi_status FUNC_0(struct acpi_buffer *VAR_5)
{



 if (!VAR_5) {
  return (VAR_3);
 }



 if ((VAR_5->length == VAR_2) ||
     (VAR_5->length == VAR_0) ||
     (VAR_5->length == VAR_1)) {
  return (VAR_4);
 }



 if (!VAR_5->pointer) {
  return (VAR_3);
 }

 return (VAR_4);
}
