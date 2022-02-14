
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* mpll_ss2; void* mpll_ss1; void* mpll_func_cntl_2; void* mpll_func_cntl_1; void* mpll_func_cntl; void* mpll_dq_func_cntl; void* mpll_ad_func_cntl; void* mclk_pwrmgt_cntl; void* dll_cntl; void* cg_spll_spread_spectrum_2; void* cg_spll_spread_spectrum; void* cg_spll_func_cntl_4; void* cg_spll_func_cntl_3; void* cg_spll_func_cntl_2; void* cg_spll_func_cntl; } ;
struct si_power_info {TYPE_1__ clock_registers; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_0 (int ) ;
 struct si_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_15)
{
 struct si_power_info *VAR_16 = FUNC_1(VAR_15);

 VAR_16->clock_registers.cg_spll_func_cntl = FUNC_0(VAR_0);
 VAR_16->clock_registers.cg_spll_func_cntl_2 = FUNC_0(VAR_1);
 VAR_16->clock_registers.cg_spll_func_cntl_3 = FUNC_0(VAR_2);
 VAR_16->clock_registers.cg_spll_func_cntl_4 = FUNC_0(VAR_3);
 VAR_16->clock_registers.cg_spll_spread_spectrum = FUNC_0(VAR_4);
 VAR_16->clock_registers.cg_spll_spread_spectrum_2 = FUNC_0(VAR_5);
 VAR_16->clock_registers.dll_cntl = FUNC_0(VAR_6);
 VAR_16->clock_registers.mclk_pwrmgt_cntl = FUNC_0(VAR_7);
 VAR_16->clock_registers.mpll_ad_func_cntl = FUNC_0(VAR_8);
 VAR_16->clock_registers.mpll_dq_func_cntl = FUNC_0(VAR_9);
 VAR_16->clock_registers.mpll_func_cntl = FUNC_0(VAR_10);
 VAR_16->clock_registers.mpll_func_cntl_1 = FUNC_0(VAR_11);
 VAR_16->clock_registers.mpll_func_cntl_2 = FUNC_0(VAR_12);
 VAR_16->clock_registers.mpll_ss1 = FUNC_0(VAR_13);
 VAR_16->clock_registers.mpll_ss2 = FUNC_0(VAR_14);
}
