
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {int reg; } ;
struct socfpga_periph_clk {TYPE_1__ hw; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 struct socfpga_periph_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
          unsigned long VAR_2)
{
 struct socfpga_periph_clk *VAR_3 = FUNC_2(VAR_1);
 unsigned long VAR_4 = 1;
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_3->hw.reg);
 VAR_5 &= FUNC_0(VAR_0 - 1, 0);
 VAR_2 /= VAR_5;

 return VAR_2 / VAR_4;
}
