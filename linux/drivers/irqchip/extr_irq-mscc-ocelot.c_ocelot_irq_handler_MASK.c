
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;
struct irq_chip_generic {int dummy; } ;
struct irq_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_4 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_5 (int ) ;
 struct irq_chip* FUNC_6 (struct irq_desc*) ;
 struct irq_domain* FUNC_7 (struct irq_desc*) ;
 int FUNC_8 (struct irq_domain*,int) ;
 struct irq_chip_generic* FUNC_9 (struct irq_domain*,int ) ;
 int FUNC_10 (struct irq_chip_generic*,int ) ;

__attribute__((used)) static void FUNC_11(struct irq_desc *VAR_0)
{
 struct irq_chip *VAR_1 = FUNC_6(VAR_0);
 struct irq_domain *VAR_2 = FUNC_7(VAR_0);
 struct irq_chip_generic *VAR_3 = FUNC_9(VAR_2, 0);
 u32 VAR_4 = FUNC_10(VAR_3, FUNC_1(0));

 FUNC_3(VAR_1, VAR_0);

 while (VAR_4) {
  u32 VAR_5 = FUNC_2(VAR_4);

  FUNC_5(FUNC_8(VAR_2, VAR_5));
  VAR_4 &= ~(FUNC_0(VAR_5));
 }

 FUNC_4(VAR_1, VAR_0);
}
