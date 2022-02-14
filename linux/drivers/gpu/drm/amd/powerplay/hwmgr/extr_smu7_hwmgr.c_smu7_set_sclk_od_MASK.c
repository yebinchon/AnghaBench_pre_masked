
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct smu7_single_dpm_table {int count; TYPE_3__* dpm_levels; } ;
struct smu7_power_state {int performance_level_count; TYPE_2__* performance_levels; } ;
struct TYPE_4__ {struct smu7_single_dpm_table sclk_table; } ;
struct smu7_hwmgr {TYPE_1__ golden_dpm_table; } ;
struct pp_power_state {int hardware; } ;
struct pp_hwmgr {struct pp_power_state* request_ps; scalar_t__ backend; } ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int engine_clock; } ;


 int VAR_0 ;
 struct smu7_power_state* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1, uint32_t VAR_2)
{
 struct smu7_hwmgr *VAR_3 = (struct smu7_hwmgr *)(VAR_1->backend);
 struct smu7_single_dpm_table *VAR_4 =
   &(VAR_3->golden_dpm_table.sclk_table);
 struct pp_power_state *VAR_5;
 struct smu7_power_state *VAR_6;

 if (VAR_2 > 20)
  VAR_2 = 20;

 VAR_5 = VAR_1->request_ps;

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_0(&VAR_5->hardware);

 VAR_6->performance_levels[VAR_6->performance_level_count - 1].engine_clock =
   VAR_4->dpm_levels[VAR_4->count - 1].value *
   VAR_2 / 100 +
   VAR_4->dpm_levels[VAR_4->count - 1].value;

 return 0;
}
