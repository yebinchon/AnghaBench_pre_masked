
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tegra_clk_pll_params {unsigned long cf_min; int flags; int mdiv_default; unsigned long cf_max; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct tegra_clk_pll_params *VAR_1,
      unsigned long VAR_2)
{
 u16 VAR_3 = VAR_2 / VAR_1->cf_min;

 if (VAR_1->flags & VAR_0)
  return (!VAR_1->mdiv_default ? VAR_3 :
   FUNC_0(VAR_3, VAR_1->mdiv_default));

 if (VAR_1->mdiv_default)
  return VAR_1->mdiv_default;

 if (VAR_2 > VAR_1->cf_max)
  return 2;
 else
  return 1;
}
