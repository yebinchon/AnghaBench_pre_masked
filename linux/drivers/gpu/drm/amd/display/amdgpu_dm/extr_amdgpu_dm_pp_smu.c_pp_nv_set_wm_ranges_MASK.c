
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_context {int funcs; } ;
struct pp_smu_wm_range_sets {size_t num_reader_wm_sets; size_t num_writer_wm_sets; TYPE_2__* writer_wm_sets; TYPE_1__* reader_wm_sets; } ;
struct pp_smu {struct dc_context* dm; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {size_t num_wm_dmif_sets; size_t num_wm_mcif_sets; struct dm_pp_clock_range_for_mcif_wm_set_soc15* wm_mcif_clocks_ranges; struct dm_pp_clock_range_for_dmif_wm_set_soc15* wm_dmif_clocks_ranges; } ;
struct dm_pp_clock_range_for_mcif_wm_set_soc15 {int wm_set_id; int wm_max_socclk_clk_in_khz; int wm_min_socclk_clk_in_khz; int wm_max_mem_clk_in_khz; int wm_min_mem_clk_in_khz; } ;
struct dm_pp_clock_range_for_dmif_wm_set_soc15 {int wm_set_id; int wm_max_dcfclk_clk_in_khz; int wm_min_dcfclk_clk_in_khz; int wm_max_mem_clk_in_khz; int wm_min_mem_clk_in_khz; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct amdgpu_device {struct smu_context smu; } ;
typedef size_t int32_t ;
typedef enum pp_smu_status { ____Placeholder_pp_smu_status } pp_smu_status ;
struct TYPE_4__ {int wm_inst; int max_fill_clk_mhz; int min_fill_clk_mhz; int max_drain_clk_mhz; int min_drain_clk_mhz; } ;
struct TYPE_3__ {int wm_inst; int max_drain_clk_mhz; int min_drain_clk_mhz; int max_fill_clk_mhz; int min_fill_clk_mhz; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (struct smu_context*,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;

enum pp_smu_status FUNC_1(struct pp_smu *VAR_3,
  struct pp_smu_wm_range_sets *VAR_4)
{
 const struct dc_context *VAR_5 = VAR_3->dm;
 struct amdgpu_device *VAR_6 = VAR_5->driver_context;
 struct smu_context *VAR_7 = &VAR_6->smu;
 struct dm_pp_wm_sets_with_clock_ranges_soc15 VAR_8;
 struct dm_pp_clock_range_for_dmif_wm_set_soc15 *VAR_9 =
   VAR_8.wm_dmif_clocks_ranges;
 struct dm_pp_clock_range_for_mcif_wm_set_soc15 *VAR_10 =
   VAR_8.wm_mcif_clocks_ranges;
 int32_t VAR_11;

 VAR_8.num_wm_dmif_sets = VAR_4->num_reader_wm_sets;
 VAR_8.num_wm_mcif_sets = VAR_4->num_writer_wm_sets;

 for (VAR_11 = 0; VAR_11 < VAR_8.num_wm_dmif_sets; VAR_11++) {
  if (VAR_4->reader_wm_sets[VAR_11].wm_inst > 3)
   VAR_9[VAR_11].wm_set_id = VAR_2;
  else
   VAR_9[VAR_11].wm_set_id =
     VAR_4->reader_wm_sets[VAR_11].wm_inst;
  VAR_9[VAR_11].wm_max_dcfclk_clk_in_khz =
   VAR_4->reader_wm_sets[VAR_11].max_drain_clk_mhz * 1000;
  VAR_9[VAR_11].wm_min_dcfclk_clk_in_khz =
   VAR_4->reader_wm_sets[VAR_11].min_drain_clk_mhz * 1000;
  VAR_9[VAR_11].wm_max_mem_clk_in_khz =
   VAR_4->reader_wm_sets[VAR_11].max_fill_clk_mhz * 1000;
  VAR_9[VAR_11].wm_min_mem_clk_in_khz =
   VAR_4->reader_wm_sets[VAR_11].min_fill_clk_mhz * 1000;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8.num_wm_mcif_sets; VAR_11++) {
  if (VAR_4->writer_wm_sets[VAR_11].wm_inst > 3)
   VAR_10[VAR_11].wm_set_id = VAR_2;
  else
   VAR_10[VAR_11].wm_set_id =
     VAR_4->writer_wm_sets[VAR_11].wm_inst;
  VAR_10[VAR_11].wm_max_socclk_clk_in_khz =
   VAR_4->writer_wm_sets[VAR_11].max_fill_clk_mhz * 1000;
  VAR_10[VAR_11].wm_min_socclk_clk_in_khz =
   VAR_4->writer_wm_sets[VAR_11].min_fill_clk_mhz * 1000;
  VAR_10[VAR_11].wm_max_mem_clk_in_khz =
   VAR_4->writer_wm_sets[VAR_11].max_drain_clk_mhz * 1000;
  VAR_10[VAR_11].wm_min_mem_clk_in_khz =
   VAR_4->writer_wm_sets[VAR_11].min_drain_clk_mhz * 1000;
 }

 if (!VAR_7->funcs)
  return VAR_1;




 if (FUNC_0(&VAR_6->smu,
   &VAR_8))
  return VAR_1;

 return VAR_0;
}
