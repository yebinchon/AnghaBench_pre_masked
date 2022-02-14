
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct brcmstb_gpio_priv {int dummy; } ;
struct brcmstb_gpio_bank {struct brcmstb_gpio_priv* parent_priv; } ;


 struct brcmstb_gpio_bank* FUNC_0 (struct gpio_chip*) ;

__attribute__((used)) static inline struct brcmstb_gpio_priv *
FUNC_1(struct gpio_chip *VAR_0)
{
 struct brcmstb_gpio_bank *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->parent_priv;
}
