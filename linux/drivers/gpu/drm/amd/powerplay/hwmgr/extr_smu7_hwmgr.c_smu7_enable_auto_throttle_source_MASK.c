
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int active_auto_throttle_sources; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
typedef int PHM_AutoThrottleSource ;


 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
  PHM_AutoThrottleSource VAR_1)
{
 struct smu7_hwmgr *VAR_2 = (struct smu7_hwmgr *)(VAR_0->backend);

 if (!(VAR_2->active_auto_throttle_sources & (1 << VAR_1))) {
  VAR_2->active_auto_throttle_sources |= 1 << VAR_1;
  FUNC_0(VAR_0, VAR_2->active_auto_throttle_sources);
 }
 return 0;
}
