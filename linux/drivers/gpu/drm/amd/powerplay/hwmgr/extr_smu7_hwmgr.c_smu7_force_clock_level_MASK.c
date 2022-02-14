
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ sclk_dpm_enable_mask; scalar_t__ mclk_dpm_enable_mask; scalar_t__ pcie_dpm_enable_mask; } ;
struct smu7_hwmgr {int pcie_dpm_key_disabled; TYPE_1__ dpm_level_enable_mask; int mclk_dpm_key_disabled; int sclk_dpm_key_disabled; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef enum pp_clock_type { ____Placeholder_pp_clock_type } pp_clock_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 int FUNC_3 (struct pp_hwmgr*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_5,
  enum pp_clock_type VAR_6, uint32_t VAR_7)
{
 struct smu7_hwmgr *VAR_8 = (struct smu7_hwmgr *)(VAR_5->backend);

 if (VAR_7 == 0)
  return -VAR_0;

 switch (VAR_6) {
 case 128:
  if (!VAR_8->sclk_dpm_key_disabled)
   FUNC_3(VAR_5,
     VAR_4,
     VAR_8->dpm_level_enable_mask.sclk_dpm_enable_mask & VAR_7);
  break;
 case 130:
  if (!VAR_8->mclk_dpm_key_disabled)
   FUNC_3(VAR_5,
     VAR_1,
     VAR_8->dpm_level_enable_mask.mclk_dpm_enable_mask & VAR_7);
  break;
 case 129:
 {
  uint32_t VAR_9 = VAR_7 & VAR_8->dpm_level_enable_mask.pcie_dpm_enable_mask;

  if (!VAR_8->pcie_dpm_key_disabled) {
   if (FUNC_1(VAR_9) != FUNC_0(VAR_9))
    FUNC_2(VAR_5, VAR_3);
   else
    FUNC_3(VAR_5,
     VAR_2,
     FUNC_1(VAR_9) - 1);
  }
  break;
 }
 default:
  break;
 }

 return 0;
}
