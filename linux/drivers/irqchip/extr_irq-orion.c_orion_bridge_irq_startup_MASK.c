
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int (* irq_unmask ) (struct irq_data*) ;int (* irq_ack ) (struct irq_data*) ;} ;
struct irq_chip_type {TYPE_1__ chip; } ;


 struct irq_chip_type* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static unsigned int FUNC_3(struct irq_data *VAR_0)
{
 struct irq_chip_type *VAR_1 = FUNC_0(VAR_0);

 VAR_1->chip.irq_ack(VAR_0);
 VAR_1->chip.irq_unmask(VAR_0);
 return 0;
}
