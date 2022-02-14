
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int irq; } ;
struct apic_chip_data {scalar_t__ has_reserved; scalar_t__ is_managed; int can_reserve; } ;


 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 struct apic_chip_data* FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,scalar_t__,int ,int) ;
 int FUNC_7 (struct irq_data*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(struct irq_domain *VAR_1, struct irq_data *VAR_2,
          bool VAR_3)
{
 struct apic_chip_data *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 int VAR_6 = 0;

 FUNC_6(VAR_2->irq, VAR_4->is_managed,
         VAR_4->can_reserve, VAR_3);


 if (!VAR_4->can_reserve && !VAR_4->is_managed)
  return 0;

 FUNC_4(&VAR_0, VAR_5);
 if (VAR_3 || FUNC_3(VAR_2))
  FUNC_7(VAR_2);
 else if (VAR_4->is_managed)
  VAR_6 = FUNC_0(VAR_2);
 else if (VAR_4->has_reserved)
  VAR_6 = FUNC_1(VAR_2);
 FUNC_5(&VAR_0, VAR_5);
 return VAR_6;
}
