
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int rob_buffer_size_kbytes; int det_buffer_size_kbytes; int dpp_output_buffer_pixels; int opp_output_buffer_lines; int pte_enable; int pte_chunk_size_kbytes; int meta_chunk_size_kbytes; int writeback_chunk_size_kbytes; int line_buffer_size_bits; int max_line_buffer_lines; int IsLineBufferBppFixed; int LineBufferFixedBpp; int writeback_luma_buffer_size_kbytes; int writeback_chroma_buffer_size_kbytes; int max_num_dpp; int max_num_wb; int max_dchub_pscl_bw_pix_per_clk; int max_pscl_lb_bw_pix_per_clk; int max_lb_vscl_bw_pix_per_clk; int max_vscl_hscl_bw_pix_per_clk; int max_hscl_ratio; int max_vscl_ratio; int max_hscl_taps; int max_vscl_taps; int underscan_factor; int can_vstartup_lines_exceed_vsync_plus_back_porch_lines_minus_one; int bug_forcing_LC_req_same_size_fixed; int dcfclk_cstate_latency; int max_inter_dcn_tile_repeaters; int dispclk_ramp_margin_percent; int pixel_chunk_size_kbytes; } ;
struct TYPE_6__ {int sr_exit_time_us; int sr_enter_plus_exit_time_us; int urgent_latency_us; int writeback_latency_us; int max_request_size_bytes; int downspread_percent; int urgent_out_of_order_return_per_channel_bytes; int vmm_page_size_bytes; int dram_clock_change_latency_us; int return_bus_width_bytes; int num_chans; int round_trip_ping_latency_dcfclk_cycles; int ideal_dram_bw_after_urgent_percent; } ;
struct TYPE_9__ {TYPE_3__ ip; TYPE_1__ soc; } ;
struct dc {TYPE_5__* dcn_ip; TYPE_4__ dml; TYPE_2__* dcn_soc; } ;
struct TYPE_10__ {int rob_buffer_size_in_kbyte; int det_buffer_size_in_kbyte; int dpp_output_buffer_pixels; int opp_output_buffer_lines; int pte_enable; int pte_chunk_size; int meta_chunk_size; int writeback_chunk_size; int odm_capability; int dsc_capability; int line_buffer_size; int max_line_buffer_lines; int is_line_buffer_bpp_fixed; int line_buffer_fixed_bpp; int writeback_luma_buffer_size; int writeback_chroma_buffer_size; int max_num_dpp; int max_num_writeback; int max_dchub_topscl_throughput; int max_pscl_tolb_throughput; int max_lb_tovscl_throughput; int max_vscl_tohscl_throughput; int max_hscl_ratio; int max_vscl_ratio; int max_hscl_taps; int max_vscl_taps; int pte_buffer_size_in_requests; int under_scan_factor; int can_vstartup_lines_exceed_vsync_plus_back_porch_lines_minus_one; int bug_forcing_luma_and_chroma_request_to_same_size_fixed; int dcfclk_cstate_latency; int max_inter_dcn_tile_repeaters; int dispclk_ramping_margin; int pixel_chunk_size_in_kbyte; } ;
struct TYPE_7__ {int sr_exit_time; int sr_enter_plus_exit_time; int urgent_latency; int write_back_latency; int max_request_size; int dcfclkv_max0p9; int dcfclkv_nom0p8; int dcfclkv_mid0p72; int dcfclkv_min0p65; int max_dispclk_vmax0p9; int max_dispclk_vnom0p8; int max_dispclk_vmid0p72; int max_dispclk_vmin0p65; int max_dppclk_vmax0p9; int max_dppclk_vnom0p8; int max_dppclk_vmid0p72; int max_dppclk_vmin0p65; int socclk; int fabric_and_dram_bandwidth_vmax0p9; int fabric_and_dram_bandwidth_vnom0p8; int fabric_and_dram_bandwidth_vmid0p72; int fabric_and_dram_bandwidth_vmin0p65; int phyclkv_max0p9; int phyclkv_nom0p8; int phyclkv_mid0p72; int phyclkv_min0p65; int downspreading; int urgent_out_of_order_return_per_channel; int vmm_page_size; int dram_clock_change_latency; int return_bus_width; int number_of_channels; int round_trip_ping_latency_cycles; int percent_of_ideal_drambw_received_after_urg_latency; } ;


 int FUNC_0 (char*,int,int,int,int,int ,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ,int,int ,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(struct dc *VAR_1)
{
 FUNC_1();
 FUNC_0("sr_exit_time: %f ns\n"
   "sr_enter_plus_exit_time: %f ns\n"
   "urgent_latency: %f ns\n"
   "write_back_latency: %f ns\n"
   "percent_of_ideal_drambw_received_after_urg_latency: %f %%\n"
   "max_request_size: %d bytes\n"
   "dcfclkv_max0p9: %f kHz\n"
   "dcfclkv_nom0p8: %f kHz\n"
   "dcfclkv_mid0p72: %f kHz\n"
   "dcfclkv_min0p65: %f kHz\n"
   "max_dispclk_vmax0p9: %f kHz\n"
   "max_dispclk_vnom0p8: %f kHz\n"
   "max_dispclk_vmid0p72: %f kHz\n"
   "max_dispclk_vmin0p65: %f kHz\n"
   "max_dppclk_vmax0p9: %f kHz\n"
   "max_dppclk_vnom0p8: %f kHz\n"
   "max_dppclk_vmid0p72: %f kHz\n"
   "max_dppclk_vmin0p65: %f kHz\n"
   "socclk: %f kHz\n"
   "fabric_and_dram_bandwidth_vmax0p9: %f MB/s\n"
   "fabric_and_dram_bandwidth_vnom0p8: %f MB/s\n"
   "fabric_and_dram_bandwidth_vmid0p72: %f MB/s\n"
   "fabric_and_dram_bandwidth_vmin0p65: %f MB/s\n"
   "phyclkv_max0p9: %f kHz\n"
   "phyclkv_nom0p8: %f kHz\n"
   "phyclkv_mid0p72: %f kHz\n"
   "phyclkv_min0p65: %f kHz\n"
   "downspreading: %f %%\n"
   "round_trip_ping_latency_cycles: %d DCFCLK Cycles\n"
   "urgent_out_of_order_return_per_channel: %d Bytes\n"
   "number_of_channels: %d\n"
   "vmm_page_size: %d Bytes\n"
   "dram_clock_change_latency: %f ns\n"
   "return_bus_width: %d Bytes\n",
   VAR_1->dcn_soc->sr_exit_time * 1000,
   VAR_1->dcn_soc->sr_enter_plus_exit_time * 1000,
   VAR_1->dcn_soc->urgent_latency * 1000,
   VAR_1->dcn_soc->write_back_latency * 1000,
   VAR_1->dcn_soc->percent_of_ideal_drambw_received_after_urg_latency,
   VAR_1->dcn_soc->max_request_size,
   VAR_1->dcn_soc->dcfclkv_max0p9 * 1000,
   VAR_1->dcn_soc->dcfclkv_nom0p8 * 1000,
   VAR_1->dcn_soc->dcfclkv_mid0p72 * 1000,
   VAR_1->dcn_soc->dcfclkv_min0p65 * 1000,
   VAR_1->dcn_soc->max_dispclk_vmax0p9 * 1000,
   VAR_1->dcn_soc->max_dispclk_vnom0p8 * 1000,
   VAR_1->dcn_soc->max_dispclk_vmid0p72 * 1000,
   VAR_1->dcn_soc->max_dispclk_vmin0p65 * 1000,
   VAR_1->dcn_soc->max_dppclk_vmax0p9 * 1000,
   VAR_1->dcn_soc->max_dppclk_vnom0p8 * 1000,
   VAR_1->dcn_soc->max_dppclk_vmid0p72 * 1000,
   VAR_1->dcn_soc->max_dppclk_vmin0p65 * 1000,
   VAR_1->dcn_soc->socclk * 1000,
   VAR_1->dcn_soc->fabric_and_dram_bandwidth_vmax0p9 * 1000,
   VAR_1->dcn_soc->fabric_and_dram_bandwidth_vnom0p8 * 1000,
   VAR_1->dcn_soc->fabric_and_dram_bandwidth_vmid0p72 * 1000,
   VAR_1->dcn_soc->fabric_and_dram_bandwidth_vmin0p65 * 1000,
   VAR_1->dcn_soc->phyclkv_max0p9 * 1000,
   VAR_1->dcn_soc->phyclkv_nom0p8 * 1000,
   VAR_1->dcn_soc->phyclkv_mid0p72 * 1000,
   VAR_1->dcn_soc->phyclkv_min0p65 * 1000,
   VAR_1->dcn_soc->downspreading * 100,
   VAR_1->dcn_soc->round_trip_ping_latency_cycles,
   VAR_1->dcn_soc->urgent_out_of_order_return_per_channel,
   VAR_1->dcn_soc->number_of_channels,
   VAR_1->dcn_soc->vmm_page_size,
   VAR_1->dcn_soc->dram_clock_change_latency * 1000,
   VAR_1->dcn_soc->return_bus_width);
 FUNC_0("rob_buffer_size_in_kbyte: %f\n"
   "det_buffer_size_in_kbyte: %f\n"
   "dpp_output_buffer_pixels: %f\n"
   "opp_output_buffer_lines: %f\n"
   "pixel_chunk_size_in_kbyte: %f\n"
   "pte_enable: %d\n"
   "pte_chunk_size: %d kbytes\n"
   "meta_chunk_size: %d kbytes\n"
   "writeback_chunk_size: %d kbytes\n"
   "odm_capability: %d\n"
   "dsc_capability: %d\n"
   "line_buffer_size: %d bits\n"
   "max_line_buffer_lines: %d\n"
   "is_line_buffer_bpp_fixed: %d\n"
   "line_buffer_fixed_bpp: %d\n"
   "writeback_luma_buffer_size: %d kbytes\n"
   "writeback_chroma_buffer_size: %d kbytes\n"
   "max_num_dpp: %d\n"
   "max_num_writeback: %d\n"
   "max_dchub_topscl_throughput: %d pixels/dppclk\n"
   "max_pscl_tolb_throughput: %d pixels/dppclk\n"
   "max_lb_tovscl_throughput: %d pixels/dppclk\n"
   "max_vscl_tohscl_throughput: %d pixels/dppclk\n"
   "max_hscl_ratio: %f\n"
   "max_vscl_ratio: %f\n"
   "max_hscl_taps: %d\n"
   "max_vscl_taps: %d\n"
   "pte_buffer_size_in_requests: %d\n"
   "dispclk_ramping_margin: %f %%\n"
   "under_scan_factor: %f %%\n"
   "max_inter_dcn_tile_repeaters: %d\n"
   "can_vstartup_lines_exceed_vsync_plus_back_porch_lines_minus_one: %d\n"
   "bug_forcing_luma_and_chroma_request_to_same_size_fixed: %d\n"
   "dcfclk_cstate_latency: %d\n",
   VAR_1->dcn_ip->rob_buffer_size_in_kbyte,
   VAR_1->dcn_ip->det_buffer_size_in_kbyte,
   VAR_1->dcn_ip->dpp_output_buffer_pixels,
   VAR_1->dcn_ip->opp_output_buffer_lines,
   VAR_1->dcn_ip->pixel_chunk_size_in_kbyte,
   VAR_1->dcn_ip->pte_enable,
   VAR_1->dcn_ip->pte_chunk_size,
   VAR_1->dcn_ip->meta_chunk_size,
   VAR_1->dcn_ip->writeback_chunk_size,
   VAR_1->dcn_ip->odm_capability,
   VAR_1->dcn_ip->dsc_capability,
   VAR_1->dcn_ip->line_buffer_size,
   VAR_1->dcn_ip->max_line_buffer_lines,
   VAR_1->dcn_ip->is_line_buffer_bpp_fixed,
   VAR_1->dcn_ip->line_buffer_fixed_bpp,
   VAR_1->dcn_ip->writeback_luma_buffer_size,
   VAR_1->dcn_ip->writeback_chroma_buffer_size,
   VAR_1->dcn_ip->max_num_dpp,
   VAR_1->dcn_ip->max_num_writeback,
   VAR_1->dcn_ip->max_dchub_topscl_throughput,
   VAR_1->dcn_ip->max_pscl_tolb_throughput,
   VAR_1->dcn_ip->max_lb_tovscl_throughput,
   VAR_1->dcn_ip->max_vscl_tohscl_throughput,
   VAR_1->dcn_ip->max_hscl_ratio,
   VAR_1->dcn_ip->max_vscl_ratio,
   VAR_1->dcn_ip->max_hscl_taps,
   VAR_1->dcn_ip->max_vscl_taps,
   VAR_1->dcn_ip->pte_buffer_size_in_requests,
   VAR_1->dcn_ip->dispclk_ramping_margin,
   VAR_1->dcn_ip->under_scan_factor * 100,
   VAR_1->dcn_ip->max_inter_dcn_tile_repeaters,
   VAR_1->dcn_ip->can_vstartup_lines_exceed_vsync_plus_back_porch_lines_minus_one,
   VAR_1->dcn_ip->bug_forcing_luma_and_chroma_request_to_same_size_fixed,
   VAR_1->dcn_ip->dcfclk_cstate_latency);

 VAR_1->dml.soc.sr_exit_time_us = VAR_1->dcn_soc->sr_exit_time;
 VAR_1->dml.soc.sr_enter_plus_exit_time_us = VAR_1->dcn_soc->sr_enter_plus_exit_time;
 VAR_1->dml.soc.urgent_latency_us = VAR_1->dcn_soc->urgent_latency;
 VAR_1->dml.soc.writeback_latency_us = VAR_1->dcn_soc->write_back_latency;
 VAR_1->dml.soc.ideal_dram_bw_after_urgent_percent =
   VAR_1->dcn_soc->percent_of_ideal_drambw_received_after_urg_latency;
 VAR_1->dml.soc.max_request_size_bytes = VAR_1->dcn_soc->max_request_size;
 VAR_1->dml.soc.downspread_percent = VAR_1->dcn_soc->downspreading;
 VAR_1->dml.soc.round_trip_ping_latency_dcfclk_cycles =
   VAR_1->dcn_soc->round_trip_ping_latency_cycles;
 VAR_1->dml.soc.urgent_out_of_order_return_per_channel_bytes =
   VAR_1->dcn_soc->urgent_out_of_order_return_per_channel;
 VAR_1->dml.soc.num_chans = VAR_1->dcn_soc->number_of_channels;
 VAR_1->dml.soc.vmm_page_size_bytes = VAR_1->dcn_soc->vmm_page_size;
 VAR_1->dml.soc.dram_clock_change_latency_us = VAR_1->dcn_soc->dram_clock_change_latency;
 VAR_1->dml.soc.return_bus_width_bytes = VAR_1->dcn_soc->return_bus_width;

 VAR_1->dml.ip.rob_buffer_size_kbytes = VAR_1->dcn_ip->rob_buffer_size_in_kbyte;
 VAR_1->dml.ip.det_buffer_size_kbytes = VAR_1->dcn_ip->det_buffer_size_in_kbyte;
 VAR_1->dml.ip.dpp_output_buffer_pixels = VAR_1->dcn_ip->dpp_output_buffer_pixels;
 VAR_1->dml.ip.opp_output_buffer_lines = VAR_1->dcn_ip->opp_output_buffer_lines;
 VAR_1->dml.ip.pixel_chunk_size_kbytes = VAR_1->dcn_ip->pixel_chunk_size_in_kbyte;
 VAR_1->dml.ip.pte_enable = VAR_1->dcn_ip->pte_enable == VAR_0;
 VAR_1->dml.ip.pte_chunk_size_kbytes = VAR_1->dcn_ip->pte_chunk_size;
 VAR_1->dml.ip.meta_chunk_size_kbytes = VAR_1->dcn_ip->meta_chunk_size;
 VAR_1->dml.ip.writeback_chunk_size_kbytes = VAR_1->dcn_ip->writeback_chunk_size;
 VAR_1->dml.ip.line_buffer_size_bits = VAR_1->dcn_ip->line_buffer_size;
 VAR_1->dml.ip.max_line_buffer_lines = VAR_1->dcn_ip->max_line_buffer_lines;
 VAR_1->dml.ip.IsLineBufferBppFixed = VAR_1->dcn_ip->is_line_buffer_bpp_fixed == VAR_0;
 VAR_1->dml.ip.LineBufferFixedBpp = VAR_1->dcn_ip->line_buffer_fixed_bpp;
 VAR_1->dml.ip.writeback_luma_buffer_size_kbytes = VAR_1->dcn_ip->writeback_luma_buffer_size;
 VAR_1->dml.ip.writeback_chroma_buffer_size_kbytes = VAR_1->dcn_ip->writeback_chroma_buffer_size;
 VAR_1->dml.ip.max_num_dpp = VAR_1->dcn_ip->max_num_dpp;
 VAR_1->dml.ip.max_num_wb = VAR_1->dcn_ip->max_num_writeback;
 VAR_1->dml.ip.max_dchub_pscl_bw_pix_per_clk = VAR_1->dcn_ip->max_dchub_topscl_throughput;
 VAR_1->dml.ip.max_pscl_lb_bw_pix_per_clk = VAR_1->dcn_ip->max_pscl_tolb_throughput;
 VAR_1->dml.ip.max_lb_vscl_bw_pix_per_clk = VAR_1->dcn_ip->max_lb_tovscl_throughput;
 VAR_1->dml.ip.max_vscl_hscl_bw_pix_per_clk = VAR_1->dcn_ip->max_vscl_tohscl_throughput;
 VAR_1->dml.ip.max_hscl_ratio = VAR_1->dcn_ip->max_hscl_ratio;
 VAR_1->dml.ip.max_vscl_ratio = VAR_1->dcn_ip->max_vscl_ratio;
 VAR_1->dml.ip.max_hscl_taps = VAR_1->dcn_ip->max_hscl_taps;
 VAR_1->dml.ip.max_vscl_taps = VAR_1->dcn_ip->max_vscl_taps;

 VAR_1->dml.ip.dispclk_ramp_margin_percent = VAR_1->dcn_ip->dispclk_ramping_margin;
 VAR_1->dml.ip.underscan_factor = VAR_1->dcn_ip->under_scan_factor;
 VAR_1->dml.ip.max_inter_dcn_tile_repeaters = VAR_1->dcn_ip->max_inter_dcn_tile_repeaters;
 VAR_1->dml.ip.can_vstartup_lines_exceed_vsync_plus_back_porch_lines_minus_one =
  VAR_1->dcn_ip->can_vstartup_lines_exceed_vsync_plus_back_porch_lines_minus_one == VAR_0;
 VAR_1->dml.ip.bug_forcing_LC_req_same_size_fixed =
  VAR_1->dcn_ip->bug_forcing_luma_and_chroma_request_to_same_size_fixed == VAR_0;
 VAR_1->dml.ip.dcfclk_cstate_latency = VAR_1->dcn_ip->dcfclk_cstate_latency;
 FUNC_2();
}
