
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int irq; } ;
struct apic_chip_data {scalar_t__ can_reserve; scalar_t__ has_reserved; int is_managed; } ;


 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ,int ,scalar_t__,int) ;
 int FUNC_6 (struct irq_data*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(struct irq_domain *VAR_1, struct irq_data *VAR_2)
{
 struct apic_chip_data *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4;

 FUNC_5(VAR_2->irq, VAR_3->is_managed,
    VAR_3->can_reserve, 0);


 if (!VAR_3->is_managed && !VAR_3->can_reserve)
  return;

 if (VAR_3->has_reserved)
  return;

 FUNC_2(&VAR_0, VAR_4);
 FUNC_1(VAR_2);
 if (VAR_3->can_reserve)
  FUNC_4(VAR_2);
 else
  FUNC_6(VAR_2);
 FUNC_3(&VAR_0, VAR_4);
}
