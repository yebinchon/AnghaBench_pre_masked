
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {unsigned int hwirq; } ;
struct gpio_bank {int lock; TYPE_1__* regs; } ;
struct TYPE_2__ {int leveldetect0; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct irq_data*,int ) ;
 int FUNC_1 (struct gpio_bank*,unsigned int) ;
 int FUNC_2 (struct gpio_bank*,unsigned int) ;
 struct gpio_bank* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct gpio_bank*,unsigned int,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_8, unsigned VAR_9)
{
 struct gpio_bank *VAR_10 = FUNC_3(VAR_8);
 int VAR_11;
 unsigned long VAR_12;
 unsigned VAR_13 = VAR_8->hwirq;

 if (VAR_9 & ~VAR_5)
  return -VAR_0;

 if (!VAR_10->regs->leveldetect0 &&
  (VAR_9 & (VAR_4|VAR_3)))
  return -VAR_0;

 FUNC_5(&VAR_10->lock, VAR_12);
 VAR_11 = FUNC_4(VAR_10, VAR_13, VAR_9);
 if (VAR_11) {
  FUNC_6(&VAR_10->lock, VAR_12);
  goto error;
 }
 FUNC_1(VAR_10, VAR_13);
 if (!FUNC_2(VAR_10, VAR_13)) {
  FUNC_6(&VAR_10->lock, VAR_12);
  VAR_11 = -VAR_0;
  goto error;
 }
 FUNC_6(&VAR_10->lock, VAR_12);

 if (VAR_9 & (VAR_4 | VAR_3))
  FUNC_0(VAR_8, VAR_6);
 else if (VAR_9 & (VAR_1 | VAR_2))






  FUNC_0(VAR_8, VAR_7);

 return 0;

error:
 return VAR_11;
}
