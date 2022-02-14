
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {scalar_t__ hwirq; } ;
struct exynos_wkup_irq {int mask; scalar_t__ hwirq; } ;
struct TYPE_2__ {struct exynos_wkup_irq* wkup_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct irq_data *VAR_3, unsigned int VAR_4)
{
 const struct exynos_wkup_irq *VAR_5;

 if (!VAR_2->wkup_irq)
  return -VAR_0;
 VAR_5 = VAR_2->wkup_irq;

 while (VAR_5->mask) {
  if (VAR_5->hwirq == VAR_3->hwirq) {
   if (!VAR_4)
    VAR_1 |= VAR_5->mask;
   else
    VAR_1 &= ~VAR_5->mask;
   return 0;
  }
  ++VAR_5;
 }

 return -VAR_0;
}
