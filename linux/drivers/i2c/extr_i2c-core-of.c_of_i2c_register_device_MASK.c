
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct i2c_board_info {int dummy; } ;
struct i2c_adapter {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (int) ;
 int FUNC_1 (int *,char*,struct device_node*) ;
 int FUNC_2 (int *,char*,struct device_node*) ;
 struct i2c_client* FUNC_3 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_4 (int *,struct device_node*,struct i2c_board_info*) ;

__attribute__((used)) static struct i2c_client *FUNC_5(struct i2c_adapter *VAR_1,
       struct device_node *VAR_2)
{
 struct i2c_client *VAR_3;
 struct i2c_board_info VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1->dev, "of_i2c: register %pOF\n", VAR_2);

 VAR_5 = FUNC_4(&VAR_1->dev, VAR_2, &VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);

 VAR_3 = FUNC_3(VAR_1, &VAR_4);
 if (!VAR_3) {
  FUNC_2(&VAR_1->dev, "of_i2c: Failure registering %pOF\n", VAR_2);
  return FUNC_0(-VAR_0);
 }
 return VAR_3;
}
