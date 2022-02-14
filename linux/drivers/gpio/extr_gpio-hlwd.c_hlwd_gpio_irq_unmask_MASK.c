
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int hwirq; } ;
struct TYPE_2__ {int bgpio_lock; } ;
struct hlwd_gpio {TYPE_1__ gpioc; scalar_t__ regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct hlwd_gpio* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 struct hlwd_gpio *VAR_2 =
  FUNC_1(FUNC_4(VAR_1));
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_5(&VAR_2->gpioc.bgpio_lock, VAR_3);
 VAR_4 = FUNC_2(VAR_2->regs + VAR_0);
 VAR_4 |= FUNC_0(VAR_1->hwirq);
 FUNC_3(VAR_4, VAR_2->regs + VAR_0);
 FUNC_6(&VAR_2->gpioc.bgpio_lock, VAR_3);
}
