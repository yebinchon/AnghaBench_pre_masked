
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int sclk_dpm_enable_mask; } ;
struct smu7_hwmgr {TYPE_1__ dpm_level_enable_mask; } ;
struct pp_hwmgr {int power_profile_mode; scalar_t__ backend; } ;
typedef enum PP_SMC_POWER_PROFILE { ____Placeholder_PP_SMC_POWER_PROFILE } PP_SMC_POWER_PROFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_2,
     enum PP_SMC_POWER_PROFILE VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_2->backend);
 uint32_t VAR_5, VAR_6;

 if (VAR_3 == VAR_1) {
  if (VAR_4->dpm_level_enable_mask.sclk_dpm_enable_mask) {
   VAR_6 = 0;
   VAR_5 = VAR_4->dpm_level_enable_mask.sclk_dpm_enable_mask;
   while (VAR_5 >>= 1)
    VAR_6++;
   if (VAR_6 > 0)
    FUNC_0(VAR_2, VAR_0, 3 << (VAR_6-1));
  }
 } else if (VAR_2->power_profile_mode == VAR_1) {
  FUNC_0(VAR_2, VAR_0, VAR_4->dpm_level_enable_mask.sclk_dpm_enable_mask);
 }
}
