
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct orion_gpio_chip {int secondary_irq_base; } ;
struct irq_data {int hwirq; } ;
struct irq_chip_type {int type; } ;
struct irq_chip_generic {struct orion_gpio_chip* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct orion_gpio_chip*) ;
 int FUNC_1 (struct orion_gpio_chip*) ;
 int FUNC_2 (struct orion_gpio_chip*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct irq_chip_type* FUNC_3 (struct irq_data*) ;
 struct irq_chip_generic* FUNC_4 (struct irq_data*) ;
 scalar_t__ FUNC_5 (struct irq_data*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_8, u32 VAR_9)
{
 struct irq_chip_generic *VAR_10 = FUNC_4(VAR_8);
 struct irq_chip_type *VAR_11 = FUNC_3(VAR_8);
 struct orion_gpio_chip *VAR_12 = VAR_10->private;
 int VAR_13;
 u32 VAR_14;

 VAR_13 = VAR_8->hwirq - VAR_12->secondary_irq_base;

 VAR_14 = FUNC_6(FUNC_2(VAR_12)) & (1 << VAR_13);
 if (!VAR_14) {
  return -VAR_0;
 }

 VAR_9 &= VAR_7;
 if (VAR_9 == VAR_6)
  return -VAR_0;


 if (!(VAR_11->type & VAR_9))
  if (FUNC_5(VAR_8, VAR_9))
   return -VAR_0;




 if (VAR_9 == VAR_3 || VAR_9 == VAR_4) {
  VAR_14 = FUNC_6(FUNC_1(VAR_12));
  VAR_14 &= ~(1 << VAR_13);
  FUNC_7(VAR_14, FUNC_1(VAR_12));
 } else if (VAR_9 == VAR_2 || VAR_9 == VAR_5) {
  VAR_14 = FUNC_6(FUNC_1(VAR_12));
  VAR_14 |= 1 << VAR_13;
  FUNC_7(VAR_14, FUNC_1(VAR_12));
 } else if (VAR_9 == VAR_1) {
  u32 VAR_15;

  VAR_15 = FUNC_6(FUNC_1(VAR_12)) ^ FUNC_6(FUNC_0(VAR_12));




  VAR_14 = FUNC_6(FUNC_1(VAR_12));
  if (VAR_15 & (1 << VAR_13))
   VAR_14 |= 1 << VAR_13;
  else
   VAR_14 &= ~(1 << VAR_13);
  FUNC_7(VAR_14, FUNC_1(VAR_12));
 }
 return 0;
}
