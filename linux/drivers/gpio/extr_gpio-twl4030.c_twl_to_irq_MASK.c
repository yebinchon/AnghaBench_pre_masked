
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_twl4030_priv {int irq_base; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct gpio_twl4030_priv* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct gpio_twl4030_priv *VAR_4 = FUNC_0(VAR_2);

 return (VAR_4->irq_base && (VAR_3 < VAR_1))
  ? (VAR_4->irq_base + VAR_3)
  : -VAR_0;
}
