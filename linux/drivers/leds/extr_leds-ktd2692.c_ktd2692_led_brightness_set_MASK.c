
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
struct ktd2692_context {int mode; int lock; int aux_gpio; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ktd2692_context* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ktd2692_context*,int) ;
 struct led_classdev_flash* FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct led_classdev *VAR_6,
           enum led_brightness VAR_7)
{
 struct led_classdev_flash *VAR_8 = FUNC_3(VAR_6);
 struct ktd2692_context *VAR_9 = FUNC_0(VAR_8);

 FUNC_4(&VAR_9->lock);

 if (VAR_7 == VAR_5) {
  VAR_9->mode = VAR_1;
  FUNC_1(VAR_9->aux_gpio, VAR_0);
 } else {
  FUNC_2(VAR_9, VAR_7 |
     VAR_4);
  VAR_9->mode = VAR_2;
 }

 FUNC_2(VAR_9, VAR_9->mode | VAR_3);
 FUNC_5(&VAR_9->lock);

 return 0;
}
