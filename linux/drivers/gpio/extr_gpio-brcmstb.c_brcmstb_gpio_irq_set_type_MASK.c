
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;
struct brcmstb_gpio_priv {scalar_t__ reg_base; } ;
struct TYPE_2__ {int (* read_reg ) (scalar_t__) ;int bgpio_lock; int (* write_reg ) (scalar_t__,int) ;} ;
struct brcmstb_gpio_bank {TYPE_1__ gc; int id; struct brcmstb_gpio_priv* parent_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;





 int FUNC_4 (int ,struct brcmstb_gpio_bank*) ;
 struct brcmstb_gpio_bank* FUNC_5 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_6 (struct irq_data*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_15(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct gpio_chip *VAR_3 = FUNC_6(VAR_1);
 struct brcmstb_gpio_bank *VAR_4 = FUNC_5(VAR_3);
 struct brcmstb_gpio_priv *VAR_5 = VAR_4->parent_priv;
 u32 VAR_6 = FUNC_0(FUNC_4(VAR_1->hwirq, VAR_4));
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 unsigned long VAR_13;

 switch (VAR_2) {
 case 128:
  VAR_11 = VAR_6;
  VAR_9 = 0;
  VAR_7 = 0;
  break;
 case 129:
  VAR_11 = VAR_6;
  VAR_9 = VAR_6;
  VAR_7 = 0;
  break;
 case 131:
  VAR_11 = 0;
  VAR_9 = 0;
  VAR_7 = 0;
  break;
 case 130:
  VAR_11 = 0;
  VAR_9 = VAR_6;
  VAR_7 = 0;
  break;
 case 132:
  VAR_11 = 0;
  VAR_9 = 0;
  VAR_7 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_7(&VAR_4->gc.bgpio_lock, VAR_13);

 VAR_10 = VAR_4->gc.read_reg(VAR_5->reg_base +
   FUNC_1(VAR_4->id)) & ~VAR_6;
 VAR_8 = VAR_4->gc.read_reg(VAR_5->reg_base +
   FUNC_2(VAR_4->id)) & ~VAR_6;
 VAR_12 = VAR_4->gc.read_reg(VAR_5->reg_base +
   FUNC_3(VAR_4->id)) & ~VAR_6;

 VAR_4->gc.write_reg(VAR_5->reg_base + FUNC_1(VAR_4->id),
   VAR_10 | VAR_9);
 VAR_4->gc.write_reg(VAR_5->reg_base + FUNC_2(VAR_4->id),
   VAR_8 | VAR_7);
 VAR_4->gc.write_reg(VAR_5->reg_base + FUNC_3(VAR_4->id),
   VAR_12 | VAR_11);

 FUNC_8(&VAR_4->gc.bgpio_lock, VAR_13);
 return 0;
}
