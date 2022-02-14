
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdc321x_gpio {int reg1_data_base; int reg2_data_base; int lock; int sb_pdev; int * data_reg; } ;
struct gpio_chip {int dummy; } ;


 struct rdc321x_gpio* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct rdc321x_gpio *VAR_2;
 u32 VAR_3 = 0;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 VAR_4 = VAR_1 < 32 ? VAR_2->reg1_data_base : VAR_2->reg2_data_base;

 FUNC_3(&VAR_2->lock);
 FUNC_2(VAR_2->sb_pdev, VAR_4,
     VAR_2->data_reg[VAR_1 < 32 ? 0 : 1]);
 FUNC_1(VAR_2->sb_pdev, VAR_4, &VAR_3);
 FUNC_4(&VAR_2->lock);

 return (1 << (VAR_1 & 0x1f)) & VAR_3 ? 1 : 0;
}
