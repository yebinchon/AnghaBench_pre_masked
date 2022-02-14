
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
struct amd_pp_clocks {int dummy; } ;
typedef enum amd_pp_clock_type { ____Placeholder_amd_pp_clock_type } amd_pp_clock_type ;


 int VAR_0 ;


 int FUNC_0 (struct pp_hwmgr*,struct amd_pp_clocks*) ;
 int FUNC_1 (struct pp_hwmgr*,struct amd_pp_clocks*) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_1, enum amd_pp_clock_type VAR_2,
      struct amd_pp_clocks *VAR_3)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(VAR_1, VAR_3);
  break;
 case 129:
  FUNC_0(VAR_1, VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
