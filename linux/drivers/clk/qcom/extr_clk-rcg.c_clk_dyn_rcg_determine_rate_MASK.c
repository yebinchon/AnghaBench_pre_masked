
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct src_sel {int parent_map; } ;
struct clk_rate_request {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int regmap; } ;
struct clk_dyn_rcg {int freq_tbl; struct src_sel* s; int bank_reg; TYPE_1__ clkr; } ;


 int FUNC_0 (struct clk_hw*,int ,struct clk_rate_request*,int ) ;
 int FUNC_1 (struct clk_dyn_rcg*,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 struct clk_dyn_rcg* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0,
          struct clk_rate_request *VAR_1)
{
 struct clk_dyn_rcg *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3;
 int VAR_4;
 struct src_sel *VAR_5;

 FUNC_2(VAR_2->clkr.regmap, VAR_2->bank_reg, &VAR_3);
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 VAR_5 = &VAR_2->s[VAR_4];

 return FUNC_0(VAR_0, VAR_2->freq_tbl, VAR_1, VAR_5->parent_map);
}
