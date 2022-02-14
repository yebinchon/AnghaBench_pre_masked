
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_adapter* FUNC_0 (int ) ;
 struct i2c_adapter* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;

__attribute__((used)) static struct i2c_adapter *FUNC_5(struct device *VAR_3)
{
 struct device_node *VAR_4, *VAR_5;
 struct i2c_adapter *VAR_6;

 VAR_5 = FUNC_2(VAR_3->of_node, 1, -1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_4(VAR_5, "ddc-i2c-bus", 0);
 FUNC_3(VAR_5);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 if (!VAR_6)
  return FUNC_0(-VAR_2);

 return VAR_6;
}
