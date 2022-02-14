
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmio_74xx_gpio_priv {int flags; } ;
struct gpio_chip {int (* set ) (struct gpio_chip*,unsigned int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mmio_74xx_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct mmio_74xx_gpio_priv *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->flags & VAR_1) {
  VAR_2->set(VAR_2, VAR_3, VAR_4);
  return 0;
 }

 return -VAR_0;
}
