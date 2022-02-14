
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct rv7xx_power_info {scalar_t__ mem_gddr5; scalar_t__ mclk_ss; } ;
struct TYPE_7__ {int reference_freq; } ;
struct TYPE_8__ {TYPE_2__ mpll; } ;
struct radeon_device {TYPE_3__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct TYPE_6__ {int mpll_ad_func_cntl; int mpll_ad_func_cntl_2; int mpll_dq_func_cntl; int mpll_dq_func_cntl_2; int mclk_pwrmgt_cntl; int dll_cntl; int mpll_ss1; int mpll_ss2; } ;
struct ni_power_info {TYPE_1__ clock_registers; } ;
struct atom_clock_dividers {int post_div; int whole_fb_div; int frac_fb_div; int ref_div; scalar_t__ vco_mode; } ;
struct TYPE_9__ {void* vMPLL_SS2; void* vMPLL_SS; void* vDLL_CNTL; void* vMCLK_PWRMGT_CNTL; void* vMPLL_DQ_FUNC_CNTL_2; void* vMPLL_DQ_FUNC_CNTL; void* vMPLL_AD_FUNC_CNTL_2; void* vMPLL_AD_FUNC_CNTL; void* mclk_value; } ;
typedef TYPE_4__ NISLANDS_SMC_MCLK_VALUE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int ) ;
 int VAR_19 ;
 int FUNC_8 (int) ;
 int VAR_20 ;
 void* FUNC_9 (int) ;
 int FUNC_10 (struct radeon_device*,int) ;
 struct ni_power_info* FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;
 scalar_t__ FUNC_13 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,int) ;
 struct rv7xx_power_info* FUNC_16 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_17(struct radeon_device *VAR_21,
      u32 VAR_22,
      u32 VAR_23,
      NISLANDS_SMC_MCLK_VALUE *VAR_24,
      bool VAR_25,
      bool VAR_26)
{
 struct rv7xx_power_info *VAR_27 = FUNC_16(VAR_21);
 struct ni_power_info *VAR_28 = FUNC_11(VAR_21);
 u32 VAR_29 = VAR_28->clock_registers.mpll_ad_func_cntl;
 u32 VAR_30 = VAR_28->clock_registers.mpll_ad_func_cntl_2;
 u32 VAR_31 = VAR_28->clock_registers.mpll_dq_func_cntl;
 u32 VAR_32 = VAR_28->clock_registers.mpll_dq_func_cntl_2;
 u32 VAR_33 = VAR_28->clock_registers.mclk_pwrmgt_cntl;
 u32 VAR_34 = VAR_28->clock_registers.dll_cntl;
 u32 VAR_35 = VAR_28->clock_registers.mpll_ss1;
 u32 VAR_36 = VAR_28->clock_registers.mpll_ss2;
 struct atom_clock_dividers VAR_37;
 u32 VAR_38;
 u32 VAR_39;
 int VAR_40;
 u32 VAR_41;

 VAR_40 = FUNC_12(VAR_21, VAR_6,
          VAR_23, VAR_25, &VAR_37);
 if (VAR_40)
  return VAR_40;

 if (!VAR_25) {
  VAR_41 = FUNC_7(VAR_9);

  if (VAR_41 & 0x8000000)
   VAR_37.post_div = 1;
 }

 VAR_38 = FUNC_10(VAR_21, VAR_37.whole_fb_div);

 VAR_29 &= ~(VAR_3 |
          VAR_20 |
          VAR_2 |
          VAR_1 |
          VAR_8);
 VAR_29 |= FUNC_2(VAR_37.ref_div);
 VAR_29 |= FUNC_8(VAR_37.post_div);
 VAR_29 |= FUNC_0(VAR_37.whole_fb_div);
 VAR_29 |= FUNC_1(VAR_37.frac_fb_div);
 VAR_29 |= FUNC_6(VAR_38);

 if (VAR_37.vco_mode)
  VAR_30 |= VAR_19;
 else
  VAR_30 &= ~VAR_19;

 if (VAR_27->mem_gddr5) {
  VAR_31 &= ~(VAR_3 |
           VAR_20 |
           VAR_2 |
           VAR_1 |
           VAR_8);
  VAR_31 |= FUNC_2(VAR_37.ref_div);
  VAR_31 |= FUNC_8(VAR_37.post_div);
  VAR_31 |= FUNC_0(VAR_37.whole_fb_div);
  VAR_31 |= FUNC_1(VAR_37.frac_fb_div);
  VAR_31 |= FUNC_6(VAR_38);

  if (VAR_25)
   VAR_31 &= ~VAR_18;
  else
   VAR_31 |= VAR_18;

  if (VAR_37.vco_mode)
   VAR_32 |= VAR_19;
  else
   VAR_32 &= ~VAR_19;
 }

 if (VAR_27->mclk_ss) {
  struct radeon_atom_ss VAR_42;
  u32 VAR_43 = VAR_23 * VAR_37.post_div;

  if (FUNC_13(VAR_21, &VAR_42,
           VAR_0, VAR_43)) {
   u32 VAR_44 = VAR_21->clock.mpll.reference_freq;
   u32 VAR_45 = FUNC_14(VAR_37.ref_div);
   u32 VAR_46 = VAR_44 * 5 / (VAR_45 * VAR_42.rate);
   u32 VAR_47 = VAR_42.percentage *
    (0x4000 * VAR_37.whole_fb_div + 0x800 * VAR_37.frac_fb_div) / (VAR_46 * 625);

   VAR_35 &= ~VAR_5;
   VAR_35 |= FUNC_4(VAR_47);

   VAR_36 &= ~VAR_4;
   VAR_36 |= FUNC_3(VAR_46);
  }
 }

 VAR_39 = FUNC_15(VAR_27->mem_gddr5,
     VAR_23);

 VAR_33 &= ~VAR_7;
 VAR_33 |= FUNC_5(VAR_39);
 if (VAR_26)
  VAR_33 |= (VAR_10 |
         VAR_11 |
         VAR_12 |
         VAR_13 |
         VAR_14 |
         VAR_15 |
         VAR_16 |
         VAR_17);
 else
  VAR_33 &= ~(VAR_10 |
          VAR_11 |
          VAR_12 |
          VAR_13 |
          VAR_14 |
          VAR_15 |
          VAR_16 |
          VAR_17);


 VAR_24->mclk_value = FUNC_9(VAR_23);
 VAR_24->vMPLL_AD_FUNC_CNTL = FUNC_9(VAR_29);
 VAR_24->vMPLL_AD_FUNC_CNTL_2 = FUNC_9(VAR_30);
 VAR_24->vMPLL_DQ_FUNC_CNTL = FUNC_9(VAR_31);
 VAR_24->vMPLL_DQ_FUNC_CNTL_2 = FUNC_9(VAR_32);
 VAR_24->vMCLK_PWRMGT_CNTL = FUNC_9(VAR_33);
 VAR_24->vDLL_CNTL = FUNC_9(VAR_34);
 VAR_24->vMPLL_SS = FUNC_9(VAR_35);
 VAR_24->vMPLL_SS2 = FUNC_9(VAR_36);

 return 0;
}
