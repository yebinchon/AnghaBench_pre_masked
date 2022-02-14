
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pcie_dpm_enable_mask; scalar_t__ mclk_dpm_enable_mask; scalar_t__ sclk_dpm_enable_mask; } ;
struct ci_power_info {TYPE_1__ dpm_level_enable_mask; int pcie_dpm_key_disabled; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
typedef scalar_t__ PPSMC_Result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct radeon_device*) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_1(VAR_5);
 PPSMC_Result VAR_7;

 FUNC_0(VAR_5);

 if (!VAR_6->sclk_dpm_key_disabled) {
  if (VAR_6->dpm_level_enable_mask.sclk_dpm_enable_mask) {
   VAR_7 = FUNC_2(VAR_5,
           VAR_3,
           VAR_6->dpm_level_enable_mask.sclk_dpm_enable_mask);
   if (VAR_7 != VAR_4)
    return -VAR_0;
  }
 }

 if (!VAR_6->mclk_dpm_key_disabled) {
  if (VAR_6->dpm_level_enable_mask.mclk_dpm_enable_mask) {
   VAR_7 = FUNC_2(VAR_5,
           VAR_1,
           VAR_6->dpm_level_enable_mask.mclk_dpm_enable_mask);
   if (VAR_7 != VAR_4)
    return -VAR_0;
  }
 }
 return 0;
}
