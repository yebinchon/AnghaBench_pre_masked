
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cc6_setting_changed; int cpu_cc6_disable; int cpu_pstate_disable; scalar_t__ cpu_pstate_separation_time; } ;
struct smu8_hwmgr {TYPE_1__ cc6_settings; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;



__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct smu8_hwmgr *VAR_1 = VAR_0->backend;

 VAR_1->cc6_settings.cc6_setting_changed = 0;
 VAR_1->cc6_settings.cpu_pstate_separation_time = 0;
 VAR_1->cc6_settings.cpu_cc6_disable = 0;
 VAR_1->cc6_settings.cpu_pstate_disable = 0;
}
