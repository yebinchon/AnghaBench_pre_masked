
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_sccg_pll_setup {scalar_t__ divr2; scalar_t__ ref_div2; scalar_t__ vco1; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_sccg_pll_setup *VAR_4,
    struct clk_sccg_pll_setup *VAR_5)
{
 int VAR_6 = -VAR_0;

 for (VAR_5->divr2 = 0; VAR_5->divr2 <= VAR_1;
      VAR_5->divr2++) {
  VAR_5->ref_div2 = VAR_5->vco1;
  FUNC_1(VAR_5->ref_div2, VAR_5->divr2 + 1);
  if (VAR_5->ref_div2 >= VAR_3 &&
      VAR_5->ref_div2 <= VAR_2) {
   VAR_6 = FUNC_0(VAR_4, VAR_5);
   if (!VAR_6)
    return VAR_6;
  }
 }

 return VAR_6;
}
