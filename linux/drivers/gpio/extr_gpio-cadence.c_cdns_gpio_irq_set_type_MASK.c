
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int bgpio_lock; } ;
struct cdns_gpio_chip {scalar_t__ regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 struct cdns_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_5, unsigned int VAR_6)
{
 struct gpio_chip *VAR_7 = FUNC_4(VAR_5);
 struct cdns_gpio_chip *VAR_8 = FUNC_1(VAR_7);
 unsigned long VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12 = FUNC_0(VAR_5->hwirq);
 int VAR_13 = 0;

 FUNC_5(&VAR_7->bgpio_lock, VAR_9);

 VAR_10 = FUNC_2(VAR_8->regs + VAR_1) & ~VAR_12;
 VAR_11 = FUNC_2(VAR_8->regs + VAR_0) & ~VAR_12;







 if (VAR_6 == VAR_3) {
  VAR_11 |= VAR_12;
  VAR_10 |= VAR_12;
 } else if (VAR_6 == VAR_4) {
  VAR_11 |= VAR_12;
 } else {
  VAR_13 = -VAR_2;
  goto err_irq_type;
 }

 FUNC_3(VAR_10, VAR_8->regs + VAR_1);
 FUNC_3(VAR_11, VAR_8->regs + VAR_0);

err_irq_type:
 FUNC_6(&VAR_7->bgpio_lock, VAR_9);
 return VAR_13;
}
