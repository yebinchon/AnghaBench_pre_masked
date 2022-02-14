
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_gpio_pin {int opened; } ;
struct hw_gpio {int dummy; } ;
typedef enum gpio_mode { ____Placeholder_gpio_mode } gpio_mode ;


 struct hw_gpio* FUNC_0 (struct hw_gpio_pin*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct hw_gpio*,int) ;
 int FUNC_2 (struct hw_gpio*) ;

bool FUNC_3(
 struct hw_gpio_pin *VAR_1,
 enum gpio_mode VAR_2)
{
 struct hw_gpio *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_3);

 VAR_1->opened = (FUNC_1(VAR_3, VAR_2) == VAR_0);

 return VAR_1->opened;
}
