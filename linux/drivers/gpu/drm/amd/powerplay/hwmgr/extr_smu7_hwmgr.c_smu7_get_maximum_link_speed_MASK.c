
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int uint16_t ;
struct smu7_power_state {size_t performance_level_count; TYPE_1__* performance_levels; } ;
struct TYPE_10__ {size_t count; TYPE_4__* dpm_levels; } ;
struct TYPE_8__ {size_t count; TYPE_2__* dpm_levels; } ;
struct smu7_dpm_table {TYPE_5__ pcie_speed_table; TYPE_3__ sclk_table; } ;
struct smu7_hwmgr {struct smu7_dpm_table dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_7__ {size_t value; } ;
struct TYPE_6__ {size_t engine_clock; } ;



__attribute__((used)) static uint16_t FUNC_0(struct pp_hwmgr *VAR_0,
  const struct smu7_power_state *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3, VAR_4 = 0;
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_0->backend);
 struct smu7_dpm_table *VAR_6 = &VAR_5->dpm_table;

 for (VAR_2 = 0; VAR_2 < VAR_1->performance_level_count; VAR_2++) {
  VAR_3 = VAR_1->performance_levels[VAR_2].engine_clock;
  if (VAR_4 < VAR_3)
   VAR_4 = VAR_3;
 }

 for (VAR_2 = 0; VAR_2 < VAR_6->sclk_table.count; VAR_2++) {
  if (VAR_6->sclk_table.dpm_levels[VAR_2].value == VAR_4)
   return (uint16_t) ((VAR_2 >= VAR_6->pcie_speed_table.count) ?
     VAR_6->pcie_speed_table.dpm_levels
     [VAR_6->pcie_speed_table.count - 1].value :
     VAR_6->pcie_speed_table.dpm_levels[VAR_2].value);
 }

 return 0;
}
