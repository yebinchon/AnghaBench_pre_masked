
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (unsigned int) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 unsigned int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2;

 FUNC_0(VAR_1, VAR_0);
 do {
  VAR_2 = FUNC_4();
  if (VAR_2 == -1U)
   break;
  FUNC_2(VAR_2);
 } while (1);
 FUNC_1(VAR_1, VAR_0);
}
