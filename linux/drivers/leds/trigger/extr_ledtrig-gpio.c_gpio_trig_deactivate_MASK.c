
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct gpio_trig_data {int gpio; } ;


 int FUNC_0 (int ,struct led_classdev*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gpio_trig_data*) ;
 struct gpio_trig_data* FUNC_4 (struct led_classdev*) ;

__attribute__((used)) static void FUNC_5(struct led_classdev *VAR_0)
{
 struct gpio_trig_data *VAR_1 = FUNC_4(VAR_0);

 if (FUNC_1(VAR_1->gpio))
  FUNC_0(FUNC_2(VAR_1->gpio), VAR_0);
 FUNC_3(VAR_1);
}
