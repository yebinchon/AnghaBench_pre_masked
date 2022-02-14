
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct led_classdev {unsigned long blink_delay_on; unsigned long blink_delay_off; unsigned long new_blink_brightness; unsigned long blink_brightness; int blink_timer; int work_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 struct led_classdev* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_7 ;
 struct led_classdev* VAR_8 ;
 unsigned long FUNC_2 (struct led_classdev*) ;
 int FUNC_3 (struct led_classdev*,unsigned long) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_9)
{
 struct led_classdev *VAR_10 = FUNC_1(VAR_10, VAR_9, VAR_6);
 unsigned long VAR_11;
 unsigned long VAR_12;

 if (!VAR_10->blink_delay_on || !VAR_10->blink_delay_off) {
  FUNC_3(VAR_10, VAR_5);
  FUNC_0(VAR_4, &VAR_10->work_flags);
  return;
 }

 if (FUNC_7(VAR_3,
          &VAR_10->work_flags)) {
  FUNC_0(VAR_4, &VAR_10->work_flags);
  return;
 }

 VAR_11 = FUNC_2(VAR_10);
 if (!VAR_11) {

  if (FUNC_7(VAR_0,
     &VAR_10->work_flags))
   VAR_11 = VAR_10->new_blink_brightness;
  else
   VAR_11 = VAR_10->blink_brightness;
  VAR_12 = VAR_10->blink_delay_on;
 } else {



  VAR_10->blink_brightness = VAR_11;
  VAR_11 = VAR_5;
  VAR_12 = VAR_10->blink_delay_off;
 }

 FUNC_3(VAR_10, VAR_11);





 if (FUNC_8(VAR_2, &VAR_10->work_flags)) {
  if (FUNC_8(VAR_1, &VAR_10->work_flags)) {
   if (VAR_11)
    FUNC_6(VAR_3,
     &VAR_10->work_flags);
  } else {
   if (!VAR_11)
    FUNC_6(VAR_3,
     &VAR_10->work_flags);
  }
 }

 FUNC_4(&VAR_10->blink_timer, VAR_7 + FUNC_5(VAR_12));
}
