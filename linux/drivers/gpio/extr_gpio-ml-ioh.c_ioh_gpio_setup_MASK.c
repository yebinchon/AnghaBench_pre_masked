
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int base; int ngpio; int can_sleep; int to_irq; int * dbg_show; int set; int direction_output; int get; int direction_input; int owner; int label; } ;
struct ioh_gpio {int dev; struct gpio_chip gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct ioh_gpio *VAR_6, int VAR_7)
{
 struct gpio_chip *VAR_8 = &VAR_6->gpio;

 VAR_8->label = FUNC_0(VAR_6->dev);
 VAR_8->owner = VAR_0;
 VAR_8->direction_input = VAR_1;
 VAR_8->get = VAR_3;
 VAR_8->direction_output = VAR_2;
 VAR_8->set = VAR_4;
 VAR_8->dbg_show = ((void*)0);
 VAR_8->base = -1;
 VAR_8->ngpio = VAR_7;
 VAR_8->can_sleep = 0;
 VAR_8->to_irq = VAR_5;
}
