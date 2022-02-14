
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reg; } ;
struct socfpga_periph_clk {long fixed_div; TYPE_1__ hw; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct socfpga_periph_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
          unsigned long VAR_1)
{
 struct socfpga_periph_clk *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3 = 1;

 if (VAR_2->fixed_div) {
  VAR_3 = VAR_2->fixed_div;
 } else {
  if (VAR_2->hw.reg)
   VAR_3 = ((FUNC_0(VAR_2->hw.reg) & 0x7ff) + 1);
 }

 return VAR_1 / VAR_3;
}
