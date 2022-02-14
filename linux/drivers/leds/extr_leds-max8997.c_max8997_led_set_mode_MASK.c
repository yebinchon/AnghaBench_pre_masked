
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {void* max_brightness; } ;
struct max8997_led {int led_mode; TYPE_2__* iodev; TYPE_1__ cdev; int id; } ;
struct i2c_client {int dummy; } ;
typedef enum max8997_led_mode { ____Placeholder_max8997_led_mode } max8997_led_mode ;
struct TYPE_4__ {int dev; struct i2c_client* i2c; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;


 int VAR_11 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct max8997_led *VAR_12,
   enum max8997_led_mode VAR_13)
{
 int VAR_14;
 struct i2c_client *VAR_15 = VAR_12->iodev->i2c;
 u8 VAR_16 = 0, VAR_17;

 switch (VAR_13) {
 case 131:
  VAR_16 = VAR_4 | VAR_0;
  VAR_17 = VAR_12->id ?
        VAR_4 : VAR_0;
  VAR_12->cdev.max_brightness = VAR_8;
  break;
 case 129:
  VAR_16 = VAR_6 | VAR_2;
  VAR_17 = VAR_12->id ?
        VAR_6 : VAR_2;
  VAR_12->cdev.max_brightness = VAR_9;
  break;
 case 130:
  VAR_16 = VAR_5 |
         VAR_1;
  VAR_17 = VAR_12->id ?
        VAR_5 : VAR_1;
  VAR_12->cdev.max_brightness = VAR_8;
  break;
 case 128:
  VAR_16 = VAR_7 |
         VAR_3;
  VAR_17 = VAR_12->id ?
        VAR_7 : VAR_3;
  VAR_12->cdev.max_brightness = VAR_9;
  break;
 default:
  VAR_12->cdev.max_brightness = VAR_10;
  break;
 }

 if (VAR_16) {
  VAR_14 = FUNC_1(VAR_15, VAR_11, VAR_17,
      VAR_16);
  if (VAR_14)
   FUNC_0(VAR_12->iodev->dev,
    "failed to update register(%d)\n", VAR_14);
 }

 VAR_12->led_mode = VAR_13;
}
