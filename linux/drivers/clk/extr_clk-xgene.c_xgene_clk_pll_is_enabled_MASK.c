
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_clk_pll {scalar_t__ pll_offset; scalar_t__ reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (char*,int ,char*) ;
 struct xgene_clk_pll* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1)
{
 struct xgene_clk_pll *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_3(VAR_2->reg + VAR_2->pll_offset);
 FUNC_1("%s pll %s\n", FUNC_0(VAR_1),
  VAR_3 & VAR_0 ? "disabled" : "enabled");

 return VAR_3 & VAR_0 ? 0 : 1;
}
