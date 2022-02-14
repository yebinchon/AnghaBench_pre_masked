
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {int (* gpio_set ) (int ,int) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct led_classdev *VAR_2,
  enum led_brightness VAR_3)
{
 VAR_1.gpio_set(VAR_0, VAR_3 ? 1 : 0);
}
