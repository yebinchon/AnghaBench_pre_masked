
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_smbus_alert {int alert; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 struct i2c_smbus_alert* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct i2c_smbus_alert *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->alert);
 return 0;
}
