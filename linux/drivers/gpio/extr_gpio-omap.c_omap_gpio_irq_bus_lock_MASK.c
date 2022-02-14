
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct gpio_bank {TYPE_1__ chip; } ;


 struct gpio_bank* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct gpio_bank *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->chip.parent);
}
