
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {scalar_t__ irq; } ;
struct TYPE_2__ {int imask1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct irq_data *VAR_3)
{


 if (VAR_3->irq != VAR_1)
  VAR_2->imask1 |= (1 << (VAR_3->irq - VAR_0));
}
