
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct watermarks {TYPE_2__** WatermarkRow; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {int num_wm_dmif_sets; int num_wm_mcif_sets; TYPE_3__* wm_mcif_clocks_ranges; TYPE_1__* wm_dmif_clocks_ranges; } ;
struct TYPE_6__ {int wm_min_socclk_clk_in_khz; int wm_max_socclk_clk_in_khz; int wm_min_mem_clk_in_khz; int wm_max_mem_clk_in_khz; scalar_t__ wm_set_id; } ;
struct TYPE_5__ {void* WmSetting; void* MaxUclk; void* MinUclk; void* MaxClock; void* MinClock; } ;
struct TYPE_4__ {int wm_min_dcfclk_clk_in_khz; int wm_max_dcfclk_clk_in_khz; int wm_min_mem_clk_in_khz; int wm_max_mem_clk_in_khz; scalar_t__ wm_set_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

int FUNC_1(void *VAR_1,
  struct dm_pp_wm_sets_with_clock_ranges_soc15 *VAR_2)
{
 uint32_t VAR_3;
 struct watermarks *VAR_4 = VAR_1;

 if (!VAR_4 || !VAR_2)
  return -VAR_0;

 if (VAR_2->num_wm_dmif_sets > 4 || VAR_2->num_wm_mcif_sets > 4)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_wm_dmif_sets; VAR_3++) {
  VAR_4->WatermarkRow[1][VAR_3].MinClock =
   FUNC_0((uint16_t)
   (VAR_2->wm_dmif_clocks_ranges[VAR_3].wm_min_dcfclk_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[1][VAR_3].MaxClock =
   FUNC_0((uint16_t)
   (VAR_2->wm_dmif_clocks_ranges[VAR_3].wm_max_dcfclk_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[1][VAR_3].MinUclk =
   FUNC_0((uint16_t)
   (VAR_2->wm_dmif_clocks_ranges[VAR_3].wm_min_mem_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[1][VAR_3].MaxUclk =
   FUNC_0((uint16_t)
   (VAR_2->wm_dmif_clocks_ranges[VAR_3].wm_max_mem_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[1][VAR_3].WmSetting = (uint8_t)
    VAR_2->wm_dmif_clocks_ranges[VAR_3].wm_set_id;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->num_wm_mcif_sets; VAR_3++) {
  VAR_4->WatermarkRow[0][VAR_3].MinClock =
   FUNC_0((uint16_t)
   (VAR_2->wm_mcif_clocks_ranges[VAR_3].wm_min_socclk_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[0][VAR_3].MaxClock =
   FUNC_0((uint16_t)
   (VAR_2->wm_mcif_clocks_ranges[VAR_3].wm_max_socclk_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[0][VAR_3].MinUclk =
   FUNC_0((uint16_t)
   (VAR_2->wm_mcif_clocks_ranges[VAR_3].wm_min_mem_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[0][VAR_3].MaxUclk =
   FUNC_0((uint16_t)
   (VAR_2->wm_mcif_clocks_ranges[VAR_3].wm_max_mem_clk_in_khz /
   1000));
  VAR_4->WatermarkRow[0][VAR_3].WmSetting = (uint8_t)
    VAR_2->wm_mcif_clocks_ranges[VAR_3].wm_set_id;
 }
 return 0;
}
