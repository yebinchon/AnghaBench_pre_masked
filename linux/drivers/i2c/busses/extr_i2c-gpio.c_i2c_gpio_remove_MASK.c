
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct i2c_gpio_private_data {struct i2c_adapter adap; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct platform_device*) ;
 struct i2c_gpio_private_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct i2c_gpio_private_data *VAR_1;
 struct i2c_adapter *VAR_2;

 FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = &VAR_1->adap;

 FUNC_0(VAR_2);

 return 0;
}
