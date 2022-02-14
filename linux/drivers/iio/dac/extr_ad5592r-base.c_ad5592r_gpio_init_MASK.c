
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; int ngpio; int can_sleep; int owner; int request; int set; int get; int direction_output; int direction_input; int parent; int label; } ;
struct ad5592r_state {TYPE_1__ gpiochip; int gpio_lock; int dev; int gpio_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,struct ad5592r_state*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ad5592r_state *VAR_6)
{
 if (!VAR_6->gpio_map)
  return 0;

 VAR_6->gpiochip.label = FUNC_0(VAR_6->dev);
 VAR_6->gpiochip.base = -1;
 VAR_6->gpiochip.ngpio = 8;
 VAR_6->gpiochip.parent = VAR_6->dev;
 VAR_6->gpiochip.can_sleep = 1;
 VAR_6->gpiochip.direction_input = VAR_1;
 VAR_6->gpiochip.direction_output = VAR_2;
 VAR_6->gpiochip.get = VAR_3;
 VAR_6->gpiochip.set = VAR_5;
 VAR_6->gpiochip.request = VAR_4;
 VAR_6->gpiochip.owner = VAR_0;

 FUNC_2(&VAR_6->gpio_lock);

 return FUNC_1(&VAR_6->gpiochip, VAR_6);
}
