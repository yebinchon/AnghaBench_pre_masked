
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
typedef int acpi_handle ;


 struct device* FUNC_0 (int *,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct i2c_adapter* FUNC_1 (struct device*) ;

struct i2c_adapter *FUNC_2(acpi_handle VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(&VAR_1, ((void*)0), VAR_2,
         VAR_0);

 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
