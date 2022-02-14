
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct led_classdev {int dummy; } ;
struct blinkm_led {TYPE_1__* i2c_client; } ;
struct blinkm_data {void* next_red; void* next_green; void* next_blue; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (TYPE_1__*,int ) ;
 struct blinkm_led* FUNC_1 (struct led_classdev*) ;
 int FUNC_2 (int *,char*,void*,void*,void*) ;
 int FUNC_3 (int *,char*) ;
 struct blinkm_data* FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct led_classdev *VAR_2,
     enum led_brightness VAR_3, int VAR_4)
{

 struct blinkm_led *VAR_5 = FUNC_1(VAR_2);
 struct blinkm_data *VAR_6 = FUNC_4(VAR_5->i2c_client);

 switch (VAR_4) {
 case 128:

  if (VAR_6->next_red == (u8) VAR_3)
   return 0;
  VAR_6->next_red = (u8) VAR_3;
  break;
 case 129:

  if (VAR_6->next_green == (u8) VAR_3)
   return 0;
  VAR_6->next_green = (u8) VAR_3;
  break;
 case 130:

  if (VAR_6->next_blue == (u8) VAR_3)
   return 0;
  VAR_6->next_blue = (u8) VAR_3;
  break;

 default:
  FUNC_3(&VAR_5->i2c_client->dev, "BlinkM: unknown color.\n");
  return -VAR_1;
 }

 FUNC_0(VAR_5->i2c_client, VAR_0);
 FUNC_2(&VAR_5->i2c_client->dev,
   "# DONE # next_red = %d, next_green = %d,"
   " next_blue = %d\n",
   VAR_6->next_red, VAR_6->next_green,
   VAR_6->next_blue);
 return 0;
}
