
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max8997_led {int led_mode; TYPE_1__* iodev; int id; } ;
struct i2c_client {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int dev; struct i2c_client* i2c; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct i2c_client*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct max8997_led *VAR_7,
    enum led_brightness VAR_8)
{
 int VAR_9;
 struct i2c_client *VAR_10 = VAR_7->iodev->i2c;
 u8 VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

 switch (VAR_7->led_mode) {
 case 131:
 case 130:
  VAR_11 = VAR_8 << VAR_1;
  VAR_12 = VAR_0;
  VAR_13 = VAR_7->id ? VAR_5 : VAR_4;
  break;
 case 129:
 case 128:
  VAR_11 = VAR_8 << VAR_3;
  VAR_12 = VAR_2;
  VAR_13 = VAR_6;
  break;
 default:
  break;
 }

 if (VAR_12) {
  VAR_9 = FUNC_1(VAR_10, VAR_13, VAR_11, VAR_12);
  if (VAR_9)
   FUNC_0(VAR_7->iodev->dev,
    "failed to update register(%d)\n", VAR_9);
 }
}
