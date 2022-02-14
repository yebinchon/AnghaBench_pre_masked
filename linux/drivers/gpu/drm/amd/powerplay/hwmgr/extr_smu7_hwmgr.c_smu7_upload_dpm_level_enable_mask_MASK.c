
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mclk_dpm_enable_mask; scalar_t__ sclk_dpm_enable_mask; } ;
struct smu7_hwmgr {TYPE_1__ dpm_level_enable_mask; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3)
{
 struct smu7_hwmgr *VAR_4 = (struct smu7_hwmgr *)(VAR_3->backend);

 if (VAR_3->pp_table_version == VAR_2)
  FUNC_0(VAR_3);


 if (!VAR_4->sclk_dpm_key_disabled) {
  if (VAR_4->dpm_level_enable_mask.sclk_dpm_enable_mask)
   FUNC_1(VAR_3,
     VAR_1,
     VAR_4->dpm_level_enable_mask.sclk_dpm_enable_mask);
 }

 if (!VAR_4->mclk_dpm_key_disabled) {
  if (VAR_4->dpm_level_enable_mask.mclk_dpm_enable_mask)
   FUNC_1(VAR_3,
     VAR_0,
     VAR_4->dpm_level_enable_mask.mclk_dpm_enable_mask);
 }

 return 0;
}
