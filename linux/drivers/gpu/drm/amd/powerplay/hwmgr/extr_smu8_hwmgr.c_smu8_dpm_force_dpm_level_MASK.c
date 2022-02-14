
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
typedef enum amd_dpm_forced_level { ____Placeholder_amd_dpm_forced_level } amd_dpm_forced_level ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_0,
    enum amd_dpm_forced_level VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1) {
 case 134:
 case 129:
  VAR_2 = FUNC_0(VAR_0);
  break;
 case 133:
 case 130:
 case 128:
  VAR_2 = FUNC_1(VAR_0);
  break;
 case 135:
  VAR_2 = FUNC_2(VAR_0);
  break;
 case 132:
 case 131:
 default:
  break;
 }

 return VAR_2;
}
