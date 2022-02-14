
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_gpio_pin {int dummy; } ;
struct TYPE_2__ {struct hw_gpio_pin base; } ;
struct hw_ddc {TYPE_1__ base; } ;
struct gpio {int dummy; } ;


 struct hw_ddc* FUNC_0 (struct gpio*) ;

struct hw_gpio_pin *FUNC_1(struct gpio *VAR_0)
{
 struct hw_ddc *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->base.base;
}
