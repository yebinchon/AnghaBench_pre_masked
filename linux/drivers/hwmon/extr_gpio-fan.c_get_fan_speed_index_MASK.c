
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_fan_data {int num_speed; int dev; TYPE_1__* speed; } ;
struct TYPE_2__ {int ctrl_val; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_fan_data*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_fan_data *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_speed; VAR_3++)
  if (VAR_1->speed[VAR_3].ctrl_val == VAR_2)
   return VAR_3;

 FUNC_1(VAR_1->dev,
   "missing speed array entry for GPIO value 0x%x\n", VAR_2);

 return -VAR_0;
}
