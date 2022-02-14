
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int irq; } ;
struct TYPE_2__ {int cmeimask1; int imask1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_0(struct irq_data *VAR_4)
{
 VAR_3->cmeimask1 &= ~(1 << (VAR_4->irq - VAR_1));
 if (!VAR_3->cmeimask1)
  VAR_3->imask1 &= ~(1 << (VAR_2 - VAR_0));
}
