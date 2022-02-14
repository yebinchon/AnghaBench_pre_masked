
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pllv3_vf610_mf {int mfn; int mfd; int mfi; } ;
struct clk_pllv3 {int div_mask; scalar_t__ base; scalar_t__ denom_offset; scalar_t__ num_offset; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,struct clk_pllv3_vf610_mf) ;
 int FUNC_1 (scalar_t__) ;
 struct clk_pllv3* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
           unsigned long VAR_1)
{
 struct clk_pllv3 *VAR_2 = FUNC_2(VAR_0);
 struct clk_pllv3_vf610_mf VAR_3;

 VAR_3.mfn = FUNC_1(VAR_2->base + VAR_2->num_offset);
 VAR_3.mfd = FUNC_1(VAR_2->base + VAR_2->denom_offset);
 VAR_3.mfi = (FUNC_1(VAR_2->base) & VAR_2->div_mask) ? 22 : 20;

 return FUNC_0(VAR_1, VAR_3);
}
