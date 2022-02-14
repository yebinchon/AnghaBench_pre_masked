
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct owl_factor_hw {unsigned long long shift; int fct_flags; int reg; struct clk_factor_table* table; } ;
struct TYPE_2__ {int clk; } ;
struct owl_clk_common {TYPE_1__ hw; int regmap; } ;
struct clk_factor_table {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clk_factor_table const*,unsigned long long,unsigned long long*,unsigned long long*) ;
 unsigned long long FUNC_3 (struct owl_factor_hw const*) ;
 int FUNC_4 (unsigned long long,unsigned long long) ;
 int FUNC_5 (int ,int ,unsigned long long*) ;

unsigned long FUNC_6(struct owl_clk_common *VAR_1,
      const struct owl_factor_hw *VAR_2,
      unsigned long VAR_3)
{
 const struct clk_factor_table *VAR_4 = VAR_2->table;
 unsigned long long int VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = 0;
 VAR_8 = 0;

 FUNC_5(VAR_1->regmap, VAR_2->reg, &VAR_6);

 VAR_7 = VAR_6 >> VAR_2->shift;
 VAR_7 &= FUNC_3(VAR_2);

 FUNC_2(VAR_4, VAR_7, &VAR_8, &VAR_9);
 if (!VAR_9) {
  FUNC_0(!(VAR_2->fct_flags & VAR_0),
   "%s: Zero divisor and CLK_DIVIDER_ALLOW_ZERO not set\n",
   FUNC_1(VAR_1->hw.clk));
  return VAR_3;
 }

 VAR_5 = (unsigned long long int)VAR_3 * VAR_8;
 FUNC_4(VAR_5, VAR_9);

 return VAR_5;
}
