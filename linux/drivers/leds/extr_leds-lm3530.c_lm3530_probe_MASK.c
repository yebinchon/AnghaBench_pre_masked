
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3530_platform_data {scalar_t__ mode; scalar_t__ brt_val; } ;
struct TYPE_2__ {int groups; int max_brightness; int brightness_set; int name; } ;
struct lm3530_data {scalar_t__ mode; int enable; TYPE_1__ led_dev; struct lm3530_platform_data* pdata; int * regulator; int brightness; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 struct lm3530_platform_data* FUNC_3 (int *) ;
 struct lm3530_data* FUNC_4 (int *,int,int ) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct lm3530_data*) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct lm3530_data*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_12,
      const struct i2c_device_id *VAR_13)
{
 struct lm3530_platform_data *VAR_14 = FUNC_3(&VAR_12->dev);
 struct lm3530_data *VAR_15;
 int VAR_16 = 0;

 if (VAR_14 == ((void*)0)) {
  FUNC_2(&VAR_12->dev, "platform data required\n");
  return -VAR_2;
 }


 if (VAR_14->mode > VAR_7) {
  FUNC_2(&VAR_12->dev, "Illegal Mode request\n");
  return -VAR_0;
 }

 if (!FUNC_6(VAR_12->adapter, VAR_5)) {
  FUNC_2(&VAR_12->dev, "I2C_FUNC_I2C not supported\n");
  return -VAR_1;
 }

 VAR_15 = FUNC_4(&VAR_12->dev, sizeof(struct lm3530_data),
    VAR_4);
 if (VAR_15 == ((void*)0))
  return -VAR_3;

 VAR_15->mode = VAR_14->mode;
 VAR_15->client = VAR_12;
 VAR_15->pdata = VAR_14;
 VAR_15->brightness = VAR_6;
 VAR_15->enable = 0;
 VAR_15->led_dev.name = VAR_8;
 VAR_15->led_dev.brightness_set = VAR_10;
 VAR_15->led_dev.max_brightness = VAR_9;
 VAR_15->led_dev.groups = VAR_11;

 FUNC_7(VAR_12, VAR_15);

 VAR_15->regulator = FUNC_5(&VAR_12->dev, "vin");
 if (FUNC_0(VAR_15->regulator)) {
  FUNC_2(&VAR_12->dev, "regulator get failed\n");
  VAR_16 = FUNC_1(VAR_15->regulator);
  VAR_15->regulator = ((void*)0);
  return VAR_16;
 }

 if (VAR_15->pdata->brt_val) {
  VAR_16 = FUNC_9(VAR_15);
  if (VAR_16 < 0) {
   FUNC_2(&VAR_12->dev,
    "Register Init failed: %d\n", VAR_16);
   return VAR_16;
  }
 }
 VAR_16 = FUNC_8(&VAR_12->dev, &VAR_15->led_dev);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_12->dev, "Register led class failed: %d\n", VAR_16);
  return VAR_16;
 }

 return 0;
}
