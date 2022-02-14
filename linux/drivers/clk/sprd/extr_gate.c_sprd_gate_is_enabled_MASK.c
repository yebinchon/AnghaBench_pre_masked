
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_clk_common {int reg; int regmap; } ;
struct sprd_gate {int flags; unsigned int enable_mask; struct sprd_clk_common common; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct sprd_gate* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct sprd_gate *VAR_2 = FUNC_0(VAR_1);
 struct sprd_clk_common *VAR_3 = &VAR_2->common;
 unsigned int VAR_4;

 FUNC_1(VAR_3->regmap, VAR_3->reg, &VAR_4);

 if (VAR_2->flags & VAR_0)
  VAR_4 ^= VAR_2->enable_mask;

 VAR_4 &= VAR_2->enable_mask;

 return VAR_4 ? 1 : 0;
}
