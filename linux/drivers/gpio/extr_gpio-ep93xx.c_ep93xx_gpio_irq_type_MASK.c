
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct gpio_chip {int (* get ) (struct gpio_chip*,int) ;int (* direction_input ) (struct gpio_chip*,int) ;} ;
struct ep93xx_gpio {int dummy; } ;
typedef int irq_flow_handler_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;





 int FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct ep93xx_gpio*,int) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 struct ep93xx_gpio* FUNC_3 (struct gpio_chip*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (struct irq_data*,int ) ;
 int FUNC_6 (struct gpio_chip*,int) ;
 int FUNC_7 (struct gpio_chip*,int) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_6, unsigned int VAR_7)
{
 struct gpio_chip *VAR_8 = FUNC_4(VAR_6);
 struct ep93xx_gpio *VAR_9 = FUNC_3(VAR_8);
 int VAR_10 = FUNC_1(VAR_8);
 int VAR_11 = VAR_6->irq & 7;
 int VAR_12 = FUNC_0(VAR_11);
 irq_flow_handler_t VAR_13;

 VAR_8->direction_input(VAR_8, VAR_11);

 switch (VAR_7) {
 case 130:
  VAR_2[VAR_10] |= VAR_12;
  VAR_3[VAR_10] |= VAR_12;
  VAR_13 = VAR_4;
  break;
 case 131:
  VAR_2[VAR_10] |= VAR_12;
  VAR_3[VAR_10] &= ~VAR_12;
  VAR_13 = VAR_4;
  break;
 case 129:
  VAR_2[VAR_10] &= ~VAR_12;
  VAR_3[VAR_10] |= VAR_12;
  VAR_13 = VAR_5;
  break;
 case 128:
  VAR_2[VAR_10] &= ~VAR_12;
  VAR_3[VAR_10] &= ~VAR_12;
  VAR_13 = VAR_5;
  break;
 case 132:
  VAR_2[VAR_10] |= VAR_12;

  if (VAR_8->get(VAR_8, VAR_11))
   VAR_3[VAR_10] &= ~VAR_12;
  else
   VAR_3[VAR_10] |= VAR_12;
  VAR_13 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(VAR_6, VAR_13);

 VAR_1[VAR_10] |= VAR_12;

 FUNC_2(VAR_9, VAR_10);

 return 0;
}
