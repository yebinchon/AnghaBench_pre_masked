
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {int kobj; } ;
struct i2c_client {int addr; TYPE_3__ dev; TYPE_1__* adapter; } ;
struct TYPE_8__ {int max_brightness; char* name; int brightness_set_blocking; int flags; } ;
struct blinkm_led {int id; TYPE_2__ led_cdev; struct i2c_client* i2c_client; } ;
struct blinkm_data {int i2c_addr; int fw_ver; int script_id; struct blinkm_led* blinkm_leds; int update_lock; struct i2c_client* i2c_client; } ;
typedef int blinkm_led_name ;
struct TYPE_7__ {int nr; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (struct i2c_client*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,char*,...) ;
 struct blinkm_data* FUNC_2 (TYPE_3__*,int,int ) ;
 int FUNC_3 (struct i2c_client*,struct blinkm_data*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,int,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct blinkm_data *VAR_9;
 struct blinkm_led *VAR_10[3];
 int VAR_11, VAR_12;
 char VAR_13[28];

 VAR_9 = FUNC_2(&VAR_7->dev,
   sizeof(struct blinkm_data), VAR_1);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto exit;
 }

 VAR_9->i2c_addr = 0x08;

 VAR_9->fw_ver = 0xfe;


 VAR_9->script_id = 0x01;
 VAR_9->i2c_client = VAR_7;

 FUNC_3(VAR_7, VAR_9);
 FUNC_6(&VAR_9->update_lock);


 VAR_11 = FUNC_8(&VAR_7->dev.kobj, &VAR_3);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_7->dev, "couldn't register sysfs group\n");
  goto exit;
 }

 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {

  VAR_10[VAR_12] = &VAR_9->blinkm_leds[VAR_12];
  VAR_10[VAR_12]->i2c_client = VAR_7;
  VAR_10[VAR_12]->id = VAR_12;
  VAR_10[VAR_12]->led_cdev.max_brightness = 255;
  VAR_10[VAR_12]->led_cdev.flags = VAR_2;
  switch (VAR_12) {
  case 128:
   FUNC_7(VAR_13, sizeof(VAR_13),
      "blinkm-%d-%d-red",
      VAR_7->adapter->nr,
      VAR_7->addr);
   VAR_10[VAR_12]->led_cdev.name = VAR_13;
   VAR_10[VAR_12]->led_cdev.brightness_set_blocking =
       VAR_6;
   VAR_11 = FUNC_4(&VAR_7->dev,
          &VAR_10[VAR_12]->led_cdev);
   if (VAR_11 < 0) {
    FUNC_1(&VAR_7->dev,
     "couldn't register LED %s\n",
     VAR_10[VAR_12]->led_cdev.name);
    goto failred;
   }
   break;
  case 129:
   FUNC_7(VAR_13, sizeof(VAR_13),
      "blinkm-%d-%d-green",
      VAR_7->adapter->nr,
      VAR_7->addr);
   VAR_10[VAR_12]->led_cdev.name = VAR_13;
   VAR_10[VAR_12]->led_cdev.brightness_set_blocking =
       VAR_5;
   VAR_11 = FUNC_4(&VAR_7->dev,
          &VAR_10[VAR_12]->led_cdev);
   if (VAR_11 < 0) {
    FUNC_1(&VAR_7->dev,
     "couldn't register LED %s\n",
     VAR_10[VAR_12]->led_cdev.name);
    goto failgreen;
   }
   break;
  case 130:
   FUNC_7(VAR_13, sizeof(VAR_13),
      "blinkm-%d-%d-blue",
      VAR_7->adapter->nr,
      VAR_7->addr);
   VAR_10[VAR_12]->led_cdev.name = VAR_13;
   VAR_10[VAR_12]->led_cdev.brightness_set_blocking =
       VAR_4;
   VAR_11 = FUNC_4(&VAR_7->dev,
          &VAR_10[VAR_12]->led_cdev);
   if (VAR_11 < 0) {
    FUNC_1(&VAR_7->dev,
     "couldn't register LED %s\n",
     VAR_10[VAR_12]->led_cdev.name);
    goto failblue;
   }
   break;
  }
 }


 FUNC_0(VAR_7);

 return 0;

failblue:
 FUNC_5(&VAR_10[129]->led_cdev);

failgreen:
 FUNC_5(&VAR_10[128]->led_cdev);

failred:
 FUNC_9(&VAR_7->dev.kobj, &VAR_3);
exit:
 return VAR_11;
}
