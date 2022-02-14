
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int revmap_size; } ;
struct irq_desc {int dummy; } ;
struct irq_chip_generic {scalar_t__ irq_base; scalar_t__ reg_base; } ;
struct irq_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct irq_domain* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_domain*,scalar_t__) ;
 struct irq_chip_generic* FUNC_7 (struct irq_domain*,int) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_1)
{
 struct irq_domain *VAR_2 = FUNC_5(VAR_1);
 struct irq_chip *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 FUNC_0(VAR_3, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_2->revmap_size; VAR_4 += 32) {
  struct irq_chip_generic *VAR_5 = FUNC_7(VAR_2, VAR_4);
  u32 VAR_6 = FUNC_8(VAR_5->reg_base + VAR_0);

  while (VAR_6) {
   u32 VAR_7 = FUNC_2(VAR_6) - 1;
   u32 VAR_8 = FUNC_6(VAR_2, VAR_5->irq_base + VAR_7);

   FUNC_3(VAR_8);
   VAR_6 &= ~(1 << VAR_7);
  }
 }

 FUNC_1(VAR_3, VAR_1);
}
