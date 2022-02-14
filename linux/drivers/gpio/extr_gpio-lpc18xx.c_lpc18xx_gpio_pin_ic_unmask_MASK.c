
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc18xx_gpio_pin_ic {int lock; } ;
struct irq_data {int hwirq; struct lpc18xx_gpio_pin_ic* chip_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct lpc18xx_gpio_pin_ic*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_5)
{
 struct lpc18xx_gpio_pin_ic *VAR_6 = VAR_5->chip_data;
 u32 VAR_7 = FUNC_1(VAR_5);

 FUNC_3(&VAR_6->lock);

 if (VAR_7 & VAR_2 || VAR_7 & VAR_1)
  FUNC_2(VAR_6, VAR_5->hwirq,
     VAR_4);

 if (VAR_7 & VAR_0)
  FUNC_2(VAR_6, VAR_5->hwirq,
     VAR_3);

 FUNC_4(&VAR_6->lock);

 FUNC_0(VAR_5);
}
