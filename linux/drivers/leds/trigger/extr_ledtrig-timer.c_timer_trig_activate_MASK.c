
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; int blink_delay_off; int blink_delay_on; int set_brightness_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct led_classdev*,int *,int *) ;
 int FUNC_2 (struct led_classdev*) ;

__attribute__((used)) static int FUNC_3(struct led_classdev *VAR_1)
{
 if (VAR_1->flags & VAR_0) {
  FUNC_2(VAR_1);




  VAR_1->flags &= ~VAR_0;
 }





 FUNC_0(&VAR_1->set_brightness_work);
 FUNC_1(VAR_1, &VAR_1->blink_delay_on,
        &VAR_1->blink_delay_off);

 return 0;
}
