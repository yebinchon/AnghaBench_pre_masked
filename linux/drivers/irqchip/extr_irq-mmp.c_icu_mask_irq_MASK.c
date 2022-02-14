
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_domain {scalar_t__ host_data; } ;
struct irq_data {int irq; struct irq_domain* domain; } ;
struct icu_chip_data {int virq_base; int conf_mask; int conf_disable; int conf2_mask; scalar_t__ reg_mask; } ;


 struct icu_chip_data* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_3)
{
 struct irq_domain *VAR_4 = VAR_3->domain;
 struct icu_chip_data *VAR_5 = (struct icu_chip_data *)VAR_4->host_data;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_3->irq - VAR_5->virq_base;
 if (VAR_5 == &VAR_0[0]) {
  VAR_7 = FUNC_0(VAR_2 + (VAR_6 << 2));
  VAR_7 &= ~VAR_5->conf_mask;
  VAR_7 |= VAR_5->conf_disable;
  FUNC_1(VAR_7, VAR_2 + (VAR_6 << 2));

  if (VAR_5->conf2_mask) {




   VAR_7 = FUNC_0(VAR_1 + (VAR_6 << 2));
   VAR_7 &= ~VAR_5->conf2_mask;
   FUNC_1(VAR_7, VAR_1 + (VAR_6 << 2));
  }
 } else {
  VAR_7 = FUNC_0(VAR_5->reg_mask) | (1 << VAR_6);
  FUNC_1(VAR_7, VAR_5->reg_mask);
 }
}
