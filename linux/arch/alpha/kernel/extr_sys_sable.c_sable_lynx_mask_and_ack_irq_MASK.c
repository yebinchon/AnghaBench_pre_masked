
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {size_t irq; } ;
struct TYPE_2__ {unsigned long* irq_to_mask; unsigned long shadow_mask; int (* ack_irq_hw ) (unsigned long) ;int (* update_irq_hw ) (unsigned long,unsigned long) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct irq_data *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 VAR_3 = VAR_1->irq_to_mask[VAR_2->irq];
 FUNC_0(&VAR_0);
 VAR_4 = VAR_1->shadow_mask |= 1UL << VAR_3;
 VAR_1->update_irq_hw(VAR_3, VAR_4);
 VAR_1->ack_irq_hw(VAR_3);
 FUNC_1(&VAR_0);
}
