
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct irq_bucket {int irq; struct irq_bucket* next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct irq_bucket** VAR_0 ;
 struct pt_regs* FUNC_4 (struct pt_regs*) ;

void FUNC_5(unsigned int VAR_1, struct pt_regs *VAR_2)
{
 struct pt_regs *VAR_3;
 struct irq_bucket *VAR_4;

 FUNC_0(VAR_1 > 15);
 VAR_3 = FUNC_4(VAR_2);
 FUNC_2();

 VAR_4 = VAR_0[VAR_1];
 while (VAR_4) {
  struct irq_bucket *VAR_5 = VAR_4->next;

  FUNC_1(VAR_4->irq);
  VAR_4 = VAR_5;
 }
 FUNC_3();
 FUNC_4(VAR_3);
}
