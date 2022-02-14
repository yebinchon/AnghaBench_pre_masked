
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int mutex; scalar_t__ support_power_containment; int adev; } ;
struct smu_clock_info {int min_eng_clk; int max_eng_clk; int max_bus_bandwidth; int min_bus_bandwidth; int max_mem_clk; int min_mem_clk; } ;
struct amd_pp_simple_clock_info {scalar_t__ level; int member_0; } ;
struct amd_pp_clock_info {scalar_t__ max_clocks_state; int min_engine_clock_in_sr; int max_engine_clock_in_sr; int max_bus_bandwidth; int min_bus_bandwidth; int max_memory_clock; int min_memory_clock; int max_engine_clock; int min_engine_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct smu_context*,struct smu_clock_info*,int ) ;
 int FUNC_5 (struct smu_context*,struct smu_clock_info*) ;
 int FUNC_6 (struct smu_context*,struct amd_pp_simple_clock_info*) ;

int FUNC_7(struct smu_context *VAR_4,
      struct amd_pp_clock_info *VAR_5)
{
 struct amd_pp_simple_clock_info VAR_6 = {0};
 struct smu_clock_info VAR_7;
 int VAR_8 = 0;

 if (!FUNC_0(VAR_4->adev))
  return -VAR_0;

 FUNC_1(&VAR_4->mutex);

 FUNC_6(VAR_4, &VAR_6);

 if (VAR_4->support_power_containment)
  VAR_8 = FUNC_4(VAR_4, &VAR_7,
      VAR_2);
 else
  VAR_8 = FUNC_4(VAR_4, &VAR_7, VAR_1);

 if (VAR_8) {
  FUNC_3("Error in smu_get_clock_info\n");
  goto failed;
 }

 VAR_5->min_engine_clock = VAR_7.min_eng_clk;
 VAR_5->max_engine_clock = VAR_7.max_eng_clk;
 VAR_5->min_memory_clock = VAR_7.min_mem_clk;
 VAR_5->max_memory_clock = VAR_7.max_mem_clk;
 VAR_5->min_bus_bandwidth = VAR_7.min_bus_bandwidth;
 VAR_5->max_bus_bandwidth = VAR_7.max_bus_bandwidth;
 VAR_5->max_engine_clock_in_sr = VAR_7.max_eng_clk;
 VAR_5->min_engine_clock_in_sr = VAR_7.min_eng_clk;

        if (VAR_6.level == 0)
                VAR_5->max_clocks_state = VAR_3;
        else
                VAR_5->max_clocks_state = VAR_6.level;

        if (!FUNC_5(VAR_4, &VAR_7)) {
                VAR_5->max_engine_clock_in_sr = VAR_7.max_eng_clk;
                VAR_5->min_engine_clock_in_sr = VAR_7.min_eng_clk;
        }

failed:
 FUNC_2(&VAR_4->mutex);
 return VAR_8;
}
