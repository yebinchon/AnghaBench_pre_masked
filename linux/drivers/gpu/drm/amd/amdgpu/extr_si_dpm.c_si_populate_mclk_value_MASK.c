
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int dll_cntl; int mclk_pwrmgt_cntl; int mpll_ad_func_cntl; int mpll_dq_func_cntl; int mpll_func_cntl; int mpll_func_cntl_1; int mpll_func_cntl_2; int mpll_ss1; int mpll_ss2; } ;
struct si_power_info {TYPE_1__ clock_registers; } ;
struct rv7xx_power_info {scalar_t__ mclk_ss; } ;
struct atom_mpll_param {int dll_speed; int post_div; int yclk_sel; int vco_mode; int clkfrac; int clkf; int bwcntl; } ;
struct TYPE_10__ {scalar_t__ vram_type; } ;
struct TYPE_8__ {int reference_freq; } ;
struct TYPE_9__ {TYPE_2__ mpll; } ;
struct amdgpu_device {TYPE_4__ gmc; TYPE_3__ clock; } ;
struct amdgpu_atom_ss {int rate; int percentage; } ;
struct TYPE_11__ {void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL; void* vMPLL_FUNC_CNTL_2; void* vMPLL_FUNC_CNTL_1; void* vMPLL_FUNC_CNTL; void* mclk_value; } ;
typedef TYPE_5__ SISLANDS_SMC_MCLK_VALUE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int VAR_11 ;
 int FUNC_8 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (struct amdgpu_device*,struct amdgpu_atom_ss*,int ,int) ;
 int FUNC_10 (struct amdgpu_device*,int,int,struct atom_mpll_param*) ;
 void* FUNC_11 (int) ;
 struct rv7xx_power_info* FUNC_12 (struct amdgpu_device*) ;
 struct si_power_info* FUNC_13 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_13,
      u32 VAR_14,
      u32 VAR_15,
      SISLANDS_SMC_MCLK_VALUE *VAR_16,
      bool VAR_17,
      bool VAR_18)
{
 struct rv7xx_power_info *VAR_19 = FUNC_12(VAR_13);
 struct si_power_info *VAR_20 = FUNC_13(VAR_13);
 u32 VAR_21 = VAR_20->clock_registers.dll_cntl;
 u32 VAR_22 = VAR_20->clock_registers.mclk_pwrmgt_cntl;
 u32 VAR_23 = VAR_20->clock_registers.mpll_ad_func_cntl;
 u32 VAR_24 = VAR_20->clock_registers.mpll_dq_func_cntl;
 u32 VAR_25 = VAR_20->clock_registers.mpll_func_cntl;
 u32 VAR_26 = VAR_20->clock_registers.mpll_func_cntl_1;
 u32 VAR_27 = VAR_20->clock_registers.mpll_func_cntl_2;
 u32 VAR_28 = VAR_20->clock_registers.mpll_ss1;
 u32 VAR_29 = VAR_20->clock_registers.mpll_ss2;
 struct atom_mpll_param VAR_30;
 int VAR_31;

 VAR_31 = FUNC_10(VAR_13, VAR_15, VAR_17, &VAR_30);
 if (VAR_31)
  return VAR_31;

 VAR_25 &= ~VAR_2;
 VAR_25 |= FUNC_0(VAR_30.bwcntl);

 VAR_26 &= ~(VAR_4 | VAR_3 | VAR_10);
 VAR_26 |= FUNC_1(VAR_30.clkf) |
  FUNC_2(VAR_30.clkfrac) | FUNC_6(VAR_30.vco_mode);

 VAR_23 &= ~VAR_11;
 VAR_23 |= FUNC_7(VAR_30.post_div);

 if (VAR_13->gmc.vram_type == VAR_0) {
  VAR_24 &= ~(VAR_12 | VAR_11);
  VAR_24 |= FUNC_8(VAR_30.yclk_sel) |
   FUNC_7(VAR_30.post_div);
 }

 if (VAR_19->mclk_ss) {
  struct amdgpu_atom_ss VAR_32;
  u32 VAR_33;
  u32 VAR_34;
  u32 VAR_35 = VAR_13->clock.mpll.reference_freq;

  if (VAR_13->gmc.vram_type == VAR_0)
   VAR_33 = VAR_15 * 4;
  else
   VAR_33 = VAR_15 * 2;

  VAR_34 = VAR_33 / VAR_35;
  VAR_34 = VAR_34 * VAR_34;
  if (FUNC_9(VAR_13, &VAR_32,
                                       VAR_1, VAR_33)) {
   u32 VAR_36 = VAR_35 * 5 / VAR_32.rate;
   u32 VAR_37 = (u32)((((131 * VAR_32.percentage * VAR_32.rate) / 100) * VAR_34) / VAR_33);

          VAR_28 &= ~VAR_6;
          VAR_28 |= FUNC_4(VAR_37);

          VAR_29 &= ~VAR_5;
          VAR_29 |= FUNC_3(VAR_36);
  }
 }

 VAR_22 &= ~VAR_7;
 VAR_22 |= FUNC_5(VAR_30.dll_speed);

 if (VAR_18)
  VAR_22 |= VAR_8 | VAR_9;
 else
  VAR_22 &= ~(VAR_8 | VAR_9);

 VAR_16->mclk_value = FUNC_11(VAR_15);
 VAR_16->vMPLL_FUNC_CNTL = FUNC_11(VAR_25);
 VAR_16->vMPLL_FUNC_CNTL_1 = FUNC_11(VAR_26);
 VAR_16->vMPLL_FUNC_CNTL_2 = FUNC_11(VAR_27);
 VAR_16->vMPLL_AD_FUNC_CNTL = FUNC_11(VAR_23);
 VAR_16->vMPLL_DQ_FUNC_CNTL = FUNC_11(VAR_24);
 VAR_16->vMCLK_PWRMGT_CNTL = FUNC_11(VAR_22);
 VAR_16->vDLL_CNTL = FUNC_11(VAR_21);
 VAR_16->vMPLL_SS = FUNC_11(VAR_28);
 VAR_16->vMPLL_SS2 = FUNC_11(VAR_29);

 return 0;
}
