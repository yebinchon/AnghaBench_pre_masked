
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_rcar_priv {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct gpio_rcar_priv*,int ) ;
 struct gpio_rcar_priv* FUNC_2 (struct gpio_chip*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct gpio_rcar_priv *VAR_3 = FUNC_2(VAR_1);

 return !(FUNC_1(VAR_3, VAR_0) & FUNC_0(VAR_2));
}
