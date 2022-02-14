
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int cc6_setting_changed; int cpu_pstate_separation_time; scalar_t__ cpu_pstate_disable; scalar_t__ cpu_cc6_disable; } ;
struct smu8_hwmgr {TYPE_1__ cc6_settings; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_5)
{
 struct smu8_hwmgr *VAR_6 = VAR_5->backend;
 uint32_t VAR_7 = 0;

 if (VAR_6->cc6_settings.cc6_setting_changed) {

  VAR_6->cc6_settings.cc6_setting_changed = 0;

  FUNC_1(&VAR_6->cc6_settings);

  VAR_7 |= (VAR_6->cc6_settings.cpu_pstate_separation_time
   & VAR_3)
   << VAR_4;

  VAR_7 |= (VAR_6->cc6_settings.cpu_cc6_disable ? 0x1 : 0x0)
   << VAR_1;

  VAR_7 |= (VAR_6->cc6_settings.cpu_pstate_disable ? 0x1 : 0x0)
   << VAR_2;

  FUNC_0("SetDisplaySizePowerParams data: 0x%X\n",
   VAR_7);

  FUNC_2(VAR_5,
      VAR_0,
      VAR_7);
 }

 return 0;
}
