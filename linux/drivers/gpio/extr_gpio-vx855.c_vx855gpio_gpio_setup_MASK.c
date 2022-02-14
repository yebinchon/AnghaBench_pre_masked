
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {char* label; int can_sleep; int names; int ngpio; scalar_t__ base; int * dbg_show; int set_config; int set; int get; int direction_output; int direction_input; int owner; } ;
struct vx855_gpio {struct gpio_chip gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct vx855_gpio *VAR_8)
{
 struct gpio_chip *VAR_9 = &VAR_8->gpio;

 VAR_9->label = "VX855 South Bridge";
 VAR_9->owner = VAR_1;
 VAR_9->direction_input = VAR_2;
 VAR_9->direction_output = VAR_3;
 VAR_9->get = VAR_4;
 VAR_9->set = VAR_6;
 VAR_9->set_config = VAR_7,
 VAR_9->dbg_show = ((void*)0);
 VAR_9->base = 0;
 VAR_9->ngpio = VAR_0;
 VAR_9->can_sleep = 0;
 VAR_9->names = VAR_5;
}
