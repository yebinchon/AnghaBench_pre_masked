
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,struct device_node*,int ) ;
 int VAR_0 ;
 struct i2c_adapter* FUNC_1 (struct device*) ;
 int VAR_1 ;
 int FUNC_2 (struct device*) ;

struct i2c_adapter *FUNC_3(struct device_node *VAR_2)
{
 struct device *VAR_3;
 struct i2c_adapter *VAR_4;

 VAR_3 = FUNC_0(&VAR_0, ((void*)0), VAR_2,
         VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  FUNC_2(VAR_3);

 return VAR_4;
}
