
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct smu_context {int dummy; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {int num_wm_dmif_sets; int num_wm_mcif_sets; TYPE_3__* wm_mcif_clocks_ranges; TYPE_1__* wm_dmif_clocks_ranges; } ;
struct TYPE_8__ {TYPE_2__** WatermarkRow; } ;
typedef TYPE_4__ Watermarks_t ;
struct TYPE_7__ {int wm_min_socclk_clk_in_khz; int wm_max_socclk_clk_in_khz; int wm_min_mem_clk_in_khz; int wm_max_mem_clk_in_khz; scalar_t__ wm_set_id; } ;
struct TYPE_6__ {void* WmSetting; void* MaxUclk; void* MinUclk; void* MaxClock; void* MinClock; } ;
struct TYPE_5__ {int wm_min_dcfclk_clk_in_khz; int wm_max_dcfclk_clk_in_khz; int wm_min_mem_clk_in_khz; int wm_max_mem_clk_in_khz; scalar_t__ wm_set_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_1,
           void *VAR_2, struct
           dm_pp_wm_sets_with_clock_ranges_soc15
           *VAR_3)
{
 int VAR_4;
 Watermarks_t *VAR_5 = VAR_2;

 if (!VAR_5 || !VAR_3)
  return -VAR_0;

 if (VAR_3->num_wm_dmif_sets > 4 ||
     VAR_3->num_wm_mcif_sets > 4)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_wm_dmif_sets; VAR_4++) {
  VAR_5->WatermarkRow[1][VAR_4].MinClock =
   FUNC_0((uint16_t)
   (VAR_3->wm_dmif_clocks_ranges[VAR_4].wm_min_dcfclk_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[1][VAR_4].MaxClock =
   FUNC_0((uint16_t)
   (VAR_3->wm_dmif_clocks_ranges[VAR_4].wm_max_dcfclk_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[1][VAR_4].MinUclk =
   FUNC_0((uint16_t)
   (VAR_3->wm_dmif_clocks_ranges[VAR_4].wm_min_mem_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[1][VAR_4].MaxUclk =
   FUNC_0((uint16_t)
   (VAR_3->wm_dmif_clocks_ranges[VAR_4].wm_max_mem_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[1][VAR_4].WmSetting = (uint8_t)
    VAR_3->wm_dmif_clocks_ranges[VAR_4].wm_set_id;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->num_wm_mcif_sets; VAR_4++) {
  VAR_5->WatermarkRow[0][VAR_4].MinClock =
   FUNC_0((uint16_t)
   (VAR_3->wm_mcif_clocks_ranges[VAR_4].wm_min_socclk_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[0][VAR_4].MaxClock =
   FUNC_0((uint16_t)
   (VAR_3->wm_mcif_clocks_ranges[VAR_4].wm_max_socclk_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[0][VAR_4].MinUclk =
   FUNC_0((uint16_t)
   (VAR_3->wm_mcif_clocks_ranges[VAR_4].wm_min_mem_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[0][VAR_4].MaxUclk =
   FUNC_0((uint16_t)
   (VAR_3->wm_mcif_clocks_ranges[VAR_4].wm_max_mem_clk_in_khz /
   1000));
  VAR_5->WatermarkRow[0][VAR_4].WmSetting = (uint8_t)
    VAR_3->wm_mcif_clocks_ranges[VAR_4].wm_set_id;
 }

 return 0;
}
