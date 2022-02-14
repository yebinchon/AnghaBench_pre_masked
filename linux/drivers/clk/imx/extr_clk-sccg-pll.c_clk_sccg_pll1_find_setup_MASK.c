
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct clk_sccg_pll_setup {scalar_t__ ref; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*) ;

__attribute__((used)) static int FUNC_1(struct clk_sccg_pll_setup *VAR_3,
     struct clk_sccg_pll_setup *VAR_4,
     uint64_t VAR_5)
{

 int VAR_6 = -VAR_0;

 if (VAR_5 < VAR_2 || VAR_5 > VAR_1)
  return VAR_6;

 VAR_4->ref = VAR_5;

 VAR_6 = FUNC_0(VAR_3, VAR_4);

 return VAR_6;
}
