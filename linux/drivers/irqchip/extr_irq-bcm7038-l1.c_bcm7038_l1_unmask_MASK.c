
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t hwirq; } ;
struct bcm7038_l1_chip {int lock; int * affinity; } ;


 int FUNC_0 (struct irq_data*,int ) ;
 struct bcm7038_l1_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 struct bcm7038_l1_chip *VAR_1 = FUNC_1(VAR_0);
 unsigned long VAR_2;

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1->affinity[VAR_0->hwirq]);
 FUNC_3(&VAR_1->lock, VAR_2);
}
