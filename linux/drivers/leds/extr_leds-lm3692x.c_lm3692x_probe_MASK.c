
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness_set_blocking; } ;
struct lm3692x_led {int regmap; int model_id; TYPE_1__ led_dev; struct i2c_client* client; int lock; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct lm3692x_led* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct lm3692x_led*) ;
 int VAR_2 ;
 int FUNC_6 (struct lm3692x_led*) ;
 int FUNC_7 (struct lm3692x_led*) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct lm3692x_led *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_8(&VAR_6->lock);
 VAR_6->client = VAR_4;
 VAR_6->led_dev.brightness_set_blocking = VAR_2;
 VAR_6->model_id = VAR_5->driver_data;
 FUNC_5(VAR_4, VAR_6);

 VAR_6->regmap = FUNC_4(VAR_4, &VAR_3);
 if (FUNC_0(VAR_6->regmap)) {
  VAR_7 = FUNC_1(VAR_6->regmap);
  FUNC_2(&VAR_4->dev, "Failed to allocate register map: %d\n",
   VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
