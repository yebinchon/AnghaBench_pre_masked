
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smu10_hwmgr {scalar_t__ separation_time; int cc6_disable; int pstate_disable; int cc6_setting_changed; } ;
struct pp_hwmgr {scalar_t__ backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0, uint32_t VAR_1,
   bool VAR_2, bool VAR_3, bool VAR_4)
{
 struct smu10_hwmgr *VAR_5 = (struct smu10_hwmgr *)(VAR_0->backend);

 if (VAR_1 != VAR_5->separation_time ||
   VAR_2 != VAR_5->cc6_disable ||
   VAR_3 != VAR_5->pstate_disable) {
  VAR_5->separation_time = VAR_1;
  VAR_5->cc6_disable = VAR_2;
  VAR_5->pstate_disable = VAR_3;
  VAR_5->cc6_setting_changed = 1;
 }
 return 0;
}
