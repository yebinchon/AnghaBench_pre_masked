
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,struct device_node*) ;
 int VAR_0 ;
 struct i2c_client* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

struct i2c_client *FUNC_3(struct device_node *VAR_1)
{
 struct device *VAR_2;
 struct i2c_client *VAR_3;

 VAR_2 = FUNC_0(&VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  FUNC_2(VAR_2);

 return VAR_3;
}
