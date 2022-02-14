
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vega20_single_dpm_table {int count; TYPE_6__* dpm_levels; } ;
struct TYPE_11__ {int count; TYPE_4__* entries; } ;
struct TYPE_7__ {struct vega20_single_dpm_table mem_table; } ;
struct vega20_hwmgr {TYPE_5__ mclk_latency_table; TYPE_2__* smu_features; TYPE_1__ dpm_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_clock_levels_with_latency {int num_levels; TYPE_3__* data; } ;
struct TYPE_12__ {int value; } ;
struct TYPE_10__ {int frequency; int latency; } ;
struct TYPE_9__ {int clocks_in_khz; int latency_in_us; } ;
struct TYPE_8__ {int enabled; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2,
  struct pp_clock_levels_with_latency *VAR_3)
{
 struct vega20_hwmgr *VAR_4 = (struct vega20_hwmgr *)(VAR_2->backend);
 struct vega20_single_dpm_table *VAR_5 = &(VAR_4->dpm_table.mem_table);
 int VAR_6, VAR_7;

 if (!VAR_4->smu_features[VAR_0].enabled)
  return -1;

 VAR_7 = (VAR_5->count > VAR_1) ? VAR_1 : VAR_5->count;
 VAR_3->num_levels = VAR_4->mclk_latency_table.count = VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_3->data[VAR_6].clocks_in_khz =
   VAR_4->mclk_latency_table.entries[VAR_6].frequency =
   VAR_5->dpm_levels[VAR_6].value * 1000;
  VAR_3->data[VAR_6].latency_in_us =
   VAR_4->mclk_latency_table.entries[VAR_6].latency =
   FUNC_0(VAR_2, VAR_5->dpm_levels[VAR_6].value);
 }

 return 0;
}
