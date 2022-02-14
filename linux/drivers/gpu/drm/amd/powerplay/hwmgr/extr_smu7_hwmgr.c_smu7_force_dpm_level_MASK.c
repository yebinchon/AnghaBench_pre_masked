
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {scalar_t__ pstate_sclk; int const dpm_level; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*,int,int*,int*,int*) ;
 int FUNC_6 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_7(struct pp_hwmgr *VAR_3,
    enum amd_dpm_forced_level VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;

 if (VAR_3->pstate_sclk == 0)
  FUNC_5(VAR_3, VAR_4, &VAR_6, &VAR_7, &VAR_8);

 switch (VAR_4) {
 case 135:
  VAR_5 = FUNC_3(VAR_3);
  break;
 case 134:
  VAR_5 = FUNC_4(VAR_3);
  break;
 case 136:
  VAR_5 = FUNC_6(VAR_3);
  break;
 case 128:
 case 130:
 case 131:
 case 129:
  VAR_5 = FUNC_5(VAR_3, VAR_4, &VAR_6, &VAR_7, &VAR_8);
  if (VAR_5)
   return VAR_5;
  FUNC_2(VAR_3, VAR_2, 1<<VAR_6);
  FUNC_2(VAR_3, VAR_0, 1<<VAR_7);
  FUNC_2(VAR_3, VAR_1, 1<<VAR_8);
  break;
 case 133:
 case 132:
 default:
  break;
 }

 if (!VAR_5) {
  if (VAR_4 == 129 && VAR_3->dpm_level != 129)
   FUNC_1(VAR_3, 100);
  else if (VAR_4 != 129 && VAR_3->dpm_level == 129)
   FUNC_0(VAR_3);
 }
 return VAR_5;
}
