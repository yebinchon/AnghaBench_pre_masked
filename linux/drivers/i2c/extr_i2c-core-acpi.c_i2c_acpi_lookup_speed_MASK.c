
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_acpi_lookup {scalar_t__ search_handle; scalar_t__ adapter_handle; scalar_t__ speed; scalar_t__ min_speed; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 scalar_t__ FUNC_1 (struct acpi_device*,struct i2c_acpi_lookup*) ;

__attribute__((used)) static acpi_status FUNC_2(acpi_handle VAR_1, u32 VAR_2,
        void *VAR_3, void **VAR_4)
{
 struct i2c_acpi_lookup *VAR_5 = VAR_3;
 struct acpi_device *VAR_6;

 if (FUNC_0(VAR_1, &VAR_6))
  return VAR_0;

 if (FUNC_1(VAR_6, VAR_5))
  return VAR_0;

 if (VAR_5->search_handle != VAR_5->adapter_handle)
  return VAR_0;

 if (VAR_5->speed <= VAR_5->min_speed)
  VAR_5->min_speed = VAR_5->speed;

 return VAR_0;
}
