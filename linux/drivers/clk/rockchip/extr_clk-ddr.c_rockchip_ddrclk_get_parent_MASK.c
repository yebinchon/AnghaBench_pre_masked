
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_ddrclk {int mux_shift; scalar_t__ mux_width; scalar_t__ mux_offset; scalar_t__ reg_base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct rockchip_ddrclk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct rockchip_ddrclk *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->reg_base +
   VAR_1->mux_offset) >> VAR_1->mux_shift;
 VAR_2 &= FUNC_0(VAR_1->mux_width - 1, 0);

 return VAR_2;
}
