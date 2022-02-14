
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct dln2_gpio {int * irq_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 struct dln2_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_6, unsigned VAR_7)
{
 struct gpio_chip *VAR_8 = FUNC_1(VAR_6);
 struct dln2_gpio *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = FUNC_2(VAR_6);

 switch (VAR_7) {
 case 129:
  VAR_9->irq_type[VAR_10] = VAR_3;
  break;
 case 128:
  VAR_9->irq_type[VAR_10] = VAR_4;
  break;
 case 132:
  VAR_9->irq_type[VAR_10] = VAR_0;
  break;
 case 130:
  VAR_9->irq_type[VAR_10] = VAR_2;
  break;
 case 131:
  VAR_9->irq_type[VAR_10] = VAR_1;
  break;
 default:
  return -VAR_5;
 }

 return 0;
}
