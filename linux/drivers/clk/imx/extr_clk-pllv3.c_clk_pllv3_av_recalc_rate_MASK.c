
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_pllv3 {unsigned long div_mask; scalar_t__ base; scalar_t__ denom_offset; scalar_t__ num_offset; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (scalar_t__) ;
 struct clk_pllv3* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
           unsigned long VAR_1)
{
 struct clk_pllv3 *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3 = FUNC_1(VAR_2->base + VAR_2->num_offset);
 u32 VAR_4 = FUNC_1(VAR_2->base + VAR_2->denom_offset);
 u32 VAR_5 = FUNC_1(VAR_2->base) & VAR_2->div_mask;
 u64 VAR_6 = (u64)VAR_1;

 VAR_6 *= VAR_3;
 FUNC_0(VAR_6, VAR_4);

 return VAR_1 * VAR_5 + (unsigned long)VAR_6;
}
