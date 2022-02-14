
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_gpio_priv {int gpio_intr_pol; int gpio_intr_type; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xlp_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_5, unsigned int VAR_6)
{
 struct gpio_chip *VAR_7 = FUNC_1(VAR_5);
 struct xlp_gpio_priv *VAR_8 = FUNC_0(VAR_7);
 int VAR_9, VAR_10;

 switch (VAR_6) {
 case 130:
  VAR_10 = VAR_3;
  VAR_9 = VAR_1;
  break;
 case 131:
  VAR_10 = VAR_3;
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_4;
  VAR_9 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_4;
  VAR_9 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_8->gpio_intr_type, VAR_5->hwirq, VAR_10);
 FUNC_2(VAR_8->gpio_intr_pol, VAR_5->hwirq, VAR_9);

 return 0;
}
