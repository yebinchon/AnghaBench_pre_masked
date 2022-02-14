
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uniphier_gpio_priv {scalar_t__ regs; } ;
struct gpio_chip {int dummy; } ;


 struct uniphier_gpio_priv* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int*,int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 struct uniphier_gpio_priv *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4, VAR_5;
 u32 VAR_6;

 FUNC_3(VAR_1, &VAR_4, &VAR_6);
 VAR_5 = FUNC_2(VAR_4) + VAR_2;

 return !!(FUNC_1(VAR_3->regs + VAR_5) & VAR_6);
}
