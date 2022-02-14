
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_fan_data {int speed_index; TYPE_1__* speed; } ;
struct TYPE_2__ {int ctrl_val; } ;


 int FUNC_0 (struct gpio_fan_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct gpio_fan_data *VAR_0, int VAR_1)
{
 if (VAR_0->speed_index == VAR_1)
  return;

 FUNC_0(VAR_0, VAR_0->speed[VAR_1].ctrl_val);
 VAR_0->speed_index = VAR_1;
}
