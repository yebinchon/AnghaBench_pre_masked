
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct gpio_fan_data {scalar_t__ gpios; } ;


 struct gpio_fan_data* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct gpio_fan_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_0)
{
 struct gpio_fan_data *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->gpios)
  FUNC_1(VAR_1, 0);
}
