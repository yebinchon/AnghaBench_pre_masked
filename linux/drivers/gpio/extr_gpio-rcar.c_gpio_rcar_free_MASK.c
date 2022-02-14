
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_rcar_priv {int dev; } ;
struct gpio_chip {unsigned int base; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int,int) ;
 struct gpio_rcar_priv* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gpio_rcar_priv *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_0->base + VAR_1);





 FUNC_0(VAR_0, VAR_1, 0);

 FUNC_3(VAR_2->dev);
}
