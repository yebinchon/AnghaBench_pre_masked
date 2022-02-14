
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
 int VAR_3 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int,int*,int*,int*) ;
 int FUNC_4 (struct pp_hwmgr*,int ) ;
 int FUNC_5 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_4,
    enum amd_dpm_forced_level VAR_5)
{
 int VAR_6 = 0;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9 = 0;

 if (VAR_4->pstate_sclk == 0)
  FUNC_3(VAR_4, VAR_5, &VAR_7, &VAR_8, &VAR_9);

 switch (VAR_5) {
 case 135:
  VAR_6 = FUNC_1(VAR_4);
  break;
 case 134:
  VAR_6 = FUNC_2(VAR_4);
  break;
 case 136:
  VAR_6 = FUNC_5(VAR_4);
  break;
 case 128:
 case 130:
 case 131:
 case 129:
  VAR_6 = FUNC_3(VAR_4, VAR_5, &VAR_7, &VAR_8, &VAR_9);
  if (VAR_6)
   return VAR_6;
  FUNC_0(VAR_4, VAR_3, 1<<VAR_7);
  FUNC_0(VAR_4, VAR_2, 1<<VAR_8);
  break;
 case 133:
 case 132:
 default:
  break;
 }

 if (!VAR_6) {
  if (VAR_5 == 129 && VAR_4->dpm_level != 129)
   FUNC_4(VAR_4, VAR_1);
  else if (VAR_5 != 129 && VAR_4->dpm_level == 129)
   FUNC_4(VAR_4, VAR_0);
 }

 return VAR_6;
}
