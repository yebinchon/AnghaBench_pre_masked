
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct krait_div2_clk {int shift; int offset; int width; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int ) ;
 struct krait_div2_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 struct krait_div2_clk *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3 = FUNC_0(VAR_2->width) - 1;
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_2->offset);
 VAR_4 >>= VAR_2->shift;
 VAR_4 &= VAR_3;
 VAR_4 = (VAR_4 + 1) * 2;

 return FUNC_1(VAR_1, VAR_4);
}
