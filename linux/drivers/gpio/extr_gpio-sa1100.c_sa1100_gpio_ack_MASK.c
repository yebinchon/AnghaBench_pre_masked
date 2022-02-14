
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_gpio_chip {scalar_t__ membase; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct sa1100_gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct sa1100_gpio_chip *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(FUNC_0(VAR_1->hwirq), VAR_2->membase + VAR_0);
}
