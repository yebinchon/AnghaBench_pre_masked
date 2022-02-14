
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nasgpio_led {int gpio_bit; } ;
struct led_classdev {int dummy; } ;


 int FUNC_0 (int) ;
 struct nasgpio_led* FUNC_1 (struct led_classdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u32 FUNC_4(struct led_classdev *VAR_2, u32 VAR_3)
{
 struct nasgpio_led *VAR_4 = FUNC_1(VAR_2);
 u32 VAR_5;

 FUNC_2(&VAR_1);
 VAR_5 = FUNC_0(VAR_0 + VAR_3);
 FUNC_3(&VAR_1);
 if (VAR_5 & (1<<VAR_4->gpio_bit))
  return 1;
 return 0;
}
