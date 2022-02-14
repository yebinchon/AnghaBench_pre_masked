
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmio_74xx_gpio_priv {int flags; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mmio_74xx_gpio_priv* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct mmio_74xx_gpio_priv *VAR_4 = FUNC_0(VAR_2);

 return (VAR_4->flags & VAR_1) ? -VAR_0 : 0;
}
