
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regmap {int dummy; } ;
struct clk_hw {struct clk_init_data* init; } ;
struct cp110_gate_clk {struct clk_hw hw; int bit_idx; struct regmap* regmap; } ;
struct clk_init_data {char const* name; char const** parent_names; int num_parents; int * ops; } ;
typedef int init ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct clk_hw*) ;
 int VAR_2 ;
 int FUNC_2 (struct cp110_gate_clk*) ;
 struct cp110_gate_clk* FUNC_3 (int,int ) ;
 int FUNC_4 (struct clk_init_data*,int ,int) ;

__attribute__((used)) static struct clk_hw *FUNC_5(const char *VAR_3,
       const char *VAR_4,
       struct regmap *VAR_5, u8 VAR_6)
{
 struct cp110_gate_clk *VAR_7;
 struct clk_hw *VAR_8;
 struct clk_init_data VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.name = VAR_3;
 VAR_9.ops = &VAR_2;
 VAR_9.parent_names = &VAR_4;
 VAR_9.num_parents = 1;

 VAR_7->regmap = VAR_5;
 VAR_7->bit_idx = VAR_6;
 VAR_7->hw.init = &VAR_9;

 VAR_8 = &VAR_7->hw;
 VAR_10 = FUNC_1(((void*)0), VAR_8);
 if (VAR_10) {
  FUNC_2(VAR_7);
  VAR_8 = FUNC_0(VAR_10);
 }

 return VAR_8;
}
