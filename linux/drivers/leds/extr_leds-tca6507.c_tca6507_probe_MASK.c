
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_leds; TYPE_1__* leds; } ;
struct tca6507_platform_data {TYPE_2__ leds; } ;
struct TYPE_7__ {scalar_t__ name; int blink_set; int brightness_set; int default_trigger; } ;
struct tca6507_led {int num; int bank; TYPE_3__ led_cdev; struct tca6507_chip* chip; } ;
struct tca6507_chip {int reg_set; struct tca6507_led* leds; int work; int lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_5__ {int default_trigger; scalar_t__ name; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct tca6507_platform_data*) ;
 int VAR_4 ;
 int FUNC_2 (struct tca6507_platform_data*) ;
 int FUNC_3 (int *,char*,int) ;
 struct tca6507_platform_data* FUNC_4 (int *) ;
 struct tca6507_chip* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_adapter*,int ) ;
 int FUNC_7 (struct i2c_client*,struct tca6507_chip*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 struct tca6507_platform_data* FUNC_12 (struct i2c_client*) ;
 int FUNC_13 (struct i2c_client*,struct tca6507_chip*,struct tca6507_platform_data*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
  const struct i2c_device_id *VAR_9)
{
 struct tca6507_chip *VAR_10;
 struct i2c_adapter *VAR_11;
 struct tca6507_platform_data *VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 VAR_11 = VAR_8->adapter;
 VAR_12 = FUNC_4(&VAR_8->dev);

 if (!FUNC_6(VAR_11, VAR_3))
  return -VAR_0;

 if (!VAR_12 || VAR_12->leds.num_leds != VAR_4) {
  VAR_12 = FUNC_12(VAR_8);
  if (FUNC_1(VAR_12)) {
   FUNC_3(&VAR_8->dev, "Need %d entries in platform-data list\n",
    VAR_4);
   return FUNC_2(VAR_12);
  }
 }
 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->client = VAR_8;
 FUNC_0(&VAR_10->work, VAR_7);
 FUNC_11(&VAR_10->lock);
 FUNC_7(VAR_8, VAR_10);

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  struct tca6507_led *VAR_15 = VAR_10->leds + VAR_14;

  VAR_15->chip = VAR_10;
  VAR_15->num = VAR_14;
  if (VAR_12->leds.leds[VAR_14].name && !VAR_12->leds.leds[VAR_14].flags) {
   VAR_15->led_cdev.name = VAR_12->leds.leds[VAR_14].name;
   VAR_15->led_cdev.default_trigger
    = VAR_12->leds.leds[VAR_14].default_trigger;
   VAR_15->led_cdev.brightness_set = VAR_6;
   VAR_15->led_cdev.blink_set = VAR_5;
   VAR_15->bank = -1;
   VAR_13 = FUNC_8(&VAR_8->dev,
          &VAR_15->led_cdev);
   if (VAR_13 < 0)
    goto exit;
  }
 }
 VAR_13 = FUNC_13(VAR_8, VAR_10, VAR_12);
 if (VAR_13)
  goto exit;

 VAR_10->reg_set = 0x7f;
 FUNC_10(&VAR_10->work);

 return 0;
exit:
 while (VAR_14--) {
  if (VAR_10->leds[VAR_14].led_cdev.name)
   FUNC_9(&VAR_10->leds[VAR_14].led_cdev);
 }
 return VAR_13;
}
