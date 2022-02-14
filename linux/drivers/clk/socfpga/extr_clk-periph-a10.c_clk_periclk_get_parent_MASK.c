
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int reg; } ;
struct socfpga_periph_clk {TYPE_1__ hw; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 struct socfpga_periph_clk* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_4(struct clk_hw *VAR_5)
{
 struct socfpga_periph_clk *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7;
 const char *VAR_8 = FUNC_0(VAR_5);

 VAR_7 = FUNC_1(VAR_6->hw.reg);
 if (FUNC_2(VAR_8, VAR_2) ||
     FUNC_2(VAR_8, VAR_3) ||
     FUNC_2(VAR_8, VAR_4))
  return (VAR_7 >> VAR_1) &
   VAR_0;
 else
  return 0;
}
