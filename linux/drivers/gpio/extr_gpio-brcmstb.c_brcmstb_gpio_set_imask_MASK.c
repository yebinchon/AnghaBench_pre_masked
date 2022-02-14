
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int bgpio_lock; int (* write_reg ) (scalar_t__,int ) ;int (* read_reg ) (scalar_t__) ;} ;
struct brcmstb_gpio_priv {scalar_t__ reg_base; } ;
struct brcmstb_gpio_bank {int id; struct brcmstb_gpio_priv* parent_priv; struct gpio_chip gc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,struct brcmstb_gpio_bank*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_7(struct brcmstb_gpio_bank *VAR_0,
  unsigned int VAR_1, bool VAR_2)
{
 struct gpio_chip *VAR_3 = &VAR_0->gc;
 struct brcmstb_gpio_priv *VAR_4 = VAR_0->parent_priv;
 u32 VAR_5 = FUNC_0(FUNC_2(VAR_1, VAR_0));
 u32 VAR_6;
 unsigned long VAR_7;

 FUNC_3(&VAR_3->bgpio_lock, VAR_7);
 VAR_6 = VAR_3->read_reg(VAR_4->reg_base + FUNC_1(VAR_0->id));
 if (VAR_2)
  VAR_6 |= VAR_5;
 else
  VAR_6 &= ~VAR_5;
 VAR_3->write_reg(VAR_4->reg_base + FUNC_1(VAR_0->id), VAR_6);
 FUNC_4(&VAR_3->bgpio_lock, VAR_7);
}
