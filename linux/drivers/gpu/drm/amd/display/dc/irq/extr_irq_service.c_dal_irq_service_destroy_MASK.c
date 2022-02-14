
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_service {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct irq_service*) ;

void FUNC_2(struct irq_service **VAR_0)
{
 if (!VAR_0 || !*VAR_0) {
  FUNC_0();
  return;
 }

 FUNC_1(*VAR_0);

 *VAR_0 = ((void*)0);
}
