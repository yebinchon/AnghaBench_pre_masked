
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_factor_hw {int shift; int reg; int table; } ;
struct owl_clk_common {int regmap; } ;


 int FUNC_0 (int ,unsigned long,unsigned long) ;
 int FUNC_1 (struct owl_factor_hw const*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(const struct owl_clk_common *VAR_0,
    const struct owl_factor_hw *VAR_1,
    unsigned long VAR_2,
    unsigned long VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_1->table, VAR_2, VAR_3);

 if (VAR_4 > FUNC_1(VAR_1))
  VAR_4 = FUNC_1(VAR_1);

 FUNC_2(VAR_0->regmap, VAR_1->reg, &VAR_5);

 VAR_5 &= ~(FUNC_1(VAR_1) << VAR_1->shift);
 VAR_5 |= VAR_4 << VAR_1->shift;

 FUNC_3(VAR_0->regmap, VAR_1->reg, VAR_5);

 return 0;
}
