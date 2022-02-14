
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_power_resource {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 struct acpi_power_resource* FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static struct acpi_power_resource *FUNC_2(acpi_handle VAR_0)
{
 struct acpi_device *VAR_1;

 if (FUNC_0(VAR_0, &VAR_1))
  return ((void*)0);

 return FUNC_1(VAR_1);
}
