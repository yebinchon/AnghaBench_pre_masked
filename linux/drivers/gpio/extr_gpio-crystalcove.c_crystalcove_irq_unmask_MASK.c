
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {scalar_t__ hwirq; } ;
struct crystalcove_gpio {int set_irq_mask; int update; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct crystalcove_gpio* FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_2)
{
 struct crystalcove_gpio *VAR_3 =
  FUNC_0(FUNC_1(VAR_2));

 if (VAR_2->hwirq < VAR_0) {
  VAR_3->set_irq_mask = 0;
  VAR_3->update |= VAR_1;
 }
}
