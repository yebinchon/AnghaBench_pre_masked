
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_power_state {int dummy; } ;
struct pp_hwmgr {int dummy; } ;
typedef enum amd_pp_task { ____Placeholder_amd_pp_task } amd_pp_task ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
typedef enum PP_StateUILabel { ____Placeholder_PP_StateUILabel } PP_StateUILabel ;






 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pp_hwmgr*,int,struct pp_power_state*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*,int,struct pp_power_state**) ;

int FUNC_6(struct pp_hwmgr *VAR_1, enum amd_pp_task VAR_2,
  enum amd_pm_state_type *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 switch (VAR_2) {
 case 130:
  VAR_4 = FUNC_0(VAR_1);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_3(VAR_1, 0, ((void*)0));
  break;
 case 129:
 {
  enum PP_StateUILabel VAR_5;
  struct pp_power_state *VAR_6 = ((void*)0);

  if (VAR_3 == ((void*)0)) {
   VAR_4 = -VAR_0;
   break;
  }

  VAR_5 = FUNC_2(*VAR_3);
  VAR_4 = FUNC_5(VAR_1, VAR_5, &VAR_6);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_3(VAR_1, 1, VAR_6);
  break;
 }
 case 131:
 case 128:
  VAR_4 = FUNC_3(VAR_1, 1, ((void*)0));
  break;
 default:
  break;
 }
 return VAR_4;
}
