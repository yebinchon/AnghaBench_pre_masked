
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3601x_led {int lock; int regmap; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct lm3601x_led* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct lm3601x_led*) ;
 int FUNC_6 (struct lm3601x_led*,struct fwnode_handle**) ;
 int FUNC_7 (struct lm3601x_led*,struct fwnode_handle*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4)
{
 struct lm3601x_led *VAR_5;
 struct fwnode_handle *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->client = VAR_4;
 FUNC_5(VAR_4, VAR_5);

 VAR_7 = FUNC_6(VAR_5, &VAR_6);
 if (VAR_7)
  return -VAR_0;

 VAR_5->regmap = FUNC_4(VAR_4, &VAR_3);
 if (FUNC_0(VAR_5->regmap)) {
  VAR_7 = FUNC_1(VAR_5->regmap);
  FUNC_2(&VAR_4->dev,
   "Failed to allocate register map: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_8(&VAR_5->lock);

 return FUNC_7(VAR_5, VAR_6);
}
