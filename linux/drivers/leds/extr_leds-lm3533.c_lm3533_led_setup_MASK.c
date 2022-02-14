
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3533_led_platform_data {int pwm; int max_current; } ;
struct lm3533_led {int cb; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct lm3533_led *VAR_0,
     struct lm3533_led_platform_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->cb, VAR_1->max_current);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(&VAR_0->cb, VAR_1->pwm);
}
