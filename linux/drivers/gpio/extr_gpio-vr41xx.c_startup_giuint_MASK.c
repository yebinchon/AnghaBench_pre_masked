
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct irq_data {int hwirq; } ;
struct TYPE_3__ {int parent; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static unsigned int FUNC_4(struct irq_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0, FUNC_2(VAR_1));
 if (VAR_2) {
  FUNC_0(VAR_0.parent,
   "unable to lock HW IRQ %lu for IRQ\n",
   VAR_1->hwirq);
  return VAR_2;
 }


 FUNC_3(VAR_1);
 return 0;
}
