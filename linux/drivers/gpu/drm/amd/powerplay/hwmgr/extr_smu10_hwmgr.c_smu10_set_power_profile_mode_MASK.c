
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pp_hwmgr {long power_profile_mode; int gfxoff_state_changed_by_workload; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (long) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (struct pp_hwmgr*,int) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_3, long *VAR_4, uint32_t VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (VAR_4[VAR_5] > VAR_2) {
  FUNC_1("Invalid power profile mode %ld\n", VAR_4[VAR_5]);
  return -VAR_0;
 }
 if (VAR_3->power_profile_mode == VAR_4[VAR_5])
  return 0;


 VAR_6 =
  FUNC_0(VAR_4[VAR_5]);
 if (VAR_6 &&
     FUNC_3(VAR_3) &&
     !VAR_3->gfxoff_state_changed_by_workload) {
  FUNC_2(VAR_3, 0);
  VAR_3->gfxoff_state_changed_by_workload = 1;
 }
 VAR_7 = FUNC_4(VAR_3, VAR_1,
      1 << VAR_6);
 if (!VAR_7)
  VAR_3->power_profile_mode = VAR_4[VAR_5];
 if (VAR_6 && VAR_3->gfxoff_state_changed_by_workload) {
  FUNC_2(VAR_3, 1);
  VAR_3->gfxoff_state_changed_by_workload = 0;
 }

 return 0;
}
