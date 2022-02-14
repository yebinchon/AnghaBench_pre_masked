
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reg; } ;
struct socfpga_pll {TYPE_1__ hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct socfpga_pll* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct socfpga_pll *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;


 VAR_3 = FUNC_0(VAR_2->hw.reg);
 VAR_3 |= VAR_0;
 FUNC_2(VAR_3, VAR_2->hw.reg);

 return 0;
}
