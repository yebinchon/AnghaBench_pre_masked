
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socfpga_gate_clk {int fixed_div; int shift; scalar_t__ div_reg; scalar_t__ width; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct socfpga_gate_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
 unsigned long VAR_2)
{
 struct socfpga_gate_clk *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4 = 1, VAR_5;

 if (VAR_3->fixed_div)
  VAR_4 = VAR_3->fixed_div;
 else if (VAR_3->div_reg) {
  VAR_5 = FUNC_1(VAR_3->div_reg) >> VAR_3->shift;
  VAR_5 &= FUNC_0(VAR_3->width - 1, 0);

  if ((int) VAR_3->div_reg & VAR_0)
   VAR_4 = VAR_5 + 1;
  else
   VAR_4 = (1 << VAR_5);
 }

 return VAR_2 / VAR_4;
}
