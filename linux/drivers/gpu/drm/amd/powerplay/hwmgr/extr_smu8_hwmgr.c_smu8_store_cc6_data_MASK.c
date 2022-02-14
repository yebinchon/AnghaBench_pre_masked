
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ cpu_pstate_separation_time; int cpu_cc6_disable; int cpu_pstate_disable; int nb_pstate_switch_disable; int cc6_setting_changed; } ;
struct smu8_hwmgr {TYPE_1__ cc6_settings; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0, uint32_t VAR_1,
   bool VAR_2, bool VAR_3, bool VAR_4)
{
 struct smu8_hwmgr *VAR_5 = VAR_0->backend;

 if (VAR_1 !=
     VAR_5->cc6_settings.cpu_pstate_separation_time ||
     VAR_2 != VAR_5->cc6_settings.cpu_cc6_disable ||
     VAR_3 != VAR_5->cc6_settings.cpu_pstate_disable ||
     VAR_4 != VAR_5->cc6_settings.nb_pstate_switch_disable) {

  VAR_5->cc6_settings.cc6_setting_changed = 1;

  VAR_5->cc6_settings.cpu_pstate_separation_time =
   VAR_1;
  VAR_5->cc6_settings.cpu_cc6_disable =
   VAR_2;
  VAR_5->cc6_settings.cpu_pstate_disable =
   VAR_3;
  VAR_5->cc6_settings.nb_pstate_switch_disable =
   VAR_4;

 }

 return 0;
}
