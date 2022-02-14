
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpio_info {int pin_config; unsigned long polarity; } ;




 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

int FUNC_0(unsigned long *VAR_3,
     struct acpi_gpio_info *VAR_4)
{
 switch (VAR_4->pin_config) {
 case 128:
  *VAR_3 |= VAR_2;
  break;
 case 129:
  *VAR_3 |= VAR_1;
  break;
 default:
  break;
 }

 if (VAR_4->polarity == VAR_0)
  *VAR_3 |= VAR_0;

 return 0;
}
