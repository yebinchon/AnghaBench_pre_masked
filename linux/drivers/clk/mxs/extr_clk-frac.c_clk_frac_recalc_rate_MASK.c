
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_frac {int shift; int width; int reg; } ;


 int FUNC_0 (int ) ;
 struct clk_frac* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct clk_frac *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_0(VAR_2->reg) >> VAR_2->shift;
 VAR_3 &= (1 << VAR_2->width) - 1;

 VAR_4 = (u64)VAR_1 * VAR_3;
 return VAR_4 >> VAR_2->width;
}
