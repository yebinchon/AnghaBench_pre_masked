
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zx_gpio {int lock; scalar_t__ base; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct zx_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_11, unsigned VAR_12)
{
 struct gpio_chip *VAR_13 = FUNC_2(VAR_11);
 struct zx_gpio *VAR_14 = FUNC_1(VAR_13);
 int VAR_15 = FUNC_3(VAR_11);
 unsigned long VAR_16;
 u16 VAR_17, VAR_18, VAR_19, VAR_20;
 u16 VAR_21 = FUNC_0(VAR_15);

 if (VAR_15 < 0 || VAR_15 >= VAR_10)
  return -VAR_0;

 FUNC_4(&VAR_14->lock, VAR_16);

 VAR_20 = FUNC_6(VAR_14->base + VAR_8);
 VAR_17 = FUNC_6(VAR_14->base + VAR_9);
 VAR_18 = FUNC_6(VAR_14->base + VAR_7);
 VAR_19 = FUNC_6(VAR_14->base + VAR_6);

 if (VAR_12 & (VAR_4 | VAR_5)) {
  VAR_17 |= VAR_21;
  if (VAR_12 & VAR_4)
   VAR_20 |= VAR_21;
  else
   VAR_20 &= ~VAR_21;
 } else
  VAR_17 &= ~VAR_21;

 if ((VAR_12 & VAR_1) == VAR_1) {
  VAR_18 |= VAR_21;
  VAR_19 |= VAR_21;
 } else {
  if (VAR_12 & VAR_3) {
   VAR_18 |= VAR_21;
   VAR_19 &= ~VAR_21;
  } else if (VAR_12 & VAR_2) {
   VAR_19 |= VAR_21;
   VAR_18 &= ~VAR_21;
  }
 }

 FUNC_7(VAR_17, VAR_14->base + VAR_9);
 FUNC_7(VAR_18, VAR_14->base + VAR_7);
 FUNC_7(VAR_19, VAR_14->base + VAR_6);
 FUNC_7(VAR_20, VAR_14->base + VAR_8);
 FUNC_5(&VAR_14->lock, VAR_16);

 return 0;
}
