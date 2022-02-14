
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_fan_data {int num_gpios; int pwm_enable; scalar_t__ speed_index; struct gpio_desc** gpios; } ;
struct gpio_desc {int dummy; } ;


 scalar_t__ FUNC_0 (struct gpio_fan_data*) ;
 int FUNC_1 (struct gpio_desc*,int ) ;
 int FUNC_2 (struct gpio_desc*) ;

__attribute__((used)) static int FUNC_3(struct gpio_fan_data *VAR_0)
{
 int VAR_1 = VAR_0->num_gpios;
 struct gpio_desc **VAR_2 = VAR_0->gpios;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {






  VAR_4 = FUNC_1(VAR_2[VAR_3],
     FUNC_2(VAR_2[VAR_3]));
  if (VAR_4)
   return VAR_4;
 }

 VAR_0->pwm_enable = 1;
 VAR_0->speed_index = FUNC_0(VAR_0);
 if (VAR_0->speed_index < 0)
  return VAR_0->speed_index;

 return 0;
}
