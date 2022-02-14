
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int (* read_reg ) (scalar_t__) ;} ;
struct brcmstb_gpio_priv {scalar_t__ reg_base; } ;
struct brcmstb_gpio_bank {int id; int * saved_regs; struct gpio_chip gc; } ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct brcmstb_gpio_priv *VAR_1,
       struct brcmstb_gpio_bank *VAR_2)
{
 struct gpio_chip *VAR_3 = &VAR_2->gc;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2->saved_regs[VAR_4] = VAR_3->read_reg(VAR_1->reg_base +
         FUNC_0(VAR_2->id, VAR_4));
}
