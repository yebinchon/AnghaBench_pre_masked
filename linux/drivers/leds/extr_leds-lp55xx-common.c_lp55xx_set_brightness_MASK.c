
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lp55xx_led {scalar_t__ brightness; TYPE_1__* chip; } ;
struct lp55xx_device_config {int (* brightness_fn ) (struct lp55xx_led*) ;} ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct lp55xx_device_config* cfg; } ;


 struct lp55xx_led* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct lp55xx_led*) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_0,
        enum led_brightness VAR_1)
{
 struct lp55xx_led *VAR_2 = FUNC_0(VAR_0);
 struct lp55xx_device_config *VAR_3 = VAR_2->chip->cfg;

 VAR_2->brightness = (u8)VAR_1;
 return VAR_3->brightness_fn(VAR_2);
}
