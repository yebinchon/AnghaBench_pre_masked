
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socfpga_gate_clk {int fixed_div; int shift; scalar_t__ width; scalar_t__ div_reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct socfpga_gate_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
 unsigned long VAR_1)
{
 struct socfpga_gate_clk *VAR_2 = FUNC_2(VAR_0);
 u32 VAR_3 = 1, VAR_4;

 if (VAR_2->fixed_div)
  VAR_3 = VAR_2->fixed_div;
 else if (VAR_2->div_reg) {
  VAR_4 = FUNC_1(VAR_2->div_reg) >> VAR_2->shift;
  VAR_4 &= FUNC_0(VAR_2->width - 1, 0);
  VAR_3 = (1 << VAR_4);
 }

 return VAR_1 / VAR_3;
}
