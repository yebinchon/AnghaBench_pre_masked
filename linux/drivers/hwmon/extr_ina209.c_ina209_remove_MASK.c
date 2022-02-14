
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina209_data {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct ina209_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,struct ina209_data*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct ina209_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1);

 return 0;
}
