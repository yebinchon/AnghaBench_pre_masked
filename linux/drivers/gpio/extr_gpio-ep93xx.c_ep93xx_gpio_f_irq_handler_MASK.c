
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (int) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 unsigned int FUNC_4 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_1)
{





 struct irq_chip *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = ((VAR_3 + 1) & 7) ^ 4;
 int VAR_5 = VAR_0 + VAR_4;

 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_5);
 FUNC_1(VAR_2, VAR_1);
}
