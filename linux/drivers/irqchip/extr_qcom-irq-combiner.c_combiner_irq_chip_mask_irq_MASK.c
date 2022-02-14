
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct combiner_reg {int enabled; } ;
struct combiner {struct combiner_reg* regs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 struct combiner* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_1)
{
 struct combiner *VAR_2 = FUNC_1(VAR_1);
 struct combiner_reg *VAR_3 = VAR_2->regs + VAR_1->hwirq / VAR_0;

 FUNC_0(VAR_1->hwirq % VAR_0, &VAR_3->enabled);
}
