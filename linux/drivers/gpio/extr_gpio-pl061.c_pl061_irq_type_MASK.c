
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pl061 {int lock; scalar_t__ base; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int parent; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct pl061* FUNC_4 (struct gpio_chip*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct gpio_chip* FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*,int ) ;
 int FUNC_7 (struct irq_data*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct irq_data *VAR_13, unsigned VAR_14)
{
 struct gpio_chip *VAR_15 = FUNC_5(VAR_13);
 struct pl061 *VAR_16 = FUNC_4(VAR_15);
 int VAR_17 = FUNC_7(VAR_13);
 unsigned long VAR_18;
 u8 VAR_19, VAR_20, VAR_21;
 u8 VAR_22 = FUNC_0(VAR_17);

 if (VAR_17 < 0 || VAR_17 >= VAR_9)
  return -VAR_0;

 if ((VAR_14 & (VAR_7 | VAR_8)) &&
     (VAR_14 & (VAR_6 | VAR_5)))
 {
  FUNC_2(VAR_15->parent,
   "trying to configure line %d for both level and edge "
   "detection, choose one!\n",
   VAR_17);
  return -VAR_0;
 }


 FUNC_8(&VAR_16->lock, VAR_18);

 VAR_21 = FUNC_10(VAR_16->base + VAR_2);
 VAR_19 = FUNC_10(VAR_16->base + VAR_3);
 VAR_20 = FUNC_10(VAR_16->base + VAR_1);

 if (VAR_14 & (VAR_7 | VAR_8)) {
  bool VAR_23 = VAR_14 & VAR_7;


  VAR_20 &= ~VAR_22;

  VAR_19 |= VAR_22;

  if (VAR_23)
   VAR_21 |= VAR_22;
  else
   VAR_21 &= ~VAR_22;
  FUNC_6(VAR_13, VAR_12);
  FUNC_1(VAR_15->parent, "line %d: IRQ on %s level\n",
   VAR_17,
   VAR_23 ? "HIGH" : "LOW");
 } else if ((VAR_14 & VAR_4) == VAR_4) {

  VAR_19 &= ~VAR_22;

  VAR_20 |= VAR_22;
  FUNC_6(VAR_13, VAR_11);
  FUNC_1(VAR_15->parent, "line %d: IRQ on both edges\n", VAR_17);
 } else if ((VAR_14 & VAR_6) ||
     (VAR_14 & VAR_5)) {
  bool VAR_24 = VAR_14 & VAR_6;


  VAR_19 &= ~VAR_22;

  VAR_20 &= ~VAR_22;

  if (VAR_24)
   VAR_21 |= VAR_22;
  else
   VAR_21 &= ~VAR_22;
  FUNC_6(VAR_13, VAR_11);
  FUNC_1(VAR_15->parent, "line %d: IRQ on %s edge\n",
   VAR_17,
   VAR_24 ? "RISING" : "FALLING");
 } else {

  VAR_19 &= ~VAR_22;
  VAR_20 &= ~VAR_22;
  VAR_21 &= ~VAR_22;
  FUNC_6(VAR_13, VAR_10);
  FUNC_3(VAR_15->parent, "no trigger selected for line %d\n",
    VAR_17);
 }

 FUNC_11(VAR_19, VAR_16->base + VAR_3);
 FUNC_11(VAR_20, VAR_16->base + VAR_1);
 FUNC_11(VAR_21, VAR_16->base + VAR_2);

 FUNC_9(&VAR_16->lock, VAR_18);

 return 0;
}
