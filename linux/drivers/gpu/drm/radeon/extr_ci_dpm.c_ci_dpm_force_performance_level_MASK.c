
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int forced_level; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct radeon_device {int usec_timeout; TYPE_3__ pm; } ;
struct TYPE_4__ {int pcie_dpm_enable_mask; int sclk_dpm_enable_mask; int mclk_dpm_enable_mask; } ;
struct ci_power_info {int pcie_dpm_key_disabled; TYPE_1__ dpm_level_enable_mask; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct radeon_device*,int) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int) ;
 struct ci_power_info* FUNC_5 (struct radeon_device*) ;
 scalar_t__ FUNC_6 (struct radeon_device*,int ) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (int) ;

int FUNC_9(struct radeon_device *VAR_14,
       enum radeon_dpm_forced_level VAR_15)
{
 struct ci_power_info *VAR_16 = FUNC_5(VAR_14);
 u32 VAR_17, VAR_18, VAR_19;
 int VAR_20;

 if (VAR_15 == VAR_10) {
  if ((!VAR_16->pcie_dpm_key_disabled) &&
      VAR_16->dpm_level_enable_mask.pcie_dpm_enable_mask) {
   VAR_18 = 0;
   VAR_17 = VAR_16->dpm_level_enable_mask.pcie_dpm_enable_mask;
   while (VAR_17 >>= 1)
    VAR_18++;
   if (VAR_18) {
    VAR_20 = FUNC_2(VAR_14, VAR_15);
    if (VAR_20)
     return VAR_20;
    for (VAR_19 = 0; VAR_19 < VAR_14->usec_timeout; VAR_19++) {
     VAR_17 = (FUNC_0(VAR_13) &
            VAR_2) >> VAR_3;
     if (VAR_17 == VAR_18)
      break;
     FUNC_8(1);
    }
   }
  }
  if ((!VAR_16->sclk_dpm_key_disabled) &&
      VAR_16->dpm_level_enable_mask.sclk_dpm_enable_mask) {
   VAR_18 = 0;
   VAR_17 = VAR_16->dpm_level_enable_mask.sclk_dpm_enable_mask;
   while (VAR_17 >>= 1)
    VAR_18++;
   if (VAR_18) {
    VAR_20 = FUNC_3(VAR_14, VAR_18);
    if (VAR_20)
     return VAR_20;
    for (VAR_19 = 0; VAR_19 < VAR_14->usec_timeout; VAR_19++) {
     VAR_17 = (FUNC_0(VAR_12) &
            VAR_4) >> VAR_5;
     if (VAR_17 == VAR_18)
      break;
     FUNC_8(1);
    }
   }
  }
  if ((!VAR_16->mclk_dpm_key_disabled) &&
      VAR_16->dpm_level_enable_mask.mclk_dpm_enable_mask) {
   VAR_18 = 0;
   VAR_17 = VAR_16->dpm_level_enable_mask.mclk_dpm_enable_mask;
   while (VAR_17 >>= 1)
    VAR_18++;
   if (VAR_18) {
    VAR_20 = FUNC_1(VAR_14, VAR_18);
    if (VAR_20)
     return VAR_20;
    for (VAR_19 = 0; VAR_19 < VAR_14->usec_timeout; VAR_19++) {
     VAR_17 = (FUNC_0(VAR_12) &
            VAR_0) >> VAR_1;
     if (VAR_17 == VAR_18)
      break;
     FUNC_8(1);
    }
   }
  }
 } else if (VAR_15 == VAR_11) {
  if ((!VAR_16->sclk_dpm_key_disabled) &&
      VAR_16->dpm_level_enable_mask.sclk_dpm_enable_mask) {
   VAR_18 = FUNC_4(VAR_14,
            VAR_16->dpm_level_enable_mask.sclk_dpm_enable_mask);
   VAR_20 = FUNC_3(VAR_14, VAR_18);
   if (VAR_20)
    return VAR_20;
   for (VAR_19 = 0; VAR_19 < VAR_14->usec_timeout; VAR_19++) {
    VAR_17 = (FUNC_0(VAR_12) &
           VAR_4) >> VAR_5;
    if (VAR_17 == VAR_18)
     break;
    FUNC_8(1);
   }
  }
  if ((!VAR_16->mclk_dpm_key_disabled) &&
      VAR_16->dpm_level_enable_mask.mclk_dpm_enable_mask) {
   VAR_18 = FUNC_4(VAR_14,
            VAR_16->dpm_level_enable_mask.mclk_dpm_enable_mask);
   VAR_20 = FUNC_1(VAR_14, VAR_18);
   if (VAR_20)
    return VAR_20;
   for (VAR_19 = 0; VAR_19 < VAR_14->usec_timeout; VAR_19++) {
    VAR_17 = (FUNC_0(VAR_12) &
           VAR_0) >> VAR_1;
    if (VAR_17 == VAR_18)
     break;
    FUNC_8(1);
   }
  }
  if ((!VAR_16->pcie_dpm_key_disabled) &&
      VAR_16->dpm_level_enable_mask.pcie_dpm_enable_mask) {
   VAR_18 = FUNC_4(VAR_14,
            VAR_16->dpm_level_enable_mask.pcie_dpm_enable_mask);
   VAR_20 = FUNC_2(VAR_14, VAR_18);
   if (VAR_20)
    return VAR_20;
   for (VAR_19 = 0; VAR_19 < VAR_14->usec_timeout; VAR_19++) {
    VAR_17 = (FUNC_0(VAR_13) &
           VAR_2) >> VAR_3;
    if (VAR_17 == VAR_18)
     break;
    FUNC_8(1);
   }
  }
 } else if (VAR_15 == VAR_9) {
  if (!VAR_16->pcie_dpm_key_disabled) {
   PPSMC_Result VAR_21;

   VAR_21 = FUNC_6(VAR_14,
       VAR_7);
   if (VAR_21 != VAR_8)
    return -VAR_6;
  }
  VAR_20 = FUNC_7(VAR_14);
  if (VAR_20)
   return VAR_20;
 }

 VAR_14->pm.dpm.forced_level = VAR_15;

 return 0;
}
