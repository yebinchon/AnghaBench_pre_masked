
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu8_power_state {int level; int * levels; scalar_t__ bapm_flags; scalar_t__ nbps_flags; } ;
struct smu8_hwmgr {int boot_power_level; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;
struct pp_hw_power_state {int dummy; } ;


 struct smu8_power_state* FUNC_0 (struct pp_hw_power_state*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_0,
     struct pp_hw_power_state *VAR_1)
{
 struct smu8_hwmgr *VAR_2 = VAR_0->backend;
 struct smu8_power_state *VAR_3 = FUNC_0(VAR_1);

 VAR_3->level = 1;
 VAR_3->nbps_flags = 0;
 VAR_3->bapm_flags = 0;
 VAR_3->levels[0] = VAR_2->boot_power_level;

 return 0;
}
