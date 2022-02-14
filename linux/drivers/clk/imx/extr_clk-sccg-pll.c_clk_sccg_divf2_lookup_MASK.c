
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_sccg_pll_setup {scalar_t__ divf2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*) ;

__attribute__((used)) static int FUNC_1(struct clk_sccg_pll_setup *VAR_2,
     struct clk_sccg_pll_setup *VAR_3)
{
 int VAR_4 = -VAR_0;

 for (VAR_3->divf2 = 0; VAR_3->divf2 <= VAR_1;
      VAR_3->divf2++) {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (!VAR_4)
   return VAR_4;
 }

 return VAR_4;
}
