
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct device {int * type; struct device* parent; } ;


 int VAR_0 ;
 struct i2c_adapter* FUNC_0 (struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_1 (struct device*) ;

struct i2c_adapter *FUNC_2(struct device *VAR_1)
{
 struct device *VAR_2;
 struct i2c_adapter *VAR_3;






 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->parent) {
  if (VAR_2->type == &VAR_0)
   break;
 }
 if (!VAR_2)
  return ((void*)0);


 VAR_3 = FUNC_1(VAR_2);
 while (FUNC_0(VAR_3))
  VAR_3 = FUNC_0(VAR_3);

 return VAR_3;
}
