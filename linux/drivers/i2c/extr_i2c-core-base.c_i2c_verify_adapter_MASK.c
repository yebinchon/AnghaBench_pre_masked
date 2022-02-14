
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct device {int * type; } ;


 int VAR_0 ;
 struct i2c_adapter* FUNC_0 (struct device*) ;

struct i2c_adapter *FUNC_1(struct device *VAR_1)
{
 return (VAR_1->type == &VAR_0)
   ? FUNC_0(VAR_1)
   : ((void*)0);
}
