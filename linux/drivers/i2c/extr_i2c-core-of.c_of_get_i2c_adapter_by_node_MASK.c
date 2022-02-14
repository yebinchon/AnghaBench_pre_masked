
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev; int owner; } ;
struct device_node {int dummy; } ;


 struct i2c_adapter* FUNC_0 (struct device_node*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

struct i2c_adapter *FUNC_3(struct device_node *VAR_0)
{
 struct i2c_adapter *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return ((void*)0);

 if (!FUNC_2(VAR_1->owner)) {
  FUNC_1(&VAR_1->dev);
  VAR_1 = ((void*)0);
 }

 return VAR_1;
}
