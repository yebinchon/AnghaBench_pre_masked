
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int masked; } ;
struct moxtet {TYPE_1__ irq; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 struct moxtet* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct moxtet *VAR_1 = FUNC_1(VAR_0);

 VAR_1->irq.masked |= FUNC_0(VAR_0->hwirq);
}
