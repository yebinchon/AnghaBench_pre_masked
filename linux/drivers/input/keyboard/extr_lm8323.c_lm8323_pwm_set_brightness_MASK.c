
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm8323_pwm {int desired_brightness; int work; int lock; struct lm8323_chip* chip; } ;
struct lm8323_chip {int lock; int pm_suspend; } ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 struct lm8323_pwm* FUNC_0 (struct led_classdev*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct led_classdev *VAR_0,
          enum led_brightness VAR_1)
{
 struct lm8323_pwm *VAR_2 = FUNC_0(VAR_0);
 struct lm8323_chip *VAR_3 = VAR_2->chip;

 FUNC_4(&VAR_2->lock);
 VAR_2->desired_brightness = VAR_1;
 FUNC_5(&VAR_2->lock);

 if (FUNC_1()) {
  FUNC_6(&VAR_2->work);
 } else {



  FUNC_4(&VAR_3->lock);
  if (FUNC_2(!VAR_3->pm_suspend))
   FUNC_6(&VAR_2->work);
  else
   FUNC_3(&VAR_2->work);
  FUNC_5(&VAR_3->lock);
 }
}
