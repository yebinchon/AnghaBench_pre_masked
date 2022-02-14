
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct vega10_power_state {int performance_level_count; TYPE_1__* performance_levels; } ;
struct vega10_hwmgr {int dummy; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct pp_hw_power_state {int dummy; } ;
struct TYPE_5__ {int memory_clock; int coreClock; } ;
struct TYPE_4__ {int mem_clock; int gfx_clock; } ;
typedef int PHM_PerformanceLevelDesignation ;
typedef TYPE_2__ PHM_PerformanceLevel ;


 int VAR_0 ;
 struct vega10_power_state* FUNC_0 (struct pp_hw_power_state const*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1, const struct pp_hw_power_state *VAR_2,
    PHM_PerformanceLevelDesignation VAR_3, uint32_t VAR_4,
    PHM_PerformanceLevel *VAR_5)
{
 const struct vega10_power_state *VAR_6;
 struct vega10_hwmgr *VAR_7;
 uint32_t VAR_8;

 if (VAR_5 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return -VAR_0;

 VAR_7 = VAR_1->backend;
 VAR_6 = FUNC_0(VAR_2);

 VAR_8 = VAR_4 > VAR_6->performance_level_count - 1 ?
   VAR_6->performance_level_count - 1 : VAR_4;

 VAR_5->coreClock = VAR_6->performance_levels[VAR_8].gfx_clock;
 VAR_5->memory_clock = VAR_6->performance_levels[VAR_8].mem_clock;

 return 0;
}
