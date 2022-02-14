
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_scfg_msi {int irqs_num; int lock; int used; } ;
struct irq_domain {int dummy; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int,int ) ;
 struct ls_scfg_msi* FUNC_1 (struct irq_data*) ;
 struct irq_data* FUNC_2 (struct irq_domain*,unsigned int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct irq_domain *VAR_0,
       unsigned int VAR_1, unsigned int VAR_2)
{
 struct irq_data *VAR_3 = FUNC_2(VAR_0, VAR_1);
 struct ls_scfg_msi *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = VAR_3->hwirq;
 if (VAR_5 < 0 || VAR_5 >= VAR_4->irqs_num) {
  FUNC_3("failed to teardown msi. Invalid hwirq %d\n", VAR_5);
  return;
 }

 FUNC_4(&VAR_4->lock);
 FUNC_0(VAR_5, VAR_4->used);
 FUNC_5(&VAR_4->lock);
}
