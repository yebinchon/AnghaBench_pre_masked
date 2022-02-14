
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_board_info {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 scalar_t__ FUNC_1 (struct acpi_device*,struct i2c_board_info*,struct i2c_adapter*,int *) ;
 int FUNC_2 (struct i2c_adapter*,struct acpi_device*,struct i2c_board_info*) ;

__attribute__((used)) static acpi_status FUNC_3(acpi_handle VAR_1, u32 VAR_2,
           void *VAR_3, void **VAR_4)
{
 struct i2c_adapter *VAR_5 = VAR_3;
 struct acpi_device *VAR_6;
 struct i2c_board_info VAR_7;

 if (FUNC_0(VAR_1, &VAR_6))
  return VAR_0;

 if (FUNC_1(VAR_6, &VAR_7, VAR_5, ((void*)0)))
  return VAR_0;

 FUNC_2(VAR_5, VAR_6, &VAR_7);

 return VAR_0;
}
