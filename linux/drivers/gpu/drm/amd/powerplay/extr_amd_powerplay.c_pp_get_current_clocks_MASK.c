
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int platformCaps; } ;
struct pp_hwmgr {int smu_lock; TYPE_2__* current_ps; TYPE_1__ platform_descriptor; int pm_en; } ;
struct pp_clock_info {int min_eng_clk; int max_eng_clk; int max_bus_bandwidth; int min_bus_bandwidth; int max_mem_clk; int min_mem_clk; } ;
struct amd_pp_simple_clock_info {scalar_t__ level; int member_0; } ;
struct amd_pp_clock_info {scalar_t__ max_clocks_state; int min_engine_clock_in_sr; int max_engine_clock_in_sr; int max_bus_bandwidth; int min_bus_bandwidth; int max_memory_clock; int min_memory_clock; int max_engine_clock; int min_engine_clock; } ;
struct TYPE_4__ {int hardware; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct pp_hwmgr*,int *,struct pp_clock_info*,int ) ;
 scalar_t__ FUNC_4 (struct pp_hwmgr*,int *,struct pp_clock_info*) ;
 int FUNC_5 (struct pp_hwmgr*,struct amd_pp_simple_clock_info*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(void *VAR_5,
  struct amd_pp_clock_info *VAR_6)
{
 struct amd_pp_simple_clock_info VAR_7 = { 0 };
 struct pp_clock_info VAR_8;
 struct pp_hwmgr *VAR_9 = VAR_5;
 int VAR_10 = 0;

 if (!VAR_9 || !VAR_9->pm_en)
  return -VAR_0;

 FUNC_0(&VAR_9->smu_lock);

 FUNC_5(VAR_9, &VAR_7);

 if (FUNC_2(VAR_9->platform_descriptor.platformCaps,
     VAR_3))
  VAR_10 = FUNC_3(VAR_9, &VAR_9->current_ps->hardware,
     &VAR_8, VAR_2);
 else
  VAR_10 = FUNC_3(VAR_9, &VAR_9->current_ps->hardware,
     &VAR_8, VAR_1);

 if (VAR_10) {
  FUNC_6("Error in phm_get_clock_info \n");
  FUNC_1(&VAR_9->smu_lock);
  return -VAR_0;
 }

 VAR_6->min_engine_clock = VAR_8.min_eng_clk;
 VAR_6->max_engine_clock = VAR_8.max_eng_clk;
 VAR_6->min_memory_clock = VAR_8.min_mem_clk;
 VAR_6->max_memory_clock = VAR_8.max_mem_clk;
 VAR_6->min_bus_bandwidth = VAR_8.min_bus_bandwidth;
 VAR_6->max_bus_bandwidth = VAR_8.max_bus_bandwidth;

 VAR_6->max_engine_clock_in_sr = VAR_8.max_eng_clk;
 VAR_6->min_engine_clock_in_sr = VAR_8.min_eng_clk;

 if (VAR_7.level == 0)
  VAR_6->max_clocks_state = VAR_4;
 else
  VAR_6->max_clocks_state = VAR_7.level;

 if (0 == FUNC_4(VAR_9, &VAR_9->current_ps->hardware, &VAR_8)) {
  VAR_6->max_engine_clock_in_sr = VAR_8.max_eng_clk;
  VAR_6->min_engine_clock_in_sr = VAR_8.min_eng_clk;
 }
 FUNC_1(&VAR_9->smu_lock);
 return 0;
}
