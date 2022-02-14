
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
struct pp_clock_levels_with_latency {int dummy; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;






 int FUNC_0 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;
 int FUNC_2 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;
 int FUNC_3 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_0,
  enum amd_pp_clock_type VAR_1,
  struct pp_clock_levels_with_latency *VAR_2)
{
 switch (VAR_1) {
 case 128:
  FUNC_2(VAR_0, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_0, VAR_2);
  break;
 case 131:
  FUNC_0(VAR_0, VAR_2);
  break;
 case 129:
  FUNC_3(VAR_0, VAR_2);
  break;
 default:
  return -1;
 }

 return 0;
}
