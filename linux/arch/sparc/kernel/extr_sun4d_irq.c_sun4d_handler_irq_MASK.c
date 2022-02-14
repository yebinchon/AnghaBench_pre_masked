
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct irq_bucket {int irq; struct irq_bucket* next; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct irq_bucket** VAR_1 ;
 int* VAR_2 ;
 struct pt_regs* FUNC_5 (struct pt_regs*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

void FUNC_8(unsigned int VAR_3, struct pt_regs *VAR_4)
{
 struct pt_regs *VAR_5;

 int VAR_6 = VAR_2[VAR_3];


 FUNC_0();

 FUNC_1(1 << VAR_3);
 VAR_5 = FUNC_5(VAR_4);
 FUNC_3();
 if (VAR_6 == 0) {

  struct irq_bucket *VAR_7;

  VAR_7 = VAR_1[VAR_3];
  while (VAR_7) {
   struct irq_bucket *VAR_8;

   VAR_8 = VAR_7->next;
   FUNC_2(VAR_7->irq);
   VAR_7 = VAR_8;
  }
 } else {

  FUNC_7(VAR_6);
 }
 FUNC_4();
 FUNC_5(VAR_5);
}
