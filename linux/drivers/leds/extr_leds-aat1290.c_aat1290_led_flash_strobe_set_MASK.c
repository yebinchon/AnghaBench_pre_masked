
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_flash_setting {int val; } ;
struct led_classdev {scalar_t__ brightness; } ;
struct led_classdev_flash {struct led_flash_setting timeout; struct led_classdev led_cdev; } ;
struct aat1290_led {int movie_mode; int lock; int gpio_en_set; int gpio_fl_en; } ;


 int FUNC_0 (struct aat1290_led*,int ) ;
 struct aat1290_led* FUNC_1 (struct led_classdev_flash*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct led_classdev_flash *VAR_0,
      bool VAR_1)

{
 struct aat1290_led *VAR_2 = FUNC_1(VAR_0);
 struct led_classdev *VAR_3 = &VAR_0->led_cdev;
 struct led_flash_setting *VAR_4 = &VAR_0->timeout;

 FUNC_3(&VAR_2->lock);

 if (VAR_1) {
  FUNC_0(VAR_2, VAR_4->val);
  FUNC_2(VAR_2->gpio_fl_en, 1);
 } else {
  FUNC_2(VAR_2->gpio_fl_en, 0);
  FUNC_2(VAR_2->gpio_en_set, 0);
 }







 VAR_3->brightness = 0;
 VAR_2->movie_mode = 0;

 FUNC_4(&VAR_2->lock);

 return 0;
}
