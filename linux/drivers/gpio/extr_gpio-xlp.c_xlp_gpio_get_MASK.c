
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_gpio_priv {int gpio_paddrv; } ;
struct gpio_chip {unsigned int ngpio; } ;


 int FUNC_0 (int) ;
 struct xlp_gpio_priv* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct xlp_gpio_priv *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1 >= VAR_0->ngpio);
 return FUNC_2(VAR_2->gpio_paddrv, VAR_1);
}
