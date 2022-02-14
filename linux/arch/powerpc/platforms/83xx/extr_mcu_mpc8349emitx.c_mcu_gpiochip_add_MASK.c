
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int can_sleep; int base; struct device_node* of_node; int direction_output; int set; int ngpio; int label; int owner; } ;
struct mcu {struct gpio_chip gc; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gpio_chip*,struct mcu*) ;
 int FUNC_1 (int ,char*,struct device_node*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct device_node* FUNC_2 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_3(struct mcu *VAR_6)
{
 struct device_node *VAR_7;
 struct gpio_chip *VAR_8 = &VAR_6->gc;

 VAR_7 = FUNC_2(((void*)0), ((void*)0), "fsl,mcu-mpc8349emitx");
 if (!VAR_7)
  return -VAR_0;

 VAR_8->owner = VAR_3;
 VAR_8->label = FUNC_1(VAR_1, "%pOF", VAR_7);
 VAR_8->can_sleep = 1;
 VAR_8->ngpio = VAR_2;
 VAR_8->base = -1;
 VAR_8->set = VAR_5;
 VAR_8->direction_output = VAR_4;
 VAR_8->of_node = VAR_7;

 return FUNC_0(VAR_8, VAR_6);
}
