
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pca963x_led {int led_num; TYPE_2__* chip; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_4__ {int client; TYPE_1__* chipdef; } ;
struct TYPE_3__ {int ledout_base; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct pca963x_led *VAR_3,
          enum led_brightness VAR_4)
{
 u8 VAR_5 = VAR_3->chip->chipdef->ledout_base
  + (VAR_3->led_num / 4);
 u8 VAR_6;
 int VAR_7 = 2 * (VAR_3->led_num % 4);
 u8 VAR_8 = 0x3 << VAR_7;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_3->chip->client, VAR_5);
 switch (VAR_4) {
 case 129:
  VAR_9 = FUNC_1(VAR_3->chip->client,
   VAR_5,
   (VAR_6 & ~VAR_8) | (VAR_0 << VAR_7));
  break;
 case 128:
  VAR_9 = FUNC_1(VAR_3->chip->client,
   VAR_5, VAR_6 & ~VAR_8);
  break;
 default:
  VAR_9 = FUNC_1(VAR_3->chip->client,
   VAR_2 + VAR_3->led_num,
   VAR_4);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_9 = FUNC_1(VAR_3->chip->client,
   VAR_5,
   (VAR_6 & ~VAR_8) | (VAR_1 << VAR_7));
  break;
 }

 return VAR_9;
}
