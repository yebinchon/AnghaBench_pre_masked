
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int new_blink_brightness; int work_flags; int set_brightness_work; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct led_classdev*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct led_classdev *VAR_4,
   enum led_brightness VAR_5)
{




 if (FUNC_3(VAR_2, &VAR_4->work_flags)) {





  if (VAR_5 == VAR_3) {
   FUNC_2(VAR_1, &VAR_4->work_flags);
   FUNC_1(&VAR_4->set_brightness_work);
  } else {
   FUNC_2(VAR_0,
    &VAR_4->work_flags);
   VAR_4->new_blink_brightness = VAR_5;
  }
  return;
 }

 FUNC_0(VAR_4, VAR_5);
}
