
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_data {scalar_t__ rmi_irq; struct irq_domain* domain; } ;
struct irq_domain {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct irq_domain*) ;
 int FUNC_2 (struct irq_domain*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct rmi_data *VAR_1 = VAR_0;
 struct irq_domain *VAR_2 = VAR_1->domain;

 if (!VAR_2)
  return;

 FUNC_0(FUNC_2(VAR_2, 0));

 FUNC_1(VAR_2);
 VAR_1->domain = ((void*)0);
 VAR_1->rmi_irq = 0;
}
