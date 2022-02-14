
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm3601x_led {int last_flag; } ;
struct led_classdev_flash {int dummy; } ;


 struct lm3601x_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (struct lm3601x_led*) ;

__attribute__((used)) static int FUNC_2(struct led_classdev_flash *VAR_0,
    u32 *VAR_1)
{
 struct lm3601x_led *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2);

 *VAR_1 = VAR_2->last_flag;

 return 0;
}
