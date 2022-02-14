
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct irq_data {size_t hwirq; } ;
struct TYPE_2__ {int lock; int safe_map; int (* write ) (size_t,int ) ;int * irq_map; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct irq_data* FUNC_0 (struct irq_domain*,unsigned int) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_domain *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 int VAR_5;

 FUNC_2(&VAR_1->lock);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct irq_data *VAR_6 = FUNC_0(VAR_2, VAR_3 + VAR_5);

  FUNC_1(VAR_6);
  VAR_1->irq_map[VAR_6->hwirq] = VAR_0;
  VAR_1->write(VAR_6->hwirq, VAR_1->safe_map);
 }
 FUNC_3(&VAR_1->lock);
}
