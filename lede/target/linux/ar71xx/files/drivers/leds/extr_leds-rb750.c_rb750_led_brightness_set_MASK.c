
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb750_led_dev {int active_low; int mask; int (* latch_change ) (int ,int ) ;} ;
struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct rb750_led_dev* FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_1,
         enum led_brightness VAR_2)
{
 struct rb750_led_dev *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = (VAR_2 == VAR_0) ? 0 : 1;
 VAR_4 ^= VAR_3->active_low;

 if (VAR_4)
  VAR_3->latch_change(0, VAR_3->mask);
 else
  VAR_3->latch_change(VAR_3->mask, 0);
}
