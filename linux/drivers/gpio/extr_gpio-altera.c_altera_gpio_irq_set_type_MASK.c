
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct altera_gpio_chip {unsigned int interrupt_trigger; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct altera_gpio_chip* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct irq_data *VAR_6,
       unsigned int VAR_7)
{
 struct altera_gpio_chip *VAR_8;

 VAR_8 = FUNC_0(FUNC_1(VAR_6));

 if (VAR_7 == VAR_2) {
  FUNC_2(VAR_6, VAR_3);
  return 0;
 }
 if (VAR_7 == VAR_8->interrupt_trigger) {
  if (VAR_7 == VAR_1)
   FUNC_2(VAR_6, VAR_4);
  else
   FUNC_2(VAR_6, VAR_5);
  return 0;
 }
 FUNC_2(VAR_6, VAR_3);
 return -VAR_0;
}
