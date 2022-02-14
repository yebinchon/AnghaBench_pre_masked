
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct ftgpio_gpio {scalar_t__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;





 int FUNC_1 (struct irq_data*) ;
 struct ftgpio_gpio* FUNC_2 (struct gpio_chip*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;
 int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct gpio_chip *VAR_9 = FUNC_3(VAR_7);
 struct ftgpio_gpio *VAR_10 = FUNC_2(VAR_9);
 u32 VAR_11 = FUNC_0(FUNC_5(VAR_7));
 u32 VAR_12, VAR_13, VAR_14;

 VAR_14 = FUNC_6(VAR_10->base + VAR_3);
 VAR_13 = FUNC_6(VAR_10->base + VAR_2);
 VAR_12 = FUNC_6(VAR_10->base + VAR_1);

 switch (VAR_8) {
 case 132:
  FUNC_4(VAR_7, VAR_5);
  VAR_14 &= ~VAR_11;
  VAR_12 |= VAR_11;
  break;
 case 130:
  FUNC_4(VAR_7, VAR_5);
  VAR_14 &= ~VAR_11;
  VAR_12 &= ~VAR_11;
  VAR_13 &= ~VAR_11;
  break;
 case 131:
  FUNC_4(VAR_7, VAR_5);
  VAR_14 &= ~VAR_11;
  VAR_12 &= ~VAR_11;
  VAR_13 |= VAR_11;
  break;
 case 129:
  FUNC_4(VAR_7, VAR_6);
  VAR_14 |= VAR_11;
  VAR_13 &= ~VAR_11;
  break;
 case 128:
  FUNC_4(VAR_7, VAR_6);
  VAR_14 |= VAR_11;
  VAR_13 |= VAR_11;
  break;
 default:
  FUNC_4(VAR_7, VAR_4);
  return -VAR_0;
 }

 FUNC_7(VAR_14, VAR_10->base + VAR_3);
 FUNC_7(VAR_13, VAR_10->base + VAR_2);
 FUNC_7(VAR_12, VAR_10->base + VAR_1);

 FUNC_1(VAR_7);

 return 0;
}
