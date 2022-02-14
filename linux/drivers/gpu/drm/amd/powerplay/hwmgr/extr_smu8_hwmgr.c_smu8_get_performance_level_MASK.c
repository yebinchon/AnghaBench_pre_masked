
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct smu8_power_state {int level; TYPE_2__* levels; } ;
struct TYPE_5__ {int * nbp_memory_clock; } ;
struct smu8_hwmgr {scalar_t__ dce_slow_sclk_threshold; TYPE_1__ sys_info; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;
struct pp_hw_power_state {int dummy; } ;
struct TYPE_7__ {scalar_t__ coreClock; int vddc; scalar_t__ nonLocalMemoryWidth; scalar_t__ nonLocalMemoryFreq; int memory_clock; } ;
struct TYPE_6__ {scalar_t__ engineClock; int vddcIndex; } ;
typedef scalar_t__ PHM_PerformanceLevelDesignation ;
typedef TYPE_3__ PHM_PerformanceLevel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct smu8_power_state* FUNC_0 (struct pp_hw_power_state const*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3, const struct pp_hw_power_state *VAR_4,
    PHM_PerformanceLevelDesignation VAR_5, uint32_t VAR_6,
    PHM_PerformanceLevel *VAR_7)
{
 const struct smu8_power_state *VAR_8;
 struct smu8_hwmgr *VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;

 if (VAR_7 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_9 = VAR_3->backend;
 VAR_8 = FUNC_0(VAR_4);

 VAR_10 = VAR_6 > VAR_8->level - 1 ? VAR_8->level - 1 : VAR_6;
 VAR_7->coreClock = VAR_8->levels[VAR_10].engineClock;

 if (VAR_5 == VAR_1) {
  for (VAR_11 = 1; VAR_11 < VAR_8->level; VAR_11++) {
   if (VAR_8->levels[VAR_11].engineClock > VAR_9->dce_slow_sclk_threshold) {
    VAR_7->coreClock = VAR_8->levels[VAR_11].engineClock;
    break;
   }
  }
 }

 if (VAR_10 == 0)
  VAR_7->memory_clock = VAR_9->sys_info.nbp_memory_clock[VAR_2 - 1];
 else
  VAR_7->memory_clock = VAR_9->sys_info.nbp_memory_clock[0];

 VAR_7->vddc = (FUNC_1(VAR_3, VAR_8->levels[VAR_10].vddcIndex) + 2) / 4;
 VAR_7->nonLocalMemoryFreq = 0;
 VAR_7->nonLocalMemoryWidth = 0;

 return 0;
}
