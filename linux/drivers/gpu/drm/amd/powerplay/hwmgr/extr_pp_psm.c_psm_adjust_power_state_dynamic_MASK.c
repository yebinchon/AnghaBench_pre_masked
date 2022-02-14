
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_power_state {int dummy; } ;
struct pp_hwmgr {scalar_t__ request_dpm_level; scalar_t__ dpm_level; long* workload_setting; long power_profile_mode; TYPE_1__* hwmgr_func; int workload_mask; scalar_t__ ps; } ;
struct TYPE_2__ {int (* set_power_profile_mode ) (struct pp_hwmgr*,long*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,scalar_t__) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*,struct pp_power_state*) ;
 int FUNC_6 (struct pp_hwmgr*,long*,int ) ;

int FUNC_7(struct pp_hwmgr *VAR_2, bool VAR_3,
      struct pp_power_state *VAR_4)
{
 uint32_t VAR_5;
 long VAR_6;

 if (!VAR_3)
  FUNC_2(VAR_2);

 if (VAR_2->ps)
  FUNC_5(VAR_2, VAR_4);
 else




  FUNC_1(VAR_2);

 if (!VAR_3)
  FUNC_4(VAR_2);

 if (!FUNC_3(VAR_2, VAR_2->request_dpm_level))
  VAR_2->dpm_level = VAR_2->request_dpm_level;

 if (VAR_2->dpm_level != VAR_0) {
  VAR_5 = FUNC_0(VAR_2->workload_mask);
  VAR_5 = VAR_5 > 0 && VAR_5 <= VAR_1 ? VAR_5 - 1 : 0;
  VAR_6 = VAR_2->workload_setting[VAR_5];

  if (VAR_2->power_profile_mode != VAR_6 && VAR_2->hwmgr_func->set_power_profile_mode)
   VAR_2->hwmgr_func->set_power_profile_mode(VAR_2, &VAR_6, 0);
 }

 return 0;
}
