
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rockchip_pll_rate_table {int fbdiv; scalar_t__ dsmpd; unsigned long frac; int postdiv2; int postdiv1; int refdiv; } ;
struct rockchip_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct rockchip_clk_pll*,struct rockchip_pll_rate_table*) ;
 struct rockchip_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
           unsigned long VAR_1)
{
 struct rockchip_clk_pll *VAR_2 = FUNC_2(VAR_0);
 struct rockchip_pll_rate_table VAR_3;
 u64 VAR_4 = VAR_1;

 FUNC_1(VAR_2, &VAR_3);

 VAR_4 *= VAR_3.fbdiv;
 FUNC_0(VAR_4, VAR_3.refdiv);

 if (VAR_3.dsmpd == 0) {

  u64 VAR_5 = VAR_1 * VAR_3.frac;

  FUNC_0(VAR_5, VAR_3.refdiv);
  VAR_4 += VAR_5 >> 24;
 }

 FUNC_0(VAR_4, VAR_3.postdiv1);
 FUNC_0(VAR_4, VAR_3.postdiv2);

 return (unsigned long)VAR_4;
}
