
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdc321x_gpio {int lock; int reg2_ctrl_base; int reg1_ctrl_base; int sb_pdev; } ;
struct gpio_chip {int dummy; } ;


 struct rdc321x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_0,
    unsigned VAR_1, int VAR_2)
{
 struct rdc321x_gpio *VAR_3;
 int VAR_4;
 u32 VAR_5;

 VAR_3 = FUNC_0(VAR_0);

 FUNC_4(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3->sb_pdev, VAR_1 < 32 ?
   VAR_3->reg1_ctrl_base : VAR_3->reg2_ctrl_base, &VAR_5);
 if (VAR_4)
  goto unlock;

 VAR_5 |= 1 << (VAR_1 & 0x1f);

 VAR_4 = FUNC_2(VAR_3->sb_pdev, VAR_1 < 32 ?
   VAR_3->reg1_ctrl_base : VAR_3->reg2_ctrl_base, VAR_5);
 if (VAR_4)
  goto unlock;

 FUNC_3(VAR_0, VAR_1, VAR_2);

unlock:
 FUNC_5(&VAR_3->lock);

 return VAR_4;
}
