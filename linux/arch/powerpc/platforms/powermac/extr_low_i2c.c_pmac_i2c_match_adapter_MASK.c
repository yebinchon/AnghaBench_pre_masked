
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct pmac_i2c_bus {struct i2c_adapter adapter; } ;
struct device_node {int dummy; } ;


 struct pmac_i2c_bus* FUNC_0 (struct device_node*) ;

int FUNC_1(struct device_node *VAR_0, struct i2c_adapter *VAR_1)
{
 struct pmac_i2c_bus *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 == ((void*)0))
  return 0;
 return (&VAR_2->adapter == VAR_1);
}
