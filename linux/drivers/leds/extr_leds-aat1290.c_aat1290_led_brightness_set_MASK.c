
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
struct aat1290_led {int movie_mode; int lock; int gpio_en_set; int gpio_fl_en; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aat1290_led*,int ,int) ;
 struct aat1290_led* FUNC_1 (struct led_classdev_flash*) ;
 int FUNC_2 (int ,int ) ;
 struct led_classdev_flash* FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct led_classdev *VAR_6,
     enum led_brightness VAR_7)
{
 struct led_classdev_flash *VAR_8 = FUNC_3(VAR_6);
 struct aat1290_led *VAR_9 = FUNC_1(VAR_8);

 FUNC_4(&VAR_9->lock);

 if (VAR_7 == 0) {
  FUNC_2(VAR_9->gpio_fl_en, 0);
  FUNC_2(VAR_9->gpio_en_set, 0);
  VAR_9->movie_mode = 0;
 } else {
  if (!VAR_9->movie_mode) {
   FUNC_0(VAR_9,
    VAR_1,
    VAR_2);
   VAR_9->movie_mode = 1;
  }

  FUNC_0(VAR_9, VAR_4,
    VAR_0 - VAR_7);
  FUNC_0(VAR_9, VAR_3,
    VAR_5);
 }

 FUNC_5(&VAR_9->lock);

 return 0;
}
