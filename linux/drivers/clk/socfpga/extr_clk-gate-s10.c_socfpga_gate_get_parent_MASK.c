
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct socfpga_gate_clk {int bypass_shift; scalar_t__ bypass_reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct socfpga_gate_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct socfpga_gate_clk *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;
 u8 VAR_3 = 0;

 if (VAR_1->bypass_reg) {
  VAR_2 = (0x1 << VAR_1->bypass_shift);
  VAR_3 = ((FUNC_0(VAR_1->bypass_reg) & VAR_2) >>
     VAR_1->bypass_shift);
 }
 return VAR_3;
}
