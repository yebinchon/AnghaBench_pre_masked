
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_context {int dummy; } ;
struct bw_calcs_dceip {int dmif_request_buffer_size; int mcifwr_all_surfaces_burst_time; int display_pipe_throughput_factor; int dispclk_ramping_factor; int dispclk_per_request; int request_efficiency; int linear_mode_line_request_alternation_slice; int maximum_total_outstanding_pte_requests_allowed_by_saw; int minimum_outstanding_pte_request_limit; int peak_pte_request_to_eviction_ratio_limiting_single_display_no_rotation; int peak_pte_request_to_eviction_ratio_limiting_multiple_displays_or_single_rotated_display; int underlay_maximum_height_efficient_for_tiling; int underlay_maximum_width_efficient_for_tiling; int cursor_dcp_buffer_lines; int cursor_chunk_width; int underlay422_lb_size_per_component; int underlay420_chroma_lb_size_per_component; int underlay420_luma_lb_size_per_component; int stutter_and_dram_clock_state_change_gated_before_cursor; int lb_size_per_component444; int lb_write_pixels_per_dispclk; int alpha_vscaler_efficiency; int graphics_vscaler_efficiency12_bit_per_component; int graphics_vscaler_efficiency10_bit_per_component; int graphics_vscaler_efficiency8_bit_per_component; int graphics_vscaler_efficiency6_bit_per_component; int underlay_vscaler_efficiency12_bit_per_component; int underlay_vscaler_efficiency10_bit_per_component; int scatter_gather_pte_request_rows_in_tiling_mode; int display_write_back420_chroma_mcifwr_buffer_size; int display_write_back420_luma_mcifwr_buffer_size; int scatter_gather_lines_of_pte_prefetching_in_linear_mode; int underlay_chroma_dmif_size; int underlay_luma_dmif_size; int graphics_dmif_size; int max_dmif_buffer_allocated; int number_of_underlay_pipes; int number_of_graphics_pipes; int chunk_width; int low_power_tiling_mode; int lines_interleaved_into_lb; int cursor_max_outstanding_group_num; int limit_excessive_outstanding_dmif_requests; int graphics_lb_nodownscaling_multi_line_prefetching; int underlay_downscale_prefetch_enabled; int pre_downscaler_enabled; int argb_compression_support; int display_write_back_supported; int dmif_pipe_en_fbc_chunk_tracker; int large_cursor; int version; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dc_context *VAR_0, const struct bw_calcs_dceip *VAR_1)
{

 FUNC_0("#####################################################################");
 FUNC_0("struct bw_calcs_dceip");
 FUNC_0("#####################################################################");
 FUNC_0("	[enum]   bw_calcs_version version %d", VAR_1->version);
 FUNC_0("	[bool] large_cursor: %d", VAR_1->large_cursor);
 FUNC_0("	[bool] dmif_pipe_en_fbc_chunk_tracker: %d", VAR_1->dmif_pipe_en_fbc_chunk_tracker);
 FUNC_0("	[bool] display_write_back_supported: %d", VAR_1->display_write_back_supported);
 FUNC_0("	[bool] argb_compression_support: %d", VAR_1->argb_compression_support);
 FUNC_0("	[bool] pre_downscaler_enabled: %d", VAR_1->pre_downscaler_enabled);
 FUNC_0("	[bool] underlay_downscale_prefetch_enabled: %d",
    VAR_1->underlay_downscale_prefetch_enabled);
 FUNC_0("	[bool] graphics_lb_nodownscaling_multi_line_prefetching: %d",
    VAR_1->graphics_lb_nodownscaling_multi_line_prefetching);
 FUNC_0("	[bool] limit_excessive_outstanding_dmif_requests: %d",
    VAR_1->limit_excessive_outstanding_dmif_requests);
 FUNC_0("	[uint32_t] cursor_max_outstanding_group_num: %d",
    VAR_1->cursor_max_outstanding_group_num);
 FUNC_0("	[uint32_t] lines_interleaved_into_lb: %d", VAR_1->lines_interleaved_into_lb);
 FUNC_0("	[uint32_t] low_power_tiling_mode: %d", VAR_1->low_power_tiling_mode);
 FUNC_0("	[uint32_t] chunk_width: %d", VAR_1->chunk_width);
 FUNC_0("	[uint32_t] number_of_graphics_pipes: %d", VAR_1->number_of_graphics_pipes);
 FUNC_0("	[uint32_t] number_of_underlay_pipes: %d", VAR_1->number_of_underlay_pipes);
 FUNC_0("	[uint32_t] max_dmif_buffer_allocated: %d", VAR_1->max_dmif_buffer_allocated);
 FUNC_0("	[uint32_t] graphics_dmif_size: %d", VAR_1->graphics_dmif_size);
 FUNC_0("	[uint32_t] underlay_luma_dmif_size: %d", VAR_1->underlay_luma_dmif_size);
 FUNC_0("	[uint32_t] underlay_chroma_dmif_size: %d", VAR_1->underlay_chroma_dmif_size);
 FUNC_0("	[uint32_t] scatter_gather_lines_of_pte_prefetching_in_linear_mode: %d",
    VAR_1->scatter_gather_lines_of_pte_prefetching_in_linear_mode);
 FUNC_0("	[uint32_t] display_write_back420_luma_mcifwr_buffer_size: %d",
    VAR_1->display_write_back420_luma_mcifwr_buffer_size);
 FUNC_0("	[uint32_t] display_write_back420_chroma_mcifwr_buffer_size: %d",
    VAR_1->display_write_back420_chroma_mcifwr_buffer_size);
 FUNC_0("	[uint32_t] scatter_gather_pte_request_rows_in_tiling_mode: %d",
    VAR_1->scatter_gather_pte_request_rows_in_tiling_mode);
 FUNC_0("	[bw_fixed] underlay_vscaler_efficiency10_bit_per_component: %d",
    FUNC_1(VAR_1->underlay_vscaler_efficiency10_bit_per_component));
 FUNC_0("	[bw_fixed] underlay_vscaler_efficiency12_bit_per_component: %d",
    FUNC_1(VAR_1->underlay_vscaler_efficiency12_bit_per_component));
 FUNC_0("	[bw_fixed] graphics_vscaler_efficiency6_bit_per_component: %d",
    FUNC_1(VAR_1->graphics_vscaler_efficiency6_bit_per_component));
 FUNC_0("	[bw_fixed] graphics_vscaler_efficiency8_bit_per_component: %d",
    FUNC_1(VAR_1->graphics_vscaler_efficiency8_bit_per_component));
 FUNC_0("	[bw_fixed] graphics_vscaler_efficiency10_bit_per_component: %d",
    FUNC_1(VAR_1->graphics_vscaler_efficiency10_bit_per_component));
 FUNC_0("	[bw_fixed] graphics_vscaler_efficiency12_bit_per_component: %d",
    FUNC_1(VAR_1->graphics_vscaler_efficiency12_bit_per_component));
 FUNC_0("	[bw_fixed] alpha_vscaler_efficiency: %d",
    FUNC_1(VAR_1->alpha_vscaler_efficiency));
 FUNC_0("	[bw_fixed] lb_write_pixels_per_dispclk: %d",
    FUNC_1(VAR_1->lb_write_pixels_per_dispclk));
 FUNC_0("	[bw_fixed] lb_size_per_component444: %d",
    FUNC_1(VAR_1->lb_size_per_component444));
 FUNC_0("	[bw_fixed] stutter_and_dram_clock_state_change_gated_before_cursor: %d",
    FUNC_1(VAR_1->stutter_and_dram_clock_state_change_gated_before_cursor));
 FUNC_0("	[bw_fixed] underlay420_luma_lb_size_per_component: %d",
    FUNC_1(VAR_1->underlay420_luma_lb_size_per_component));
 FUNC_0("	[bw_fixed] underlay420_chroma_lb_size_per_component: %d",
    FUNC_1(VAR_1->underlay420_chroma_lb_size_per_component));
 FUNC_0("	[bw_fixed] underlay422_lb_size_per_component: %d",
    FUNC_1(VAR_1->underlay422_lb_size_per_component));
 FUNC_0("	[bw_fixed] cursor_chunk_width: %d", FUNC_1(VAR_1->cursor_chunk_width));
 FUNC_0("	[bw_fixed] cursor_dcp_buffer_lines: %d",
    FUNC_1(VAR_1->cursor_dcp_buffer_lines));
 FUNC_0("	[bw_fixed] underlay_maximum_width_efficient_for_tiling: %d",
    FUNC_1(VAR_1->underlay_maximum_width_efficient_for_tiling));
 FUNC_0("	[bw_fixed] underlay_maximum_height_efficient_for_tiling: %d",
    FUNC_1(VAR_1->underlay_maximum_height_efficient_for_tiling));
 FUNC_0("	[bw_fixed] peak_pte_request_to_eviction_ratio_limiting_multiple_displays_or_single_rotated_display: %d",
    FUNC_1(VAR_1->peak_pte_request_to_eviction_ratio_limiting_multiple_displays_or_single_rotated_display));
 FUNC_0("	[bw_fixed] peak_pte_request_to_eviction_ratio_limiting_single_display_no_rotation: %d",
    FUNC_1(VAR_1->peak_pte_request_to_eviction_ratio_limiting_single_display_no_rotation));
 FUNC_0("	[bw_fixed] minimum_outstanding_pte_request_limit: %d",
    FUNC_1(VAR_1->minimum_outstanding_pte_request_limit));
 FUNC_0("	[bw_fixed] maximum_total_outstanding_pte_requests_allowed_by_saw: %d",
    FUNC_1(VAR_1->maximum_total_outstanding_pte_requests_allowed_by_saw));
 FUNC_0("	[bw_fixed] linear_mode_line_request_alternation_slice: %d",
    FUNC_1(VAR_1->linear_mode_line_request_alternation_slice));
 FUNC_0("	[bw_fixed] request_efficiency: %d", FUNC_1(VAR_1->request_efficiency));
 FUNC_0("	[bw_fixed] dispclk_per_request: %d", FUNC_1(VAR_1->dispclk_per_request));
 FUNC_0("	[bw_fixed] dispclk_ramping_factor: %d",
    FUNC_1(VAR_1->dispclk_ramping_factor));
 FUNC_0("	[bw_fixed] display_pipe_throughput_factor: %d",
    FUNC_1(VAR_1->display_pipe_throughput_factor));
 FUNC_0("	[bw_fixed] mcifwr_all_surfaces_burst_time: %d",
    FUNC_1(VAR_1->mcifwr_all_surfaces_burst_time));
 FUNC_0("	[bw_fixed] dmif_request_buffer_size: %d",
    FUNC_1(VAR_1->dmif_request_buffer_size));


}
