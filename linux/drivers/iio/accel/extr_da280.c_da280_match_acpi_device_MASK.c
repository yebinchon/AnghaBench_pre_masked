
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* driver; } ;
struct acpi_device_id {int driver_data; } ;
typedef enum da280_chipset { ____Placeholder_da280_chipset } da280_chipset ;
struct TYPE_2__ {int acpi_match_table; } ;


 int VAR_0 ;
 struct acpi_device_id* FUNC_0 (int ,struct device*) ;

__attribute__((used)) static enum da280_chipset FUNC_1(struct device *VAR_1)
{
 const struct acpi_device_id *VAR_2;

 VAR_2 = FUNC_0(VAR_1->driver->acpi_match_table, VAR_1);
 if (!VAR_2)
  return -VAR_0;

 return (enum da280_chipset) VAR_2->driver_data;
}
