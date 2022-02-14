
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_pp_clock_levels {int* clocks_in_khz; int num_levels; int member_0; } ;
struct dc {TYPE_1__* bw_vbios; int ctx; struct dm_pp_clock_levels sclk_lvls; } ;
struct TYPE_2__ {void* high_yclk; void* mid_yclk; void* low_yclk; void* low_voltage_max_dispclk; void* mid_voltage_max_dispclk; void* high_voltage_max_dispclk; void* low_sclk; void* mid6_sclk; void* mid5_sclk; void* mid4_sclk; void* mid3_sclk; void* mid2_sclk; void* mid1_sclk; void* high_sclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,struct dm_pp_clock_levels*) ;

__attribute__((used)) static void FUNC_2(struct dc *VAR_4)
{
 struct dm_pp_clock_levels VAR_5 = {0};


 FUNC_1(
   VAR_4->ctx,
   VAR_1,
   &VAR_5);

 VAR_4->bw_vbios->high_sclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels-1], 1000);
 VAR_4->bw_vbios->mid1_sclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels/8], 1000);
 VAR_4->bw_vbios->mid2_sclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels*2/8], 1000);
 VAR_4->bw_vbios->mid3_sclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels*3/8], 1000);
 VAR_4->bw_vbios->mid4_sclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels*4/8], 1000);
 VAR_4->bw_vbios->mid5_sclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels*5/8], 1000);
 VAR_4->bw_vbios->mid6_sclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels*6/8], 1000);
 VAR_4->bw_vbios->low_sclk = FUNC_0(
   VAR_5.clocks_in_khz[0], 1000);
 VAR_4->sclk_lvls = VAR_5;


 FUNC_1(
   VAR_4->ctx,
   VAR_0,
   &VAR_5);
 VAR_4->bw_vbios->high_voltage_max_dispclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels-1], 1000);
 VAR_4->bw_vbios->mid_voltage_max_dispclk = FUNC_0(
   VAR_5.clocks_in_khz[VAR_5.num_levels>>1], 1000);
 VAR_4->bw_vbios->low_voltage_max_dispclk = FUNC_0(
   VAR_5.clocks_in_khz[0], 1000);


 FUNC_1(
   VAR_4->ctx,
   VAR_2,
   &VAR_5);

 VAR_4->bw_vbios->low_yclk = FUNC_0(
  VAR_5.clocks_in_khz[0] * VAR_3, 1000);
 VAR_4->bw_vbios->mid_yclk = FUNC_0(
  VAR_5.clocks_in_khz[VAR_5.num_levels>>1] * VAR_3,
  1000);
 VAR_4->bw_vbios->high_yclk = FUNC_0(
  VAR_5.clocks_in_khz[VAR_5.num_levels-1] * VAR_3,
  1000);
}
