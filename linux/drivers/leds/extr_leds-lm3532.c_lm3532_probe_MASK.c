
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3532_data {int lock; int regmap; int * dev; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 struct lm3532_data* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct lm3532_data*) ;
 int VAR_3 ;
 int FUNC_7 (struct lm3532_data*) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct lm3532_data*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5,
      const struct i2c_device_id *VAR_6)
{
 struct lm3532_data *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_3(&VAR_5->dev);
 if (!VAR_9) {
  FUNC_2(&VAR_5->dev, "LEDs are not defined in device tree!");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(&VAR_5->dev, FUNC_9(VAR_7, VAR_3, VAR_9),
      VAR_2);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_7->client = VAR_5;
 VAR_7->dev = &VAR_5->dev;

 VAR_7->regmap = FUNC_5(VAR_5, &VAR_4);
 if (FUNC_0(VAR_7->regmap)) {
  VAR_8 = FUNC_1(VAR_7->regmap);
  FUNC_2(&VAR_5->dev, "Failed to allocate register map: %d\n",
   VAR_8);
  return VAR_8;
 }

 FUNC_8(&VAR_7->lock);
 FUNC_6(VAR_5, VAR_7);

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_2(&VAR_5->dev, "Failed to parse node\n");
  return VAR_8;
 }

 return VAR_8;
}
