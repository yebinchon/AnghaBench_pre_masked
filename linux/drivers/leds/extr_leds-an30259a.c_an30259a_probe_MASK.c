
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct led_init_data {char* default_label; int devicename; int fwnode; } ;
struct i2c_client {int dev; } ;
struct an30259a {int num_leds; int mutex; TYPE_2__* leds; int regmap; struct i2c_client* client; } ;
struct TYPE_3__ {int blink_set; int brightness_set_blocking; } ;
struct TYPE_4__ {TYPE_1__ cdev; int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_client*,struct an30259a*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 struct an30259a* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,TYPE_1__*,struct led_init_data*) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct an30259a*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6)
{
 struct an30259a *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_2(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_6, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_7(&VAR_7->mutex);
 VAR_7->client = VAR_6;
 FUNC_5(VAR_6, VAR_7);

 VAR_7->regmap = FUNC_4(VAR_6, &VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_7->num_leds; VAR_8++) {
  struct led_init_data VAR_10 = {};

  FUNC_1(&VAR_7->leds[VAR_8]);
  VAR_7->leds[VAR_8].cdev.brightness_set_blocking =
   VAR_4;
  VAR_7->leds[VAR_8].cdev.blink_set = VAR_3;

  VAR_10.fwnode = VAR_7->leds[VAR_8].fwnode;
  VAR_10.devicename = VAR_0;
  VAR_10.default_label = ":";

  VAR_9 = FUNC_3(&VAR_6->dev,
       &VAR_7->leds[VAR_8].cdev,
       &VAR_10);
  if (VAR_9 < 0)
   goto exit;
 }
 return 0;

exit:
 FUNC_6(&VAR_7->mutex);
 return VAR_9;
}
