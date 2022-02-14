
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct rockchip_muxgrf_clock {unsigned int shift; int reg; int regmap; scalar_t__ width; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct rockchip_muxgrf_clock* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct rockchip_muxgrf_clock *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2 = FUNC_0(VAR_1->width - 1, 0);
 unsigned int VAR_3;

 FUNC_1(VAR_1->regmap, VAR_1->reg, &VAR_3);

 VAR_3 >>= VAR_1->shift;
 VAR_3 &= VAR_2;

 return VAR_3;
}
