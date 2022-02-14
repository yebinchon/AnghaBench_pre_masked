
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int (* write_reg ) (scalar_t__,int ) ;} ;
struct brcmstb_gpio_priv {scalar_t__ reg_base; } ;
struct brcmstb_gpio_bank {int id; struct brcmstb_gpio_priv* parent_priv; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct brcmstb_gpio_bank*) ;
 struct brcmstb_gpio_bank* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_4(VAR_0);
 struct brcmstb_gpio_bank *VAR_2 = FUNC_3(VAR_1);
 struct brcmstb_gpio_priv *VAR_3 = VAR_2->parent_priv;
 u32 VAR_4 = FUNC_0(FUNC_2(VAR_0->hwirq, VAR_2));

 VAR_1->write_reg(VAR_3->reg_base + FUNC_1(VAR_2->id), VAR_4);
}
