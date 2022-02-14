
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_pp_clock_levels_with_voltage {int num_levels; TYPE_2__* data; int member_0; } ;
struct dc_context {int dummy; } ;
struct dc {TYPE_1__* dcn_soc; struct dc_context* ctx; } ;
struct TYPE_4__ {double clocks_in_khz; } ;
struct TYPE_3__ {int fabric_and_dram_bandwidth_vmin0p65; double fabric_and_dram_bandwidth_vmid0p72; double number_of_channels; double fabric_and_dram_bandwidth_vnom0p8; double fabric_and_dram_bandwidth_vmax0p9; double dcfclkv_min0p65; double dcfclkv_mid0p72; double dcfclkv_nom0p8; double dcfclkv_max0p9; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int FUNC_2 (struct dc_context*,int ,struct dm_pp_clock_levels_with_voltage*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct dm_pp_clock_levels_with_voltage*) ;

void FUNC_6(struct dc *VAR_3)
{
 struct dc_context *VAR_4 = VAR_3->ctx;
 struct dm_pp_clock_levels_with_voltage VAR_5 = {0}, VAR_6 = {0};
 bool VAR_7;


 VAR_7 = FUNC_2(
   VAR_4, VAR_1, &VAR_5);

 FUNC_3();

 if (VAR_7)
  VAR_7 = FUNC_5(&VAR_5);

 if (VAR_7) {
  FUNC_0(VAR_5.num_levels >= 3);
  VAR_3->dcn_soc->fabric_and_dram_bandwidth_vmin0p65 = 32 * (VAR_5.data[0].clocks_in_khz / 1000.0) / 1000.0;
  VAR_3->dcn_soc->fabric_and_dram_bandwidth_vmid0p72 = VAR_3->dcn_soc->number_of_channels *
    (VAR_5.data[VAR_5.num_levels - (VAR_5.num_levels > 2 ? 3 : 2)].clocks_in_khz / 1000.0)
    * VAR_2 / 1000.0;
  VAR_3->dcn_soc->fabric_and_dram_bandwidth_vnom0p8 = VAR_3->dcn_soc->number_of_channels *
    (VAR_5.data[VAR_5.num_levels - 2].clocks_in_khz / 1000.0)
    * VAR_2 / 1000.0;
  VAR_3->dcn_soc->fabric_and_dram_bandwidth_vmax0p9 = VAR_3->dcn_soc->number_of_channels *
    (VAR_5.data[VAR_5.num_levels - 1].clocks_in_khz / 1000.0)
    * VAR_2 / 1000.0;
 } else
  FUNC_1();

 FUNC_4();

 VAR_7 = FUNC_2(
   VAR_4, VAR_0, &VAR_6);

 FUNC_3();

 if (VAR_7)
  VAR_7 = FUNC_5(&VAR_6);

 if (VAR_7 && VAR_6.num_levels >= 3) {
  VAR_3->dcn_soc->dcfclkv_min0p65 = VAR_6.data[0].clocks_in_khz / 1000.0;
  VAR_3->dcn_soc->dcfclkv_mid0p72 = VAR_6.data[VAR_6.num_levels - 3].clocks_in_khz / 1000.0;
  VAR_3->dcn_soc->dcfclkv_nom0p8 = VAR_6.data[VAR_6.num_levels - 2].clocks_in_khz / 1000.0;
  VAR_3->dcn_soc->dcfclkv_max0p9 = VAR_6.data[VAR_6.num_levels - 1].clocks_in_khz / 1000.0;
 } else
  FUNC_1();

 FUNC_4();
}
