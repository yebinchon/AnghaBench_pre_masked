
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3697 {int regmap; int * dev; struct i2c_client* client; int lock; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 struct lm3697* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct lm3697*) ;
 int VAR_3 ;
 int FUNC_7 (struct lm3697*) ;
 int FUNC_8 (struct lm3697*) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct lm3697*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct lm3697 *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_5->dev);
 if (!VAR_8) {
  FUNC_2(&VAR_5->dev, "LEDs are not defined in device tree!");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(&VAR_5->dev, FUNC_10(VAR_7, VAR_3, VAR_8),
      VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_9(&VAR_7->lock);
 FUNC_6(VAR_5, VAR_7);

 VAR_7->client = VAR_5;
 VAR_7->dev = &VAR_5->dev;
 VAR_7->regmap = FUNC_5(VAR_5, &VAR_4);
 if (FUNC_0(VAR_7->regmap)) {
  VAR_9 = FUNC_1(VAR_7->regmap);
  FUNC_2(&VAR_5->dev, "Failed to allocate register map: %d\n",
   VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9)
  return VAR_9;

 return FUNC_7(VAR_7);
}
