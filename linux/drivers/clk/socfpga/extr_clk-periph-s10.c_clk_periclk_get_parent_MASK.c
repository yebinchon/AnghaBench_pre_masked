
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ reg; } ;
struct socfpga_periph_clk {int bypass_shift; TYPE_1__ hw; scalar_t__ bypass_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct socfpga_periph_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_2)
{
 struct socfpga_periph_clk *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4, VAR_5;
 u8 VAR_6;

 if (VAR_3->bypass_reg) {
  VAR_5 = (0x1 << VAR_3->bypass_shift);
  VAR_6 = ((FUNC_0(VAR_3->bypass_reg) & VAR_5) >>
      VAR_3->bypass_shift);
 } else {
  VAR_4 = FUNC_0(VAR_3->hw.reg);
  VAR_6 = (VAR_4 >> VAR_1) &
   VAR_0;
 }
 return VAR_6;
}
