
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3530_data {int led_dev; } ;
struct i2c_client {int dummy; } ;


 struct lm3530_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lm3530_data*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct lm3530_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);
 FUNC_1(&VAR_1->led_dev);
 return 0;
}
