
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pp_smu_wm_range_sets {size_t num_reader_wm_sets; size_t num_writer_wm_sets; TYPE_3__* writer_wm_sets; TYPE_2__* reader_wm_sets; } ;
struct pp_smu {struct dc_context* dm; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {size_t num_wm_dmif_sets; size_t num_wm_mcif_sets; struct dm_pp_clock_range_for_mcif_wm_set_soc15* wm_mcif_clocks_ranges; struct dm_pp_clock_range_for_dmif_wm_set_soc15* wm_dmif_clocks_ranges; } ;
struct dm_pp_clock_range_for_mcif_wm_set_soc15 {int wm_set_id; int wm_max_socclk_clk_in_khz; int wm_min_socclk_clk_in_khz; int wm_max_mem_clk_in_khz; int wm_min_mem_clk_in_khz; } ;
struct dm_pp_clock_range_for_dmif_wm_set_soc15 {int wm_set_id; int wm_max_dcfclk_clk_in_khz; int wm_min_dcfclk_clk_in_khz; int wm_max_mem_clk_in_khz; int wm_min_mem_clk_in_khz; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_10__ {TYPE_4__* funcs; } ;
struct TYPE_6__ {struct amd_pm_funcs* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {TYPE_5__ smu; TYPE_1__ powerplay; } ;
struct amd_pm_funcs {int (* set_watermarks_for_clocks_ranges ) (void*,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;} ;
typedef size_t int32_t ;
struct TYPE_9__ {scalar_t__ set_watermarks_for_clock_ranges; } ;
struct TYPE_8__ {int wm_inst; int max_fill_clk_mhz; int min_fill_clk_mhz; int max_drain_clk_mhz; int min_drain_clk_mhz; } ;
struct TYPE_7__ {int wm_inst; int max_drain_clk_mhz; int min_drain_clk_mhz; int max_fill_clk_mhz; int min_fill_clk_mhz; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_5__*,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;
 int FUNC_1 (void*,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;

void FUNC_2(struct pp_smu *VAR_1,
  struct pp_smu_wm_range_sets *VAR_2)
{
 const struct dc_context *VAR_3 = VAR_1->dm;
 struct amdgpu_device *VAR_4 = VAR_3->driver_context;
 void *VAR_5 = VAR_4->powerplay.pp_handle;
 const struct amd_pm_funcs *VAR_6 = VAR_4->powerplay.pp_funcs;
 struct dm_pp_wm_sets_with_clock_ranges_soc15 VAR_7;
 struct dm_pp_clock_range_for_dmif_wm_set_soc15 *VAR_8 = VAR_7.wm_dmif_clocks_ranges;
 struct dm_pp_clock_range_for_mcif_wm_set_soc15 *VAR_9 = VAR_7.wm_mcif_clocks_ranges;
 int32_t VAR_10;

 VAR_7.num_wm_dmif_sets = VAR_2->num_reader_wm_sets;
 VAR_7.num_wm_mcif_sets = VAR_2->num_writer_wm_sets;

 for (VAR_10 = 0; VAR_10 < VAR_7.num_wm_dmif_sets; VAR_10++) {
  if (VAR_2->reader_wm_sets[VAR_10].wm_inst > 3)
   VAR_8[VAR_10].wm_set_id = VAR_0;
  else
   VAR_8[VAR_10].wm_set_id =
     VAR_2->reader_wm_sets[VAR_10].wm_inst;
  VAR_8[VAR_10].wm_max_dcfclk_clk_in_khz =
    VAR_2->reader_wm_sets[VAR_10].max_drain_clk_mhz * 1000;
  VAR_8[VAR_10].wm_min_dcfclk_clk_in_khz =
    VAR_2->reader_wm_sets[VAR_10].min_drain_clk_mhz * 1000;
  VAR_8[VAR_10].wm_max_mem_clk_in_khz =
    VAR_2->reader_wm_sets[VAR_10].max_fill_clk_mhz * 1000;
  VAR_8[VAR_10].wm_min_mem_clk_in_khz =
    VAR_2->reader_wm_sets[VAR_10].min_fill_clk_mhz * 1000;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7.num_wm_mcif_sets; VAR_10++) {
  if (VAR_2->writer_wm_sets[VAR_10].wm_inst > 3)
   VAR_9[VAR_10].wm_set_id = VAR_0;
  else
   VAR_9[VAR_10].wm_set_id =
     VAR_2->writer_wm_sets[VAR_10].wm_inst;
  VAR_9[VAR_10].wm_max_socclk_clk_in_khz =
    VAR_2->writer_wm_sets[VAR_10].max_fill_clk_mhz * 1000;
  VAR_9[VAR_10].wm_min_socclk_clk_in_khz =
    VAR_2->writer_wm_sets[VAR_10].min_fill_clk_mhz * 1000;
  VAR_9[VAR_10].wm_max_mem_clk_in_khz =
    VAR_2->writer_wm_sets[VAR_10].max_drain_clk_mhz * 1000;
  VAR_9[VAR_10].wm_min_mem_clk_in_khz =
    VAR_2->writer_wm_sets[VAR_10].min_drain_clk_mhz * 1000;
 }

 if (VAR_6 && VAR_6->set_watermarks_for_clocks_ranges)
  VAR_6->set_watermarks_for_clocks_ranges(VAR_5,
          &VAR_7);
 else if (VAR_4->smu.funcs &&
   VAR_4->smu.funcs->set_watermarks_for_clock_ranges)
  FUNC_0(&VAR_4->smu,
          &VAR_7);
}
