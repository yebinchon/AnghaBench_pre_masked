
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct acpi_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int acpi_match_table; } ;


 struct acpi_device_id* FUNC_0 (int ,struct device const*) ;
 void const* FUNC_1 (struct device const*) ;

const void *FUNC_2(const struct device *VAR_0)
{
 const struct acpi_device_id *VAR_1;

 if (!VAR_0->driver->acpi_match_table)
  return FUNC_1(VAR_0);

 VAR_1 = FUNC_0(VAR_0->driver->acpi_match_table, VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return (const void *)VAR_1->driver_data;
}
