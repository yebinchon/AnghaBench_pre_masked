
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct irq_chip_generic {struct dwapb_gpio* private; } ;
struct gpio_chip {int dummy; } ;
struct dwapb_gpio {TYPE_1__* ports; } ;
struct TYPE_2__ {struct gpio_chip gc; } ;


 int FUNC_0 (struct gpio_chip*,int ) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct dwapb_gpio *VAR_2 = VAR_1->private;
 struct gpio_chip *VAR_3 = &VAR_2->ports[0].gc;

 FUNC_0(VAR_3, FUNC_2(VAR_0));
}
