
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2mps11_clk {int mask; int reg; TYPE_1__* iodev; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap_pmic; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct s2mps11_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct s2mps11_clk *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->iodev->regmap_pmic,
     VAR_1->reg,
     VAR_1->mask, VAR_1->mask);
}
