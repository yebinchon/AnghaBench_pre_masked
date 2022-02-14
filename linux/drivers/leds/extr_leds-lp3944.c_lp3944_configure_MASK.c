
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lp3944_platform_data {int leds_size; struct lp3944_led* leds; } ;
struct TYPE_3__ {int max_brightness; int brightness; int name; int flags; int blink_set; int brightness_set_blocking; } ;
struct lp3944_led_data {int id; int type; TYPE_1__ ldev; struct i2c_client* client; } ;
struct lp3944_led {int type; int status; int name; } ;
struct lp3944_data {struct lp3944_led_data* leds; } ;
struct i2c_client {int dev; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int ,...) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct lp3944_led_data*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3,
       struct lp3944_data *VAR_4,
       struct lp3944_platform_data *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->leds_size; VAR_6++) {
  struct lp3944_led *VAR_8 = &VAR_5->leds[VAR_6];
  struct lp3944_led_data *VAR_9 = &VAR_4->leds[VAR_6];
  VAR_9->client = VAR_3;
  VAR_9->id = VAR_6;

  switch (VAR_8->type) {

  case 130:
  case 129:
   VAR_9->type = VAR_8->type;
   VAR_9->ldev.name = VAR_8->name;
   VAR_9->ldev.max_brightness = 1;
   VAR_9->ldev.brightness_set_blocking =
      VAR_2;
   VAR_9->ldev.blink_set = VAR_1;
   VAR_9->ldev.flags = VAR_0;

   VAR_7 = FUNC_1(&VAR_3->dev, &VAR_9->ldev);
   if (VAR_7 < 0) {
    FUNC_0(&VAR_3->dev,
     "couldn't register LED %s\n",
     VAR_9->ldev.name);
    goto exit;
   }


   VAR_9->ldev.brightness =
     (enum led_brightness) VAR_8->status;


   VAR_7 = FUNC_3(VAR_9, VAR_8->status);
   if (VAR_7 < 0) {
    FUNC_0(&VAR_3->dev,
     "%s couldn't set STATUS %d\n",
     VAR_9->ldev.name, VAR_8->status);
    goto exit;
   }
   break;

  case 128:
  default:
   break;

  }
 }
 return 0;

exit:
 if (VAR_6 > 0)
  for (VAR_6 = VAR_6 - 1; VAR_6 >= 0; VAR_6--)
   switch (VAR_5->leds[VAR_6].type) {

   case 130:
   case 129:
    FUNC_2(&VAR_4->leds[VAR_6].ldev);
    break;

   case 128:
   default:
    break;
   }

 return VAR_7;
}
