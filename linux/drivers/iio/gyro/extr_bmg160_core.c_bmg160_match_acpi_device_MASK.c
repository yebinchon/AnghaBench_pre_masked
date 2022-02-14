
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct acpi_device_id {int dummy; } ;
struct TYPE_2__ {int acpi_match_table; } ;


 struct acpi_device_id* FUNC_0 (int ,struct device*) ;
 char const* FUNC_1 (struct device*) ;

__attribute__((used)) static const char *FUNC_2(struct device *VAR_0)
{
 const struct acpi_device_id *VAR_1;

 VAR_1 = FUNC_0(VAR_0->driver->acpi_match_table, VAR_0);
 if (!VAR_1)
  return ((void*)0);

 return FUNC_1(VAR_0);
}
