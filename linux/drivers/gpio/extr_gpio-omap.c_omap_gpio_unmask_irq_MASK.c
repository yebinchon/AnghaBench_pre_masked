
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {unsigned int hwirq; } ;
struct gpio_bank {int lock; TYPE_1__* regs; } ;
struct TYPE_2__ {scalar_t__ wkup_en; scalar_t__ leveldetect0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct gpio_bank*,unsigned int) ;
 struct gpio_bank* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct gpio_bank*,unsigned int,int) ;
 int FUNC_4 (struct gpio_bank*,unsigned int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_2)
{
 struct gpio_bank *VAR_3 = FUNC_2(VAR_2);
 unsigned VAR_4 = VAR_2->hwirq;
 u32 VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;

 FUNC_5(&VAR_3->lock, VAR_6);
 FUNC_3(VAR_3, VAR_4, 1);






 if (VAR_3->regs->leveldetect0 && VAR_3->regs->wkup_en &&
     VAR_5 & (VAR_0 | VAR_1))
  FUNC_1(VAR_3, VAR_4);

 if (VAR_5)
  FUNC_4(VAR_3, VAR_4, VAR_5);

 FUNC_6(&VAR_3->lock, VAR_6);
}
