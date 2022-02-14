
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_context {int dummy; } ;
struct bw_calcs_vbios {int maximum_blackout_recovery_time; int blackout_duration; int number_of_request_slots_gmc_reserves_for_dmif_per_channel; int average_compression_rate; int cursor_width; int down_spread_percentage; int scatter_gather_enable; int mcifwrmc_urgent_latency; int nbp_state_change_latency; int stutter_self_refresh_entry_latency; int stutter_self_refresh_exit_latency; int dmifmc_urgent_latency; int trc; int data_return_bus_width; int high_voltage_max_phyclk; int mid_voltage_max_phyclk; int low_voltage_max_phyclk; int high_voltage_max_dispclk; int mid_voltage_max_dispclk; int low_voltage_max_dispclk; int high_sclk; int mid6_sclk; int mid5_sclk; int mid4_sclk; int mid3_sclk; int mid2_sclk; int mid1_sclk; int low_sclk; int high_yclk; int mid_yclk; int low_yclk; int number_of_dram_banks; int number_of_dram_channels; int dram_channel_width_in_bits; int memory_type; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dc_context *VAR_0, const struct bw_calcs_vbios *VAR_1)
{

 FUNC_0("#####################################################################");
 FUNC_0("struct bw_calcs_vbios vbios");
 FUNC_0("#####################################################################");
 FUNC_0("	[enum] bw_defines memory_type: %d", VAR_1->memory_type);
 FUNC_0("	[enum] bw_defines memory_type: %d", VAR_1->memory_type);
 FUNC_0("	[uint32_t] dram_channel_width_in_bits: %d", VAR_1->dram_channel_width_in_bits);
 FUNC_0("	[uint32_t] number_of_dram_channels: %d", VAR_1->number_of_dram_channels);
 FUNC_0("	[uint32_t] number_of_dram_banks: %d", VAR_1->number_of_dram_banks);
 FUNC_0("	[bw_fixed] low_yclk: %d", FUNC_1(VAR_1->low_yclk));
 FUNC_0("	[bw_fixed] mid_yclk: %d", FUNC_1(VAR_1->mid_yclk));
 FUNC_0("	[bw_fixed] high_yclk: %d", FUNC_1(VAR_1->high_yclk));
 FUNC_0("	[bw_fixed] low_sclk: %d", FUNC_1(VAR_1->low_sclk));
 FUNC_0("	[bw_fixed] mid1_sclk: %d", FUNC_1(VAR_1->mid1_sclk));
 FUNC_0("	[bw_fixed] mid2_sclk: %d", FUNC_1(VAR_1->mid2_sclk));
 FUNC_0("	[bw_fixed] mid3_sclk: %d", FUNC_1(VAR_1->mid3_sclk));
 FUNC_0("	[bw_fixed] mid4_sclk: %d", FUNC_1(VAR_1->mid4_sclk));
 FUNC_0("	[bw_fixed] mid5_sclk: %d", FUNC_1(VAR_1->mid5_sclk));
 FUNC_0("	[bw_fixed] mid6_sclk: %d", FUNC_1(VAR_1->mid6_sclk));
 FUNC_0("	[bw_fixed] high_sclk: %d", FUNC_1(VAR_1->high_sclk));
 FUNC_0("	[bw_fixed] low_voltage_max_dispclk: %d",
    FUNC_1(VAR_1->low_voltage_max_dispclk));
 FUNC_0("	[bw_fixed] mid_voltage_max_dispclk;: %d",
    FUNC_1(VAR_1->mid_voltage_max_dispclk));
 FUNC_0("	[bw_fixed] high_voltage_max_dispclk;: %d",
    FUNC_1(VAR_1->high_voltage_max_dispclk));
 FUNC_0("	[bw_fixed] low_voltage_max_phyclk: %d",
    FUNC_1(VAR_1->low_voltage_max_phyclk));
 FUNC_0("	[bw_fixed] mid_voltage_max_phyclk: %d",
    FUNC_1(VAR_1->mid_voltage_max_phyclk));
 FUNC_0("	[bw_fixed] high_voltage_max_phyclk: %d",
    FUNC_1(VAR_1->high_voltage_max_phyclk));
 FUNC_0("	[bw_fixed] data_return_bus_width: %d", FUNC_1(VAR_1->data_return_bus_width));
 FUNC_0("	[bw_fixed] trc: %d", FUNC_1(VAR_1->trc));
 FUNC_0("	[bw_fixed] dmifmc_urgent_latency: %d", FUNC_1(VAR_1->dmifmc_urgent_latency));
 FUNC_0("	[bw_fixed] stutter_self_refresh_exit_latency: %d",
    FUNC_1(VAR_1->stutter_self_refresh_exit_latency));
 FUNC_0("	[bw_fixed] stutter_self_refresh_entry_latency: %d",
    FUNC_1(VAR_1->stutter_self_refresh_entry_latency));
 FUNC_0("	[bw_fixed] nbp_state_change_latency: %d",
    FUNC_1(VAR_1->nbp_state_change_latency));
 FUNC_0("	[bw_fixed] mcifwrmc_urgent_latency: %d",
    FUNC_1(VAR_1->mcifwrmc_urgent_latency));
 FUNC_0("	[bool] scatter_gather_enable: %d", VAR_1->scatter_gather_enable);
 FUNC_0("	[bw_fixed] down_spread_percentage: %d",
    FUNC_1(VAR_1->down_spread_percentage));
 FUNC_0("	[uint32_t] cursor_width: %d", VAR_1->cursor_width);
 FUNC_0("	[uint32_t] average_compression_rate: %d", VAR_1->average_compression_rate);
 FUNC_0("	[uint32_t] number_of_request_slots_gmc_reserves_for_dmif_per_channel: %d",
    VAR_1->number_of_request_slots_gmc_reserves_for_dmif_per_channel);
 FUNC_0("	[bw_fixed] blackout_duration: %d", FUNC_1(VAR_1->blackout_duration));
 FUNC_0("	[bw_fixed] maximum_blackout_recovery_time: %d",
    FUNC_1(VAR_1->maximum_blackout_recovery_time));


}
