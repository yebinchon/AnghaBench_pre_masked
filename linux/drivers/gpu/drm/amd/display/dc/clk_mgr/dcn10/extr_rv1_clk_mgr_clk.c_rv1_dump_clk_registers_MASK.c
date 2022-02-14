
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_state_registers {int CLK0_CLK8_CURRENT_CNT; int CLK0_CLK8_DS_CNTL; int CLK0_CLK8_ALLOW_DS; int CLK0_CLK10_CURRENT_CNT; int CLK0_CLK11_CURRENT_CNT; } ;
struct clk_mgr_internal {int dummy; } ;
struct clk_mgr {int dummy; } ;
struct clk_bypass {int dcfclk_bypass; int dispclk_pypass; int dprefclk_bypass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 struct clk_mgr_internal* FUNC_1 (struct clk_mgr*) ;

void FUNC_2(struct clk_state_registers *VAR_8, struct clk_bypass *VAR_9, struct clk_mgr *VAR_10)
{
 struct clk_mgr_internal *VAR_11 = FUNC_1(VAR_10);

  VAR_8->CLK0_CLK8_CURRENT_CNT = FUNC_0(VAR_6) / 10;

  VAR_9->dcfclk_bypass = FUNC_0(VAR_5) & 0x0007;
  if (VAR_9->dcfclk_bypass < 0 || VAR_9->dcfclk_bypass > 4)
   VAR_9->dcfclk_bypass = 0;


  VAR_8->CLK0_CLK8_DS_CNTL = FUNC_0(VAR_7) / 10;

  VAR_8->CLK0_CLK8_ALLOW_DS = FUNC_0(VAR_4);

  VAR_8->CLK0_CLK10_CURRENT_CNT = FUNC_0(VAR_1) / 10;

  VAR_9->dispclk_pypass = FUNC_0(VAR_0) & 0x0007;
  if (VAR_9->dispclk_pypass < 0 || VAR_9->dispclk_pypass > 4)
   VAR_9->dispclk_pypass = 0;

  VAR_8->CLK0_CLK11_CURRENT_CNT = FUNC_0(VAR_3) / 10;

  VAR_9->dprefclk_bypass = FUNC_0(VAR_2) & 0x0007;
  if (VAR_9->dprefclk_bypass < 0 || VAR_9->dprefclk_bypass > 4)
   VAR_9->dprefclk_bypass = 0;

}
