
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int reference_freq; } ;
struct TYPE_8__ {TYPE_2__ mpll; } ;
struct radeon_device {TYPE_3__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct TYPE_6__ {int dll_cntl; int mclk_pwrmgt_cntl; int mpll_ad_func_cntl; int mpll_dq_func_cntl; int mpll_func_cntl; int mpll_func_cntl_1; int mpll_func_cntl_2; int mpll_ss1; int mpll_ss2; } ;
struct ci_power_info {scalar_t__ caps_mclk_ss_support; scalar_t__ mem_gddr5; TYPE_1__ clock_registers; } ;
struct atom_mpll_param {int post_div; int qdr; int dll_speed; int yclk_sel; int vco_mode; int clkfrac; int clkf; int bwcntl; } ;
struct TYPE_9__ {int MclkFrequency; int MpllFuncCntl; int MpllFuncCntl_1; int MpllFuncCntl_2; int MpllAdFuncCntl; int MpllDqFuncCntl; int MclkPwrmgtCntl; int DllCntl; int MpllSs1; int MpllSs2; } ;
typedef TYPE_4__ SMU7_Discrete_MemoryLevel ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 int FUNC_7 (int) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 struct ci_power_info* FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int,int,struct atom_mpll_param*) ;
 scalar_t__ FUNC_11 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_12,
        u32 VAR_13,
        SMU7_Discrete_MemoryLevel *VAR_14,
        bool VAR_15,
        bool VAR_16)
{
 struct ci_power_info *VAR_17 = FUNC_9(VAR_12);
 u32 VAR_18 = VAR_17->clock_registers.dll_cntl;
 u32 VAR_19 = VAR_17->clock_registers.mclk_pwrmgt_cntl;
 u32 VAR_20 = VAR_17->clock_registers.mpll_ad_func_cntl;
 u32 VAR_21 = VAR_17->clock_registers.mpll_dq_func_cntl;
 u32 VAR_22 = VAR_17->clock_registers.mpll_func_cntl;
 u32 VAR_23 = VAR_17->clock_registers.mpll_func_cntl_1;
 u32 VAR_24 = VAR_17->clock_registers.mpll_func_cntl_2;
 u32 VAR_25 = VAR_17->clock_registers.mpll_ss1;
 u32 VAR_26 = VAR_17->clock_registers.mpll_ss2;
 struct atom_mpll_param VAR_27;
 int VAR_28;

 VAR_28 = FUNC_10(VAR_12, VAR_13, VAR_15, &VAR_27);
 if (VAR_28)
  return VAR_28;

 VAR_22 &= ~VAR_1;
 VAR_22 |= FUNC_0(VAR_27.bwcntl);

 VAR_23 &= ~(VAR_3 | VAR_2 | VAR_9);
 VAR_23 |= FUNC_1(VAR_27.clkf) |
  FUNC_2(VAR_27.clkfrac) | FUNC_6(VAR_27.vco_mode);

 VAR_20 &= ~VAR_10;
 VAR_20 |= FUNC_7(VAR_27.post_div);

 if (VAR_17->mem_gddr5) {
  VAR_21 &= ~(VAR_11 | VAR_10);
  VAR_21 |= FUNC_8(VAR_27.yclk_sel) |
   FUNC_7(VAR_27.post_div);
 }

 if (VAR_17->caps_mclk_ss_support) {
  struct radeon_atom_ss VAR_29;
  u32 VAR_30;
  u32 VAR_31;
  u32 VAR_32 = VAR_12->clock.mpll.reference_freq;

  if (VAR_27.qdr == 1)
   VAR_30 = VAR_13 * 4 * (1 << VAR_27.post_div);
  else
   VAR_30 = VAR_13 * 2 * (1 << VAR_27.post_div);

  VAR_31 = (VAR_30 / VAR_32);
  VAR_31 = VAR_31 * VAR_31;
  if (FUNC_11(VAR_12, &VAR_29,
           VAR_0, VAR_30)) {
   u32 VAR_33 = VAR_32 * 5 / VAR_29.rate;
   u32 VAR_34 = (u32)((((131 * VAR_29.percentage * VAR_29.rate) / 100) * VAR_31) / VAR_30);

   VAR_25 &= ~VAR_5;
   VAR_25 |= FUNC_4(VAR_34);

   VAR_26 &= ~VAR_4;
   VAR_26 |= FUNC_3(VAR_33);
  }
 }

 VAR_19 &= ~VAR_6;
 VAR_19 |= FUNC_5(VAR_27.dll_speed);

 if (VAR_16)
  VAR_19 |= VAR_7 | VAR_8;
 else
  VAR_19 &= ~(VAR_7 | VAR_8);

 VAR_14->MclkFrequency = VAR_13;
 VAR_14->MpllFuncCntl = VAR_22;
 VAR_14->MpllFuncCntl_1 = VAR_23;
 VAR_14->MpllFuncCntl_2 = VAR_24;
 VAR_14->MpllAdFuncCntl = VAR_20;
 VAR_14->MpllDqFuncCntl = VAR_21;
 VAR_14->MclkPwrmgtCntl = VAR_19;
 VAR_14->DllCntl = VAR_18;
 VAR_14->MpllSs1 = VAR_25;
 VAR_14->MpllSs2 = VAR_26;

 return 0;
}
