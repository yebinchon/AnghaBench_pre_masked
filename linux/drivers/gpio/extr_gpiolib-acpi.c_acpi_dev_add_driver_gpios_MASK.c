
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gpio_mapping {int dummy; } ;
struct acpi_device {struct acpi_gpio_mapping const* driver_gpios; } ;


 int VAR_0 ;

int FUNC_0(struct acpi_device *VAR_1,
         const struct acpi_gpio_mapping *VAR_2)
{
 if (VAR_1 && VAR_2) {
  VAR_1->driver_gpios = VAR_2;
  return 0;
 }
 return -VAR_0;
}
