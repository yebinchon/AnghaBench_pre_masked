
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
struct TYPE_2__ {int (* force_dpm_level ) (struct pp_hwmgr*,int) ;} ;


 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int) ;

int FUNC_2(struct pp_hwmgr *VAR_0, enum amd_dpm_forced_level VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_0);

 if (VAR_0->hwmgr_func->force_dpm_level != ((void*)0))
  VAR_2 = VAR_0->hwmgr_func->force_dpm_level(VAR_0, VAR_1);

 return VAR_2;
}
