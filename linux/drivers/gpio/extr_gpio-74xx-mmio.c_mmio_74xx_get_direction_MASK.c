
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmio_74xx_gpio_priv {int flags; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct mmio_74xx_gpio_priv* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_1, unsigned VAR_2)
{
 struct mmio_74xx_gpio_priv *VAR_3 = FUNC_0(VAR_1);

 return !(VAR_3->flags & VAR_0);
}
