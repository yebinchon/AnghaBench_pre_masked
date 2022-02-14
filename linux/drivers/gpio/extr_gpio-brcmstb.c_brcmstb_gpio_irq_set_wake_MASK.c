
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct brcmstb_gpio_priv {int dummy; } ;
struct brcmstb_gpio_bank {int wake_active; struct brcmstb_gpio_priv* parent_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct brcmstb_gpio_bank*) ;
 int FUNC_2 (struct brcmstb_gpio_priv*,unsigned int) ;
 struct brcmstb_gpio_bank* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_0, unsigned int VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_4(VAR_0);
 struct brcmstb_gpio_bank *VAR_3 = FUNC_3(VAR_2);
 struct brcmstb_gpio_priv *VAR_4 = VAR_3->parent_priv;
 u32 VAR_5 = FUNC_0(FUNC_1(VAR_0->hwirq, VAR_3));





 if (VAR_1)
  VAR_3->wake_active |= VAR_5;
 else
  VAR_3->wake_active &= ~VAR_5;

 return FUNC_2(VAR_4, VAR_1);
}
