
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mcu {int reg_ctrl; int lock; int client; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct mcu* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct mcu *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5 = 1 << (4 + VAR_2);

 FUNC_2(&VAR_4->lock);
 if (VAR_3)
  VAR_4->reg_ctrl &= ~VAR_5;
 else
  VAR_4->reg_ctrl |= VAR_5;

 FUNC_1(VAR_4->client, VAR_0, VAR_4->reg_ctrl);
 FUNC_3(&VAR_4->lock);
}
