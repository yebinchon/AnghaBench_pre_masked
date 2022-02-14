
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_inv_clock {int shift; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rockchip_inv_clock* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct rockchip_inv_clock *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->reg) >> VAR_2->shift;
 VAR_3 &= VAR_0;
 return VAR_3 ? 180 : 0;
}
