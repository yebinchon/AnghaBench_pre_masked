
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_pp_wm_sets_with_clock_ranges {int num_wm_sets; TYPE_2__* wm_clk_ranges; int member_0; } ;
struct dm_pp_clock_levels_with_latency {int num_levels; TYPE_1__* data; int member_0; } ;
struct dm_pp_clock_levels {int* clocks_in_khz; int num_levels; int member_0; } ;
struct dc {int ctx; TYPE_3__* bw_vbios; } ;
struct TYPE_6__ {scalar_t__ memory_type; void* high_yclk; void* mid_yclk; void* low_yclk; void* low_sclk; void* mid6_sclk; void* mid5_sclk; void* mid4_sclk; void* mid3_sclk; void* mid2_sclk; void* mid1_sclk; void* high_sclk; } ;
struct TYPE_5__ {int wm_min_eng_clk_in_khz; int wm_max_eng_clk_in_khz; int wm_min_mem_clk_in_khz; int wm_max_mem_clk_in_khz; int wm_set_id; } ;
struct TYPE_4__ {int clocks_in_khz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,struct dm_pp_clock_levels*) ;
 int FUNC_2 (int ,int ,struct dm_pp_clock_levels_with_latency*) ;
 int FUNC_3 (int ,struct dm_pp_wm_sets_with_clock_ranges*) ;

__attribute__((used)) static void FUNC_4(struct dc *VAR_9)
{
 struct dm_pp_clock_levels_with_latency VAR_10 = {0};
 struct dm_pp_clock_levels_with_latency VAR_11 = {0};
 struct dm_pp_wm_sets_with_clock_ranges VAR_12 = {0};
 struct dm_pp_clock_levels VAR_13 = {0};
 int VAR_14 = VAR_3;

 if (VAR_9->bw_vbios && VAR_9->bw_vbios->memory_type == VAR_8)
  VAR_14 = VAR_2;




 if (!FUNC_2(
   VAR_9->ctx,
   VAR_0,
   &VAR_10)) {


  FUNC_1(
    VAR_9->ctx,
    VAR_0,
    &VAR_13);

  VAR_9->bw_vbios->high_sclk = FUNC_0(
    VAR_13.clocks_in_khz[VAR_13.num_levels-1], 1000);
  VAR_9->bw_vbios->mid1_sclk = FUNC_0(
    VAR_13.clocks_in_khz[VAR_13.num_levels/8], 1000);
  VAR_9->bw_vbios->mid2_sclk = FUNC_0(
    VAR_13.clocks_in_khz[VAR_13.num_levels*2/8], 1000);
  VAR_9->bw_vbios->mid3_sclk = FUNC_0(
    VAR_13.clocks_in_khz[VAR_13.num_levels*3/8], 1000);
  VAR_9->bw_vbios->mid4_sclk = FUNC_0(
    VAR_13.clocks_in_khz[VAR_13.num_levels*4/8], 1000);
  VAR_9->bw_vbios->mid5_sclk = FUNC_0(
    VAR_13.clocks_in_khz[VAR_13.num_levels*5/8], 1000);
  VAR_9->bw_vbios->mid6_sclk = FUNC_0(
    VAR_13.clocks_in_khz[VAR_13.num_levels*6/8], 1000);
  VAR_9->bw_vbios->low_sclk = FUNC_0(
    VAR_13.clocks_in_khz[0], 1000);


  FUNC_1(
    VAR_9->ctx,
    VAR_1,
    &VAR_13);

  VAR_9->bw_vbios->low_yclk = FUNC_0(
   VAR_13.clocks_in_khz[0] * VAR_14, 1000);
  VAR_9->bw_vbios->mid_yclk = FUNC_0(
   VAR_13.clocks_in_khz[VAR_13.num_levels>>1] * VAR_14,
   1000);
  VAR_9->bw_vbios->high_yclk = FUNC_0(
   VAR_13.clocks_in_khz[VAR_13.num_levels-1] * VAR_14,
   1000);

  return;
 }


 VAR_9->bw_vbios->high_sclk = FUNC_0(
  VAR_10.data[VAR_10.num_levels-1].clocks_in_khz, 1000);
 VAR_9->bw_vbios->mid1_sclk = FUNC_0(
  VAR_10.data[VAR_10.num_levels/8].clocks_in_khz, 1000);
 VAR_9->bw_vbios->mid2_sclk = FUNC_0(
  VAR_10.data[VAR_10.num_levels*2/8].clocks_in_khz, 1000);
 VAR_9->bw_vbios->mid3_sclk = FUNC_0(
  VAR_10.data[VAR_10.num_levels*3/8].clocks_in_khz, 1000);
 VAR_9->bw_vbios->mid4_sclk = FUNC_0(
  VAR_10.data[VAR_10.num_levels*4/8].clocks_in_khz, 1000);
 VAR_9->bw_vbios->mid5_sclk = FUNC_0(
  VAR_10.data[VAR_10.num_levels*5/8].clocks_in_khz, 1000);
 VAR_9->bw_vbios->mid6_sclk = FUNC_0(
  VAR_10.data[VAR_10.num_levels*6/8].clocks_in_khz, 1000);
 VAR_9->bw_vbios->low_sclk = FUNC_0(
   VAR_10.data[0].clocks_in_khz, 1000);


 FUNC_2(
   VAR_9->ctx,
   VAR_1,
   &VAR_11);






 VAR_9->bw_vbios->low_yclk = FUNC_0(
  VAR_11.data[0].clocks_in_khz * VAR_14, 1000);
 VAR_9->bw_vbios->mid_yclk = FUNC_0(
  VAR_11.data[VAR_11.num_levels>>1].clocks_in_khz * VAR_14,
  1000);
 VAR_9->bw_vbios->high_yclk = FUNC_0(
  VAR_11.data[VAR_11.num_levels-1].clocks_in_khz * VAR_14,
  1000);






 VAR_12.num_wm_sets = 4;
 VAR_12.wm_clk_ranges[0].wm_set_id = VAR_4;
 VAR_12.wm_clk_ranges[0].wm_min_eng_clk_in_khz =
   VAR_10.data[0].clocks_in_khz;
 VAR_12.wm_clk_ranges[0].wm_max_eng_clk_in_khz =
   VAR_10.data[VAR_10.num_levels*3/8].clocks_in_khz - 1;
 VAR_12.wm_clk_ranges[0].wm_min_mem_clk_in_khz =
   VAR_11.data[0].clocks_in_khz;
 VAR_12.wm_clk_ranges[0].wm_max_mem_clk_in_khz =
   VAR_11.data[VAR_11.num_levels>>1].clocks_in_khz - 1;

 VAR_12.wm_clk_ranges[1].wm_set_id = VAR_5;
 VAR_12.wm_clk_ranges[1].wm_min_eng_clk_in_khz =
   VAR_10.data[VAR_10.num_levels*3/8].clocks_in_khz;

 VAR_12.wm_clk_ranges[1].wm_max_eng_clk_in_khz = 5000000;
 VAR_12.wm_clk_ranges[1].wm_min_mem_clk_in_khz =
   VAR_11.data[0].clocks_in_khz;
 VAR_12.wm_clk_ranges[1].wm_max_mem_clk_in_khz =
   VAR_11.data[VAR_11.num_levels>>1].clocks_in_khz - 1;

 VAR_12.wm_clk_ranges[2].wm_set_id = VAR_6;
 VAR_12.wm_clk_ranges[2].wm_min_eng_clk_in_khz =
   VAR_10.data[0].clocks_in_khz;
 VAR_12.wm_clk_ranges[2].wm_max_eng_clk_in_khz =
   VAR_10.data[VAR_10.num_levels*3/8].clocks_in_khz - 1;
 VAR_12.wm_clk_ranges[2].wm_min_mem_clk_in_khz =
   VAR_11.data[VAR_11.num_levels>>1].clocks_in_khz;

 VAR_12.wm_clk_ranges[2].wm_max_mem_clk_in_khz = 5000000;

 VAR_12.wm_clk_ranges[3].wm_set_id = VAR_7;
 VAR_12.wm_clk_ranges[3].wm_min_eng_clk_in_khz =
   VAR_10.data[VAR_10.num_levels*3/8].clocks_in_khz;

 VAR_12.wm_clk_ranges[3].wm_max_eng_clk_in_khz = 5000000;
 VAR_12.wm_clk_ranges[3].wm_min_mem_clk_in_khz =
   VAR_11.data[VAR_11.num_levels>>1].clocks_in_khz;

 VAR_12.wm_clk_ranges[3].wm_max_mem_clk_in_khz = 5000000;


 FUNC_3(VAR_9->ctx, &VAR_12);
}
