
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;
typedef int irq_hw_number_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int VAR_0 ;
 struct irq_data* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct irq_data*) ;

void FUNC_4(struct irq_domain *VAR_1, unsigned int VAR_2,
    unsigned int VAR_3)
{
 irq_hw_number_t VAR_4;
 struct irq_data *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_0(FUNC_3(VAR_5));
 FUNC_1(VAR_0, VAR_4, VAR_3);
}
