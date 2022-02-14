
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {int dummy; } ;
struct irq_desc {int dummy; } ;
struct irq_chip_generic {int mask_cache; scalar_t__ irq_base; scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct irq_domain* FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (struct irq_domain*,scalar_t__) ;
 struct irq_chip_generic* FUNC_4 (struct irq_domain*,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_1)
{
 struct irq_domain *VAR_2 = FUNC_2(VAR_1);

 struct irq_chip_generic *VAR_3 = FUNC_4(VAR_2, 0);
 u32 VAR_4 = FUNC_5(VAR_3->reg_base + VAR_0) &
     VAR_3->mask_cache;

 while (VAR_4) {
  u32 VAR_5 = FUNC_0(VAR_4);

  FUNC_1(FUNC_3(VAR_2, VAR_3->irq_base + VAR_5));
  VAR_4 &= ~(1 << VAR_5);
 }
}
