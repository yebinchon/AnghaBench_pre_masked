
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_2__ {int imask0; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct irq_data *VAR_2)
{
 VAR_1->imask0 &= ~(1 << (VAR_2->irq - VAR_0));
}
