
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct rockchip_muxgrf_clock {unsigned int shift; int flags; int reg; int regmap; scalar_t__ width; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 struct rockchip_muxgrf_clock* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct rockchip_muxgrf_clock *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4 = FUNC_0(VAR_3->width + VAR_3->shift - 1, VAR_3->shift);
 unsigned int VAR_5;

 VAR_5 = VAR_2;
 VAR_5 <<= VAR_3->shift;

 if (VAR_3->flags & VAR_0)
  return FUNC_2(VAR_3->regmap, VAR_3->reg, VAR_5 | (VAR_4 << 16));
 else
  return FUNC_1(VAR_3->regmap, VAR_3->reg, VAR_4, VAR_5);
}
