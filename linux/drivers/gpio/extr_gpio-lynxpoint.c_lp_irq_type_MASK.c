
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ ngpio; } ;
struct lp_gpio {int lock; TYPE_1__ chip; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct lp_gpio* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 scalar_t__ FUNC_3 (struct irq_data*) ;
 unsigned long FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_8, unsigned VAR_9)
{
 struct gpio_chip *VAR_10 = FUNC_2(VAR_8);
 struct lp_gpio *VAR_11 = FUNC_0(VAR_10);
 u32 VAR_12 = FUNC_3(VAR_8);
 unsigned long VAR_13;
 u32 VAR_14;
 unsigned long VAR_15 = FUNC_4(&VAR_11->chip, VAR_12, VAR_6);

 if (VAR_12 >= VAR_11->chip.ngpio)
  return -VAR_0;

 FUNC_6(&VAR_11->lock, VAR_13);
 VAR_14 = FUNC_1(VAR_15);


 if (VAR_9 & VAR_3)
  VAR_14 &= ~(VAR_7 | VAR_1);


 if (VAR_9 & VAR_2)
  VAR_14 = (VAR_14 | VAR_1) & ~VAR_7;


 if (VAR_9 & VAR_5)
  VAR_14 = (VAR_14 | VAR_7) & ~VAR_1;


 if (VAR_9 & VAR_4)
  VAR_14 |= VAR_7 | VAR_1;

 FUNC_5(VAR_14, VAR_15);
 FUNC_7(&VAR_11->lock, VAR_13);

 return 0;
}
