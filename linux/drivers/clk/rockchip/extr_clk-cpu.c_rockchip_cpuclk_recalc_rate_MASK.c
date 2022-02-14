
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_cpuclk_reg_data {int div_core_shift; int div_core_mask; scalar_t__ core_reg; } ;
struct rockchip_cpuclk {scalar_t__ reg_base; struct rockchip_cpuclk_reg_data* reg_data; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct rockchip_cpuclk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
     unsigned long VAR_1)
{
 struct rockchip_cpuclk *VAR_2 = FUNC_1(VAR_0);
 const struct rockchip_cpuclk_reg_data *VAR_3 = VAR_2->reg_data;
 u32 VAR_4 = FUNC_0(VAR_2->reg_base + VAR_3->core_reg);

 VAR_4 >>= VAR_3->div_core_shift;
 VAR_4 &= VAR_3->div_core_mask;
 return VAR_1 / (VAR_4 + 1);
}
