
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_resource_gpio {int io_restriction; int pin_config; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum gpiod_flags
FUNC_0(const struct acpi_resource_gpio *VAR_4)
{
 switch (VAR_4->io_restriction) {
 case 131:
  return VAR_1;
 case 130:







  switch (VAR_4->pin_config) {
  case 128:
   return VAR_2;
  case 129:
   return VAR_3;
  default:
   break;
  }
 default:
  break;
 }





 return VAR_0;
}
