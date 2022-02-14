
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {int id_table; } ;
struct i2c_client {int dummy; } ;
struct device_driver {int of_match_table; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*,struct device_driver*) ;
 scalar_t__ FUNC_1 (int ,struct i2c_client*) ;
 scalar_t__ FUNC_2 (int ,struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct device*) ;
 struct i2c_driver* FUNC_4 (struct device_driver*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 struct i2c_driver *VAR_3;



 if (FUNC_2(VAR_1->of_match_table, VAR_2))
  return 1;


 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 VAR_3 = FUNC_4(VAR_1);


 if (FUNC_1(VAR_3->id_table, VAR_2))
  return 1;

 return 0;
}
