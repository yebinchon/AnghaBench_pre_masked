
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct cs2000_priv {int hw; } ;


 int FUNC_0 (int *) ;
 struct cs2000_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct device_node*) ;
 struct device* FUNC_3 (struct cs2000_priv*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct cs2000_priv *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = FUNC_3(VAR_1);
 struct device_node *VAR_3 = VAR_2->of_node;

 FUNC_2(VAR_3);

 FUNC_0(&VAR_1->hw);

 return 0;
}
