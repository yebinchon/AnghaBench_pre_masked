
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_smbus_alert {int alert; } ;
struct i2c_client {int dummy; } ;


 struct i2c_smbus_alert* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct i2c_client *VAR_0)
{
 struct i2c_smbus_alert *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_1->alert);
}
