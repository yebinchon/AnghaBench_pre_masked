
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct vega12_single_dpm_table {scalar_t__ count; TYPE_3__* dpm_levels; } ;
struct TYPE_6__ {struct vega12_single_dpm_table dcef_table; } ;
struct vega12_hwmgr {TYPE_2__ dpm_table; TYPE_1__* smu_features; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_clock_levels_with_latency {int num_levels; TYPE_4__* data; } ;
struct TYPE_8__ {int clocks_in_khz; scalar_t__ latency_in_us; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_5__ {int enabled; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_2,
  struct pp_clock_levels_with_latency *VAR_3)
{
 struct vega12_hwmgr *VAR_4 = (struct vega12_hwmgr *)(VAR_2->backend);
 uint32_t VAR_5;
 int VAR_6;
 struct vega12_single_dpm_table *VAR_7;

 if (!VAR_4->smu_features[VAR_0].enabled)
  return -1;


 VAR_7 = &(VAR_4->dpm_table.dcef_table);
 VAR_5 = (VAR_7->count > VAR_1) ?
  VAR_1 : VAR_7->count;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_3->data[VAR_6].clocks_in_khz =
   VAR_7->dpm_levels[VAR_6].value * 1000;

  VAR_3->data[VAR_6].latency_in_us = 0;
 }

 VAR_3->num_levels = VAR_5;

 return 0;
}
