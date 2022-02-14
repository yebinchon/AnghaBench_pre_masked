
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*,int,int*,int*,int*) ;
 int FUNC_4 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_2,
    enum amd_dpm_forced_level VAR_3)
{
 int VAR_4 = 0;
 uint32_t VAR_5 = 0;
 uint32_t VAR_6 = 0;
 uint32_t VAR_7 = 0;

 switch (VAR_3) {
 case 135:
  VAR_4 = FUNC_1(VAR_2);
  break;
 case 134:
  VAR_4 = FUNC_2(VAR_2);
  break;
 case 136:
  VAR_4 = FUNC_4(VAR_2);
  break;
 case 128:
 case 130:
 case 131:
 case 129:
  VAR_4 = FUNC_3(VAR_2, VAR_3, &VAR_5, &VAR_6, &VAR_7);
  if (VAR_4)
   return VAR_4;
  FUNC_0(VAR_2, VAR_1, 1 << VAR_5);
  FUNC_0(VAR_2, VAR_0, 1 << VAR_6);
  break;
 case 133:
 case 132:
 default:
  break;
 }

 return VAR_4;
}
