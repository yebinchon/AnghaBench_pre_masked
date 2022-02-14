
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct nasgpio_led {struct led_classdev led_cdev; } ;


 struct nasgpio_led* VAR_0 ;

__attribute__((used)) static struct led_classdev *FUNC_0(int VAR_1)
{
 struct nasgpio_led *VAR_2 = &VAR_0[VAR_1];
 struct led_classdev *VAR_3 = &VAR_2->led_cdev;
 return VAR_3;
}
