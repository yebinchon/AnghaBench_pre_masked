
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_pllv3_vf610_mf {int mfi; int mfd; int mfn; } ;
struct clk_pllv3 {scalar_t__ denom_offset; scalar_t__ base; scalar_t__ num_offset; int div_mask; } ;
struct clk_hw {int dummy; } ;


 struct clk_pllv3_vf610_mf FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct clk_pllv3*) ;
 int FUNC_2 (scalar_t__) ;
 struct clk_pllv3* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2)
{
 struct clk_pllv3 *VAR_3 = FUNC_3(VAR_0);
 struct clk_pllv3_vf610_mf VAR_4 =
   FUNC_0(VAR_2, VAR_1);
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_3->base);
 if (VAR_4.mfi == 20)
  VAR_5 &= ~VAR_3->div_mask;
 else
  VAR_5 |= VAR_3->div_mask;
 FUNC_4(VAR_5, VAR_3->base);

 FUNC_4(VAR_4.mfn, VAR_3->base + VAR_3->num_offset);
 FUNC_4(VAR_4.mfd, VAR_3->base + VAR_3->denom_offset);

 return FUNC_1(VAR_3);
}
