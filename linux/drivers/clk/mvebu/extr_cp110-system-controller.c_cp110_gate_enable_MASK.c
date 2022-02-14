
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp110_gate_clk {int bit_idx; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct cp110_gate_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct cp110_gate_clk *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->regmap, VAR_0,
      FUNC_0(VAR_2->bit_idx), FUNC_0(VAR_2->bit_idx));

 return 0;
}
