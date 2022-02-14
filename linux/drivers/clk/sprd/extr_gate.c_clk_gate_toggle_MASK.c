
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_clk_common {int reg; int regmap; } ;
struct sprd_gate {int flags; unsigned int enable_mask; struct sprd_clk_common common; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(const struct sprd_gate *VAR_1, bool VAR_2)
{
 const struct sprd_clk_common *VAR_3 = &VAR_1->common;
 unsigned int VAR_4;
 bool VAR_5 = VAR_1->flags & VAR_0 ? 1 : 0;

 VAR_5 ^= VAR_2;

 FUNC_0(VAR_3->regmap, VAR_3->reg, &VAR_4);

 if (VAR_5)
  VAR_4 |= VAR_1->enable_mask;
 else
  VAR_4 &= ~VAR_1->enable_mask;

 FUNC_1(VAR_3->regmap, VAR_3->reg, VAR_4);
}
