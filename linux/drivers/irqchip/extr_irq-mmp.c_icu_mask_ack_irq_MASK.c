
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {scalar_t__ host_data; } ;
struct irq_data {int irq; struct irq_domain* domain; } ;
struct icu_chip_data {int virq_base; int conf_mask; int conf_disable; scalar_t__ clr_mfp_irq_base; int clr_mfp_hwirq; scalar_t__ reg_mask; } ;


 struct icu_chip_data* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_2)
{
 struct irq_domain *VAR_3 = VAR_2->domain;
 struct icu_chip_data *VAR_4 = (struct icu_chip_data *)VAR_3->host_data;
 int VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_2->irq - VAR_4->virq_base;
 if (VAR_4 == &VAR_0[0]) {
  VAR_6 = FUNC_1(VAR_1 + (VAR_5 << 2));
  VAR_6 &= ~VAR_4->conf_mask;
  VAR_6 |= VAR_4->conf_disable;
  FUNC_2(VAR_6, VAR_1 + (VAR_5 << 2));
 } else {





  VAR_6 = FUNC_1(VAR_4->reg_mask) | (1 << VAR_5);
  FUNC_2(VAR_6, VAR_4->reg_mask);
 }
}
