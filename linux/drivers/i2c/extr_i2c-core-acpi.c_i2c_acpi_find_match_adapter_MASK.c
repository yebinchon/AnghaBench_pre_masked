
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ acpi_handle ;


 scalar_t__ FUNC_0 (struct device*) ;
 struct i2c_adapter* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, const void *VAR_1)
{
 struct i2c_adapter *VAR_2 = FUNC_1(VAR_0);

 if (!VAR_2)
  return 0;

 return FUNC_0(VAR_0) == (acpi_handle)VAR_1;
}
