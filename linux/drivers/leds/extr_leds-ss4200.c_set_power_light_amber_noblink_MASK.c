
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nasgpio_led {int led_cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nasgpio_led* FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct nasgpio_led *VAR_2 = FUNC_0("power:amber:power");
 struct nasgpio_led *VAR_3 = FUNC_0("power:blue:power");

 if (!VAR_2 || !VAR_3)
  return;



 FUNC_2("setting blue off and amber on\n");

 FUNC_1(&VAR_3->led_cdev, VAR_1);
 FUNC_1(&VAR_2->led_cdev, VAR_0);
}
