
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_performance_level {int non_local_mem_freq; int non_local_mem_width; int core_clock; int memory_clock; int member_0; } ;
struct smu_context {int dummy; } ;
struct smu_clock_info {int min_bus_bandwidth; int min_eng_clk; int min_mem_clk; } ;
typedef enum smu_perf_level_designation { ____Placeholder_smu_perf_level_designation } smu_perf_level_designation ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smu_context*,int,struct smu_performance_level*) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_2,
         struct smu_clock_info *VAR_3,
         enum smu_perf_level_designation VAR_4)
{
 int VAR_5;
 struct smu_performance_level VAR_6 = {0};

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_1, &VAR_6);
 if (VAR_5)
  return -VAR_0;

 VAR_3->min_mem_clk = VAR_6.memory_clock;
 VAR_3->min_eng_clk = VAR_6.core_clock;
 VAR_3->min_bus_bandwidth = VAR_6.non_local_mem_freq * VAR_6.non_local_mem_width;

 VAR_5 = FUNC_0(VAR_2, VAR_4, &VAR_6);
 if (VAR_5)
  return -VAR_0;

 VAR_3->min_mem_clk = VAR_6.memory_clock;
 VAR_3->min_eng_clk = VAR_6.core_clock;
 VAR_3->min_bus_bandwidth = VAR_6.non_local_mem_freq * VAR_6.non_local_mem_width;

 return 0;
}
