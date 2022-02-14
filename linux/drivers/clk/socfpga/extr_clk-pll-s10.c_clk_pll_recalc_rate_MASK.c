
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg; } ;
struct socfpga_pll {TYPE_1__ hw; } ;
struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int) ;
 struct socfpga_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_4,
      unsigned long VAR_5)
{
 struct socfpga_pll *VAR_6 = FUNC_1(VAR_4);
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long long VAR_10;


 VAR_9 = FUNC_0(VAR_6->hw.reg);
 VAR_8 = (VAR_9 & VAR_2) >> VAR_3;
 VAR_10 = (unsigned long long)VAR_5 / VAR_8;


 VAR_9 = FUNC_0(VAR_6->hw.reg + 0x4);
 VAR_7 = (VAR_9 & VAR_0) >> VAR_1;
 VAR_10 = (unsigned long long)VAR_10 * (VAR_7 + 6);

 return (unsigned long)VAR_10;
}
