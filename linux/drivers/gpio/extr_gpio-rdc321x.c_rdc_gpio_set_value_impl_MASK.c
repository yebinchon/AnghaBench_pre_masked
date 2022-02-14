
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdc321x_gpio {int* data_reg; int reg1_data_base; int reg2_data_base; int sb_pdev; } ;
struct gpio_chip {int dummy; } ;


 struct rdc321x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gpio_chip *VAR_0,
    unsigned VAR_1, int VAR_2)
{
 struct rdc321x_gpio *VAR_3;
 int VAR_4 = (VAR_1 < 32) ? 0 : 1;

 VAR_3 = FUNC_0(VAR_0);

 if (VAR_2)
  VAR_3->data_reg[VAR_4] |= 1 << (VAR_1 & 0x1f);
 else
  VAR_3->data_reg[VAR_4] &= ~(1 << (VAR_1 & 0x1f));

 FUNC_1(VAR_3->sb_pdev,
   VAR_4 ? VAR_3->reg2_data_base : VAR_3->reg1_data_base,
   VAR_3->data_reg[VAR_4]);
}
