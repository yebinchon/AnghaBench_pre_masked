
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {TYPE_2__* vdd_dep_on_fclk; } ;
struct smu10_hwmgr {int gfx_max_freq_limit; TYPE_3__ clock_vol_info; int gfx_min_freq_limit; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct pp_hw_power_state {int dummy; } ;
struct TYPE_9__ {scalar_t__ nonLocalMemoryWidth; scalar_t__ nonLocalMemoryFreq; int coreClock; int memory_clock; } ;
struct TYPE_7__ {int count; TYPE_1__* entries; } ;
struct TYPE_6__ {int clk; } ;
typedef int PHM_PerformanceLevelDesignation ;
typedef TYPE_4__ PHM_PerformanceLevel ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1, const struct pp_hw_power_state *VAR_2,
    PHM_PerformanceLevelDesignation VAR_3, uint32_t VAR_4,
    PHM_PerformanceLevel *VAR_5)
{
 struct smu10_hwmgr *VAR_6;

 if (VAR_5 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_6 = (struct smu10_hwmgr *)(VAR_1->backend);

 if (VAR_4 == 0) {
  VAR_5->memory_clock = VAR_6->clock_vol_info.vdd_dep_on_fclk->entries[0].clk;
  VAR_5->coreClock = VAR_6->gfx_min_freq_limit;
 } else {
  VAR_5->memory_clock = VAR_6->clock_vol_info.vdd_dep_on_fclk->entries[
   VAR_6->clock_vol_info.vdd_dep_on_fclk->count - 1].clk;
  VAR_5->coreClock = VAR_6->gfx_max_freq_limit;
 }

 VAR_5->nonLocalMemoryFreq = 0;
 VAR_5->nonLocalMemoryWidth = 0;

 return 0;
}
