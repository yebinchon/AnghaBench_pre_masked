
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_bucket {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__) ;
 struct irq_bucket** VAR_0 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_1)
{
 unsigned int VAR_2;
 struct irq_bucket *VAR_3;
 int VAR_4 = FUNC_2();

 VAR_2 = FUNC_1(VAR_4);
 VAR_3 = VAR_0[VAR_2];
 if ((VAR_2 & 0x10) && VAR_3 && VAR_3->irq)
  FUNC_0(VAR_3->irq);
}
