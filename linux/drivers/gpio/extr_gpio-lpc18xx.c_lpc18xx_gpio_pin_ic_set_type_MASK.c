
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc18xx_gpio_pin_ic {int lock; } ;
struct irq_data {int hwirq; struct lpc18xx_gpio_pin_ic* chip_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpc18xx_gpio_pin_ic*,int ,int) ;
 int FUNC_1 (struct lpc18xx_gpio_pin_ic*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct lpc18xx_gpio_pin_ic *VAR_6 = VAR_4->chip_data;

 FUNC_2(&VAR_6->lock);

 if (VAR_5 & VAR_0) {
  FUNC_0(VAR_6, VAR_4->hwirq, 1);
  FUNC_1(VAR_6, VAR_4->hwirq,
     VAR_3);
 } else if (VAR_5 & VAR_1) {
  FUNC_0(VAR_6, VAR_4->hwirq, 1);
  FUNC_1(VAR_6, VAR_4->hwirq,
     VAR_2);
 } else {
  FUNC_0(VAR_6, VAR_4->hwirq, 0);
 }

 FUNC_3(&VAR_6->lock);

 return 0;
}
