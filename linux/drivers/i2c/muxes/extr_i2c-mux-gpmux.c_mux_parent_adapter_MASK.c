
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct i2c_adapter* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;

__attribute__((used)) static struct i2c_adapter *FUNC_5(struct device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->of_node;
 struct device_node *VAR_4;
 struct i2c_adapter *VAR_5;

 VAR_4 = FUNC_4(VAR_3, "i2c-parent", 0);
 if (!VAR_4) {
  FUNC_1(VAR_2, "Cannot parse i2c-parent\n");
  return FUNC_0(-VAR_0);
 }
 VAR_5 = FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 return VAR_5;
}
