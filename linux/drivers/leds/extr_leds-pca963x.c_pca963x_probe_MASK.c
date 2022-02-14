
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int num_leds; TYPE_1__* leds; } ;
struct pca963x_platform_data {scalar_t__ blink_type; scalar_t__ outdrv; scalar_t__ dir; TYPE_2__ leds; } ;
struct TYPE_9__ {int blink_set; int brightness_set_blocking; int name; scalar_t__ default_trigger; } ;
struct pca963x_led {int led_num; TYPE_4__ led_cdev; struct pca963x* chip; int name; } ;
struct pca963x_chipdef {int n_leds; scalar_t__ ledout_base; } ;
struct pca963x {struct i2c_client* client; struct pca963x_led* leds; struct pca963x_chipdef* chipdef; int mutex; } ;
struct i2c_device_id {size_t driver_data; } ;
struct i2c_client {int addr; int dev; TYPE_3__* adapter; } ;
struct TYPE_8__ {int nr; } ;
struct TYPE_6__ {char* name; scalar_t__ default_trigger; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct pca963x_platform_data*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,char*,int) ;
 struct pca963x_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 struct pca963x_led* FUNC_5 (int *,int,int,int ) ;
 struct pca963x* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct i2c_client*,struct pca963x*) ;
 int FUNC_8 (struct i2c_client*,scalar_t__) ;
 int FUNC_9 (struct i2c_client*,scalar_t__,int) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (int *) ;
 int VAR_8 ;
 struct pca963x_chipdef* VAR_9 ;
 struct pca963x_platform_data* FUNC_13 (struct i2c_client*,struct pca963x_chipdef*) ;
 int VAR_10 ;
 int FUNC_14 (int ,int,char*,...) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_11,
     const struct i2c_device_id *VAR_12)
{
 struct pca963x *VAR_13;
 struct pca963x_led *VAR_14;
 struct pca963x_platform_data *VAR_15;
 struct pca963x_chipdef *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = &VAR_9[VAR_12->driver_data];
 VAR_15 = FUNC_3(&VAR_11->dev);

 if (!VAR_15) {
  VAR_15 = FUNC_13(VAR_11, VAR_16);
  if (FUNC_1(VAR_15)) {
   FUNC_4(&VAR_11->dev, "could not parse configuration\n");
   VAR_15 = ((void*)0);
  }
 }

 if (VAR_15 && (VAR_15->leds.num_leds < 1 ||
     VAR_15->leds.num_leds > VAR_16->n_leds)) {
  FUNC_2(&VAR_11->dev, "board info must claim 1-%d LEDs",
        VAR_16->n_leds);
  return -VAR_0;
 }

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13),
        VAR_2);
 if (!VAR_13)
  return -VAR_1;
 VAR_14 = FUNC_5(&VAR_11->dev, VAR_16->n_leds, sizeof(*VAR_14),
        VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_7(VAR_11, VAR_13);

 FUNC_12(&VAR_13->mutex);
 VAR_13->chipdef = VAR_16;
 VAR_13->client = VAR_11;
 VAR_13->leds = VAR_14;


 for (VAR_17 = 0; VAR_17 < VAR_16->n_leds / 4; VAR_17++)
  FUNC_9(VAR_11, VAR_16->ledout_base + VAR_17, 0x00);

 for (VAR_17 = 0; VAR_17 < VAR_16->n_leds; VAR_17++) {
  VAR_14[VAR_17].led_num = VAR_17;
  VAR_14[VAR_17].chip = VAR_13;


  if (VAR_15 && VAR_17 < VAR_15->leds.num_leds) {
   if (VAR_15->leds.leds[VAR_17].name)
    FUNC_14(VAR_14[VAR_17].name,
      sizeof(VAR_14[VAR_17].name), "pca963x:%s",
      VAR_15->leds.leds[VAR_17].name);
   if (VAR_15->leds.leds[VAR_17].default_trigger)
    VAR_14[VAR_17].led_cdev.default_trigger =
     VAR_15->leds.leds[VAR_17].default_trigger;
  }
  if (!VAR_15 || VAR_17 >= VAR_15->leds.num_leds ||
      !VAR_15->leds.leds[VAR_17].name)
   FUNC_14(VAR_14[VAR_17].name, sizeof(VAR_14[VAR_17].name),
     "pca963x:%d:%.2x:%d", VAR_11->adapter->nr,
     VAR_11->addr, VAR_17);

  VAR_14[VAR_17].led_cdev.name = VAR_14[VAR_17].name;
  VAR_14[VAR_17].led_cdev.brightness_set_blocking = VAR_10;

  if (VAR_15 && VAR_15->blink_type == VAR_3)
   VAR_14[VAR_17].led_cdev.blink_set = VAR_8;

  VAR_18 = FUNC_10(&VAR_11->dev, &VAR_14[VAR_17].led_cdev);
  if (VAR_18 < 0)
   goto exit;
 }


 FUNC_9(VAR_11, VAR_5, FUNC_0(4));

 if (VAR_15) {
  u8 VAR_19 = FUNC_8(VAR_14->chip->client,
          VAR_6);

  if (VAR_15->outdrv == VAR_7)
   VAR_19 |= 0x01;
  else
   VAR_19 |= 0x05;

  if (VAR_15->dir == VAR_4)
   VAR_19 |= 0x10;
  FUNC_9(VAR_14->chip->client, VAR_6,
       VAR_19);
 }

 return 0;

exit:
 while (VAR_17--)
  FUNC_11(&VAR_14[VAR_17].led_cdev);

 return VAR_18;
}
