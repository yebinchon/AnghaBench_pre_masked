
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct owl_gate_hw {int gate_flags; int bit_idx; int reg; } ;
struct owl_clk_common {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;

int FUNC_2(const struct owl_clk_common *VAR_1,
     const struct owl_gate_hw *VAR_2)
{
 u32 VAR_3;

 FUNC_1(VAR_1->regmap, VAR_2->reg, &VAR_3);

 if (VAR_2->gate_flags & VAR_0)
  VAR_3 ^= FUNC_0(VAR_2->bit_idx);

 return !!(VAR_3 & FUNC_0(VAR_2->bit_idx));
}
