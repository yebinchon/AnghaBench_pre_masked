
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_keys_button_data {TYPE_1__* b; scalar_t__ can_sleep; } ;
struct TYPE_2__ {int active_low; int gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_keys_button_data *VAR_0)
{
 int VAR_1;

 if (VAR_0->can_sleep)
  VAR_1 = !!FUNC_1(VAR_0->b->gpio);
 else
  VAR_1 = !!FUNC_0(VAR_0->b->gpio);

 return VAR_1 ^ VAR_0->b->active_low;
}
