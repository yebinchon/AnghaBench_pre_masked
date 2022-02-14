
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_gpio_priv {int dummy; } ;
struct gpio_chip {int dummy; } ;


 struct uniphier_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct uniphier_gpio_priv*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct uniphier_gpio_priv *VAR_5 = FUNC_0(VAR_0);

 if (!VAR_3)
  return;

 FUNC_2(VAR_5, FUNC_1(VAR_1) + VAR_2,
     VAR_3, VAR_4);
}
