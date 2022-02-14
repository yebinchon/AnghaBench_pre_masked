
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_gpio {int update; int intcnt; } ;
struct irq_data {scalar_t__ hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct wcove_gpio* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static int FUNC_2(struct irq_data *VAR_7, unsigned int VAR_8)
{
 struct gpio_chip *VAR_9 = FUNC_1(VAR_7);
 struct wcove_gpio *VAR_10 = FUNC_0(VAR_9);

 if (VAR_7->hwirq >= VAR_6)
  return 0;

 switch (VAR_8) {
 case 128:
  VAR_10->intcnt = VAR_1;
  break;
 case 131:
  VAR_10->intcnt = VAR_0;
  break;
 case 129:
  VAR_10->intcnt = VAR_3;
  break;
 case 130:
  VAR_10->intcnt = VAR_2;
  break;
 default:
  return -VAR_4;
 }

 VAR_10->update |= VAR_5;

 return 0;
}
