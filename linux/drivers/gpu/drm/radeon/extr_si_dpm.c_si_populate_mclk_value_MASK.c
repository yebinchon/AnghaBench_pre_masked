
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dll_cntl; int mclk_pwrmgt_cntl; int mpll_ad_func_cntl; int mpll_dq_func_cntl; int mpll_func_cntl; int mpll_func_cntl_1; int mpll_func_cntl_2; int mpll_ss1; int mpll_ss2; } ;
struct si_power_info {TYPE_1__ clock_registers; } ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; scalar_t__ mclk_ss; } ;
struct TYPE_7__ {int reference_freq; } ;
struct TYPE_8__ {TYPE_2__ mpll; } ;
struct radeon_device {TYPE_3__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct atom_mpll_param {int dll_speed; int post_div; int yclk_sel; int vco_mode; int clkfrac; int clkf; int bwcntl; } ;
struct TYPE_9__ {void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL; void* vMPLL_FUNC_CNTL_2; void* vMPLL_FUNC_CNTL_1; void* vMPLL_FUNC_CNTL; void* mclk_value; } ;
typedef TYPE_4__ SISLANDS_SMC_MCLK_VALUE ;


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
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct radeon_device*,int,int,struct atom_mpll_param*) ;
 scalar_t__ FUNC_11 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 struct rv7xx_power_info* FUNC_12 (struct radeon_device*) ;
 struct si_power_info* FUNC_13 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_14(struct radeon_device *VAR_12,
      u32 VAR_13,
      u32 VAR_14,
      SISLANDS_SMC_MCLK_VALUE *VAR_15,
      bool VAR_16,
      bool VAR_17)
{
 struct rv7xx_power_info *VAR_18 = FUNC_12(VAR_12);
 struct si_power_info *VAR_19 = FUNC_13(VAR_12);
 u32 VAR_20 = VAR_19->clock_registers.dll_cntl;
 u32 VAR_21 = VAR_19->clock_registers.mclk_pwrmgt_cntl;
 u32 VAR_22 = VAR_19->clock_registers.mpll_ad_func_cntl;
 u32 VAR_23 = VAR_19->clock_registers.mpll_dq_func_cntl;
 u32 VAR_24 = VAR_19->clock_registers.mpll_func_cntl;
 u32 VAR_25 = VAR_19->clock_registers.mpll_func_cntl_1;
 u32 VAR_26 = VAR_19->clock_registers.mpll_func_cntl_2;
 u32 VAR_27 = VAR_19->clock_registers.mpll_ss1;
 u32 VAR_28 = VAR_19->clock_registers.mpll_ss2;
 struct atom_mpll_param VAR_29;
 int VAR_30;

 VAR_30 = FUNC_10(VAR_12, VAR_14, VAR_16, &VAR_29);
 if (VAR_30)
  return VAR_30;

 VAR_24 &= ~VAR_1;
 VAR_24 |= FUNC_0(VAR_29.bwcntl);

 VAR_25 &= ~(VAR_3 | VAR_2 | VAR_9);
 VAR_25 |= FUNC_1(VAR_29.clkf) |
  FUNC_2(VAR_29.clkfrac) | FUNC_6(VAR_29.vco_mode);

 VAR_22 &= ~VAR_10;
 VAR_22 |= FUNC_7(VAR_29.post_div);

 if (VAR_18->mem_gddr5) {
  VAR_23 &= ~(VAR_11 | VAR_10);
  VAR_23 |= FUNC_8(VAR_29.yclk_sel) |
   FUNC_7(VAR_29.post_div);
 }

 if (VAR_18->mclk_ss) {
  struct radeon_atom_ss VAR_31;
  u32 VAR_32;
  u32 VAR_33;
  u32 VAR_34 = VAR_12->clock.mpll.reference_freq;

  if (VAR_18->mem_gddr5)
   VAR_32 = VAR_14 * 4;
  else
   VAR_32 = VAR_14 * 2;

  VAR_33 = VAR_32 / VAR_34;
  VAR_33 = VAR_33 * VAR_33;
  if (FUNC_11(VAR_12, &VAR_31,
           VAR_0, VAR_32)) {
   u32 VAR_35 = VAR_34 * 5 / VAR_31.rate;
   u32 VAR_36 = (u32)((((131 * VAR_31.percentage * VAR_31.rate) / 100) * VAR_33) / VAR_32);

   VAR_27 &= ~VAR_5;
   VAR_27 |= FUNC_4(VAR_36);

   VAR_28 &= ~VAR_4;
   VAR_28 |= FUNC_3(VAR_35);
  }
 }

 VAR_21 &= ~VAR_6;
 VAR_21 |= FUNC_5(VAR_29.dll_speed);

 if (VAR_17)
  VAR_21 |= VAR_7 | VAR_8;
 else
  VAR_21 &= ~(VAR_7 | VAR_8);

 VAR_15->mclk_value = FUNC_9(VAR_14);
 VAR_15->vMPLL_FUNC_CNTL = FUNC_9(VAR_24);
 VAR_15->vMPLL_FUNC_CNTL_1 = FUNC_9(VAR_25);
 VAR_15->vMPLL_FUNC_CNTL_2 = FUNC_9(VAR_26);
 VAR_15->vMPLL_AD_FUNC_CNTL = FUNC_9(VAR_22);
 VAR_15->vMPLL_DQ_FUNC_CNTL = FUNC_9(VAR_23);
 VAR_15->vMCLK_PWRMGT_CNTL = FUNC_9(VAR_21);
 VAR_15->vDLL_CNTL = FUNC_9(VAR_20);
 VAR_15->vMPLL_SS = FUNC_9(VAR_27);
 VAR_15->vMPLL_SS2 = FUNC_9(VAR_28);

 return 0;
}
