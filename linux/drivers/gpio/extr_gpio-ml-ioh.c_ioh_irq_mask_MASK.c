
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct irq_chip_generic {struct ioh_gpio* private; } ;
struct ioh_gpio {int irq_base; size_t ch; TYPE_2__* reg; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int imask; } ;


 int FUNC_0 (int,int *) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct irq_chip_generic *VAR_1 = FUNC_1(VAR_0);
 struct ioh_gpio *VAR_2 = VAR_1->private;

 FUNC_0(1 << (VAR_0->irq - VAR_2->irq_base),
    &VAR_2->reg->regs[VAR_2->ch].imask);
}
