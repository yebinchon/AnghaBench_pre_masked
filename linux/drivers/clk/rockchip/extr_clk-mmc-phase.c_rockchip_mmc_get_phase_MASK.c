
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rockchip_mmc_clock {int shift; int reg; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ) ;
 struct rockchip_mmc_clock* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_6)
{
 struct rockchip_mmc_clock *VAR_7 = FUNC_3(VAR_6);
 unsigned long VAR_8 = FUNC_1(VAR_6);
 u32 VAR_9;
 u16 VAR_10;
 u32 VAR_11 = 0;


 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7->reg) >> (VAR_7->shift);

 VAR_10 = (VAR_9 & VAR_1) * 90;

 if (VAR_9 & VAR_5) {

  unsigned long VAR_12 = (VAR_4 / 10) *
     36 * (VAR_8 / 10000);

  VAR_11 = (VAR_9 & VAR_2);
  VAR_11 >>= VAR_3;
  VAR_10 += FUNC_0(VAR_11 * VAR_12, 1000000);
 }

 return VAR_10 % 360;
}
