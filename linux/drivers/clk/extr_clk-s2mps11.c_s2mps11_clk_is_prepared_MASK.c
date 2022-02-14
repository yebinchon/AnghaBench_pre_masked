
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct s2mps11_clk {int mask; int reg; TYPE_1__* iodev; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap_pmic; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 struct s2mps11_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 int VAR_2;
 u32 VAR_3;
 struct s2mps11_clk *VAR_4 = FUNC_1(VAR_1);

 VAR_2 = FUNC_0(VAR_4->iodev->regmap_pmic,
    VAR_4->reg, &VAR_3);
 if (VAR_2 < 0)
  return -VAR_0;

 return VAR_3 & VAR_4->mask;
}
