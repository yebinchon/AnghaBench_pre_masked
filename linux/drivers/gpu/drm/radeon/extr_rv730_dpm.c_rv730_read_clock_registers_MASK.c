
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* mpll_ss2; void* mpll_ss; void* mpll_func_cntl3; void* mpll_func_cntl2; void* mpll_func_cntl; void* dll_cntl; void* mclk_pwrmgt_cntl; void* cg_spll_spread_spectrum_2; void* cg_spll_spread_spectrum; void* cg_spll_func_cntl_3; void* cg_spll_func_cntl_2; void* cg_spll_func_cntl; } ;
struct TYPE_4__ {TYPE_1__ rv730; } ;
struct rv7xx_power_info {TYPE_2__ clk_regs; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_12)
{
 struct rv7xx_power_info *VAR_13 = FUNC_1(VAR_12);

 VAR_13->clk_regs.rv730.cg_spll_func_cntl =
  FUNC_0(VAR_3);
 VAR_13->clk_regs.rv730.cg_spll_func_cntl_2 =
  FUNC_0(VAR_4);
 VAR_13->clk_regs.rv730.cg_spll_func_cntl_3 =
  FUNC_0(VAR_5);
 VAR_13->clk_regs.rv730.cg_spll_spread_spectrum =
  FUNC_0(VAR_6);
 VAR_13->clk_regs.rv730.cg_spll_spread_spectrum_2 =
  FUNC_0(VAR_7);

 VAR_13->clk_regs.rv730.mclk_pwrmgt_cntl =
  FUNC_0(VAR_11);
 VAR_13->clk_regs.rv730.dll_cntl =
  FUNC_0(VAR_10);
 VAR_13->clk_regs.rv730.mpll_func_cntl =
  FUNC_0(VAR_0);
 VAR_13->clk_regs.rv730.mpll_func_cntl2 =
  FUNC_0(VAR_1);
 VAR_13->clk_regs.rv730.mpll_func_cntl3 =
  FUNC_0(VAR_2);
 VAR_13->clk_regs.rv730.mpll_ss =
  FUNC_0(VAR_8);
 VAR_13->clk_regs.rv730.mpll_ss2 =
  FUNC_0(VAR_9);
}
