
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_data {int dummy; } ;


 struct irq_data* FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct irq_data*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(struct irq_domain *VAR_0, unsigned int VAR_1)
{
 struct irq_data *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;


 if (!VAR_2)
  return;
 VAR_3 = (unsigned int)FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1);
}
