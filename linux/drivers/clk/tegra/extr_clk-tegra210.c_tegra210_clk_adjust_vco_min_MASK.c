
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_pll_params {unsigned long vco_min; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_2(struct tegra_clk_pll_params *VAR_1,
       unsigned long VAR_2)
{
 unsigned long VAR_3 = VAR_1->vco_min;

 VAR_1->vco_min += FUNC_0(VAR_2, VAR_0);
 VAR_3 = FUNC_1(VAR_3, VAR_1->vco_min);

 return VAR_3;
}
