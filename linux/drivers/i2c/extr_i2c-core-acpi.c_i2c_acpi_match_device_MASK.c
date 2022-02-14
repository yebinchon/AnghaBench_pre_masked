
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct acpi_device_id {int dummy; } ;


 struct acpi_device_id const* FUNC_0 (struct acpi_device_id const*,int *) ;

const struct acpi_device_id *
FUNC_1(const struct acpi_device_id *VAR_0,
        struct i2c_client *VAR_1)
{
 if (!(VAR_1 && VAR_0))
  return ((void*)0);

 return FUNC_0(VAR_0, &VAR_1->dev);
}
