
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
struct pp_clock_levels_with_latency {int dummy; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;


 int VAR_0 ;




 int FUNC_0 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;
 int FUNC_1 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;
 int FUNC_2 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;
 int FUNC_3 (struct pp_hwmgr*,struct pp_clock_levels_with_latency*) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_1,
  enum amd_pp_clock_type VAR_2,
  struct pp_clock_levels_with_latency *VAR_3)
{
 int VAR_4;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_1(VAR_1, VAR_3);
  break;
 case 131:
  VAR_4 = FUNC_0(VAR_1, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_3(VAR_1, VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4;
}
