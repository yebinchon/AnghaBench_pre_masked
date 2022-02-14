
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_fwspec {int param_count; unsigned int* param; int fwnode; } ;
struct gpio_chip {TYPE_1__* parent; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct irq_fwspec*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_3, unsigned int VAR_4)
{
 struct irq_fwspec VAR_5;

 if (VAR_4 < VAR_2)
  return -VAR_0;

 VAR_5.fwnode = FUNC_1(VAR_3->parent->of_node);
 VAR_5.param_count = 2;
 VAR_5.param[0] = VAR_4 - VAR_2;




 VAR_5.param[1] = VAR_1;

 return FUNC_0(&VAR_5);
}
