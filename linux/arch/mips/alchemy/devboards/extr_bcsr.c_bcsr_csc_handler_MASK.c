
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned short) ;
 unsigned short FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_4 (scalar_t__) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_3)
{
 unsigned short VAR_4 = FUNC_1(VAR_2 + VAR_0);
 struct irq_chip *VAR_5 = FUNC_5(VAR_3);

 FUNC_2(VAR_5, VAR_3);
 FUNC_4(VAR_1 + FUNC_0(VAR_4));
 FUNC_3(VAR_5, VAR_3);
}
