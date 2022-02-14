
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct irq_desc {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;

void FUNC_6(struct irq_desc *VAR_0, struct pt_regs *VAR_1)
{
 int VAR_2 = FUNC_0();

 if (FUNC_5(VAR_1) || !FUNC_1(VAR_2, VAR_0)) {
  if (FUNC_4(VAR_2))
   FUNC_3();
  FUNC_2(VAR_0);
 }
}
