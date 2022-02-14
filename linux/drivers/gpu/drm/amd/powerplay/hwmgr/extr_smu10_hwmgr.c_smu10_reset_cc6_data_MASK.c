
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu10_hwmgr {int cc6_disable; int pstate_disable; int cc6_setting_changed; scalar_t__ separation_time; } ;
struct pp_hwmgr {scalar_t__ backend; } ;



__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_0)
{
 struct smu10_hwmgr *VAR_1 = (struct smu10_hwmgr *)(VAR_0->backend);

 VAR_1->separation_time = 0;
 VAR_1->cc6_disable = 0;
 VAR_1->pstate_disable = 0;
 VAR_1->cc6_setting_changed = 0;

 return 0;
}
