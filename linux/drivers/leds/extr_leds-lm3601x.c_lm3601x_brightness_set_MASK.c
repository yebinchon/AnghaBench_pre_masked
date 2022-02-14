
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3601x_led {scalar_t__ led_mode; int lock; int regmap; } ;
struct led_classdev_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lm3601x_led* FUNC_0 (struct led_classdev_flash*) ;
 struct led_classdev_flash* FUNC_1 (struct led_classdev*) ;
 int FUNC_2 (struct lm3601x_led*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct led_classdev *VAR_6,
     enum led_brightness VAR_7)
{
 struct led_classdev_flash *VAR_8 = FUNC_1(VAR_6);
 struct lm3601x_led *VAR_9 = FUNC_0(VAR_8);
 int VAR_10, VAR_11;

 FUNC_3(&VAR_9->lock);

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 < 0)
  goto out;

 if (VAR_9->led_mode == VAR_2)
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_4;

 if (VAR_7 == VAR_0) {
  VAR_10 = FUNC_5(VAR_9->regmap, VAR_1,
     VAR_11, VAR_0);
  goto out;
 }

 VAR_10 = FUNC_6(VAR_9->regmap, VAR_3, VAR_7);
 if (VAR_10 < 0)
  goto out;

 VAR_10 = FUNC_5(VAR_9->regmap, VAR_1,
    VAR_5 | VAR_4,
    VAR_11);
out:
 FUNC_4(&VAR_9->lock);
 return VAR_10;
}
