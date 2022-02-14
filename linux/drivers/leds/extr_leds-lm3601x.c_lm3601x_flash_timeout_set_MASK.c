
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm3601x_led {int lock; int flash_timeout; } ;
struct led_classdev_flash {int dummy; } ;


 struct lm3601x_led* FUNC_0 (struct led_classdev_flash*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct led_classdev_flash *VAR_0,
    u32 VAR_1)
{
 struct lm3601x_led *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->lock);

 VAR_2->flash_timeout = VAR_1;

 FUNC_2(&VAR_2->lock);

 return 0;
}
