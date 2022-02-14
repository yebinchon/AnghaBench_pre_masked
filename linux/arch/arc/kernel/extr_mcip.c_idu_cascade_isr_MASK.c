
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
typedef scalar_t__ irq_hw_number_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (int ) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct irq_domain* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_domain*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_1)
{
 struct irq_domain *VAR_2 = FUNC_4(VAR_1);
 struct irq_chip *VAR_3 = FUNC_3(VAR_1);
 irq_hw_number_t VAR_4 = FUNC_7(FUNC_5(VAR_1));
 irq_hw_number_t VAR_5 = VAR_4 - VAR_0;

 FUNC_0(VAR_3, VAR_1);
 FUNC_2(FUNC_6(VAR_2, VAR_5));
 FUNC_1(VAR_3, VAR_1);
}
