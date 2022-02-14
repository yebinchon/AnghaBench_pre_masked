
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (unsigned int) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct irq_domain* FUNC_4 (struct irq_desc*) ;
 unsigned int FUNC_5 (struct irq_domain*,int ) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_0)
{
 struct irq_domain *VAR_1 = FUNC_4(VAR_0);
 struct irq_chip *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3 = FUNC_5(VAR_1, 0);

 FUNC_0(VAR_2, VAR_0);
 FUNC_2(VAR_3);
 FUNC_1(VAR_2, VAR_0);
}
