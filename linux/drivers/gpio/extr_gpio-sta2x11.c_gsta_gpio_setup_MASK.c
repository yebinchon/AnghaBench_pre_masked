
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int base; int can_sleep; int to_irq; int ngpio; int * dbg_show; int set; int direction_output; int get; int direction_input; int owner; int label; } ;
struct gsta_gpio {int dev; struct gpio_chip gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct gsta_gpio *VAR_7)
{
 struct gpio_chip *VAR_8 = &VAR_7->gpio;







 static int VAR_9;

 VAR_8->label = FUNC_0(VAR_7->dev);
 VAR_8->owner = VAR_1;
 VAR_8->direction_input = VAR_2;
 VAR_8->get = VAR_4;
 VAR_8->direction_output = VAR_3;
 VAR_8->set = VAR_5;
 VAR_8->dbg_show = ((void*)0);
 VAR_8->base = VAR_9;
 VAR_8->ngpio = VAR_0;
 VAR_8->can_sleep = 0;
 VAR_8->to_irq = VAR_6;





 if (!VAR_9)
  VAR_9 = -1;
}
