
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reg; } ;
struct socfpga_pll {TYPE_1__ hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned long long,int) ;
 unsigned long FUNC_1 (int ) ;
 struct socfpga_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_7,
      unsigned long VAR_8)
{
 struct socfpga_pll *VAR_9 = FUNC_2(VAR_7);
 unsigned long VAR_10, VAR_11, VAR_12;
 unsigned long long VAR_13;
 unsigned long VAR_14;

 VAR_12 = FUNC_1(VAR_9->hw.reg);
 VAR_14 = FUNC_1(VAR_6 + VAR_0);
 if (VAR_14 & VAR_1)
  return VAR_8;

 VAR_10 = (VAR_12 & VAR_2) >> VAR_3;
 VAR_11 = (VAR_12 & VAR_4) >> VAR_5;
 VAR_13 = (unsigned long long)VAR_8 * (VAR_10 + 1);
 FUNC_0(VAR_13, (1 + VAR_11));
 return (unsigned long)VAR_13;
}
