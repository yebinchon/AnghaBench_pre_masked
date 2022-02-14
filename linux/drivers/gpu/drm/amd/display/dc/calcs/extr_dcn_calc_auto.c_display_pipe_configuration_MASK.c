
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dcn_bw_internal_vars {double* total_number_of_active_dpp_per_ratio; int number_of_active_planes; int** dpp_per_plane_per_ratio; scalar_t__* dispclk_dppclk_support_per_ratio; double* required_dispclk_per_ratio; int dispclk_dppclk_ratio; int* dpp_per_plane; scalar_t__* source_pixel_format; double byte_per_pix_dety; double byte_per_pix_detc; scalar_t__* source_surface_mode; double read256_bytes_block_height_y; double read256_bytes_block_width_y; double read256_bytes_block_height_c; double read256_bytes_block_width_c; scalar_t__* source_scan; double maximum_swath_height_y; double maximum_swath_height_c; double minimum_swath_height_y; double minimum_swath_height_c; scalar_t__ bug_forcing_luma_and_chroma_request_to_same_size_fixed; int swath_width; int* viewport_width; int* viewport_height; double swath_width_granularity_y; int rounded_up_max_swath_size_bytes_y; double swath_width_granularity_c; int rounded_up_max_swath_size_bytes_c; double det_buffer_size_in_kbyte; int* swath_height_y; int* swath_height_c; double* det_buffer_size_y; double* det_buffer_size_c; int * error_message; int final_error_message; } ;


 int FUNC_0 (double,double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

void FUNC_1(struct dcn_bw_internal_vars *VAR_16)
{
 int VAR_17;
 int VAR_18;


 for (VAR_17 = 0; VAR_17 <= 1; VAR_17++) {
  VAR_16->total_number_of_active_dpp_per_ratio[VAR_17] = 0.0;
  for (VAR_18 = 0; VAR_18 <= VAR_16->number_of_active_planes - 1; VAR_18++) {
   VAR_16->total_number_of_active_dpp_per_ratio[VAR_17] = VAR_16->total_number_of_active_dpp_per_ratio[VAR_17] + VAR_16->dpp_per_plane_per_ratio[VAR_17][VAR_18];
  }
 }
 if ((VAR_16->dispclk_dppclk_support_per_ratio[0] == VAR_13 && VAR_16->dispclk_dppclk_support_per_ratio[1] == VAR_1) || (VAR_16->dispclk_dppclk_support_per_ratio[0] == VAR_16->dispclk_dppclk_support_per_ratio[1] && (VAR_16->total_number_of_active_dpp_per_ratio[0] < VAR_16->total_number_of_active_dpp_per_ratio[1] || (((VAR_16->total_number_of_active_dpp_per_ratio[0] == VAR_16->total_number_of_active_dpp_per_ratio[1]) && VAR_16->required_dispclk_per_ratio[0] <= 0.5 * VAR_16->required_dispclk_per_ratio[1]))))) {
  VAR_16->dispclk_dppclk_ratio = 1;
  VAR_16->final_error_message = VAR_16->error_message[0];
 }
 else {
  VAR_16->dispclk_dppclk_ratio = 2;
  VAR_16->final_error_message = VAR_16->error_message[1];
 }
 for (VAR_18 = 0; VAR_18 <= VAR_16->number_of_active_planes - 1; VAR_18++) {
  VAR_16->dpp_per_plane[VAR_18] = VAR_16->dpp_per_plane_per_ratio[VAR_16->dispclk_dppclk_ratio - 1][VAR_18];
 }
 for (VAR_18 = 0; VAR_18 <= VAR_16->number_of_active_planes - 1; VAR_18++) {
  if (VAR_16->source_pixel_format[VAR_18] == VAR_4) {
   VAR_16->byte_per_pix_dety = 8.0;
   VAR_16->byte_per_pix_detc = 0.0;
  }
  else if (VAR_16->source_pixel_format[VAR_18] == VAR_3) {
   VAR_16->byte_per_pix_dety = 4.0;
   VAR_16->byte_per_pix_detc = 0.0;
  }
  else if (VAR_16->source_pixel_format[VAR_18] == VAR_2) {
   VAR_16->byte_per_pix_dety = 2.0;
   VAR_16->byte_per_pix_detc = 0.0;
  }
  else if (VAR_16->source_pixel_format[VAR_18] == VAR_15) {
   VAR_16->byte_per_pix_dety = 1.0;
   VAR_16->byte_per_pix_detc = 2.0;
  }
  else {
   VAR_16->byte_per_pix_dety = 4.0f / 3.0f;
   VAR_16->byte_per_pix_detc = 8.0f / 3.0f;
  }
  if ((VAR_16->source_pixel_format[VAR_18] == VAR_4 || VAR_16->source_pixel_format[VAR_18] == VAR_3 || VAR_16->source_pixel_format[VAR_18] == VAR_2)) {
   if (VAR_16->source_surface_mode[VAR_18] == VAR_10) {
    VAR_16->read256_bytes_block_height_y = 1.0;
   }
   else if (VAR_16->source_pixel_format[VAR_18] == VAR_4) {
    VAR_16->read256_bytes_block_height_y = 4.0;
   }
   else {
    VAR_16->read256_bytes_block_height_y = 8.0;
   }
   VAR_16->read256_bytes_block_width_y = 256.0 /FUNC_0(VAR_16->byte_per_pix_dety, 1.0) / VAR_16->read256_bytes_block_height_y;
   VAR_16->read256_bytes_block_height_c = 0.0;
   VAR_16->read256_bytes_block_width_c = 0.0;
  }
  else {
   if (VAR_16->source_surface_mode[VAR_18] == VAR_10) {
    VAR_16->read256_bytes_block_height_y = 1.0;
    VAR_16->read256_bytes_block_height_c = 1.0;
   }
   else if (VAR_16->source_pixel_format[VAR_18] == VAR_15) {
    VAR_16->read256_bytes_block_height_y = 16.0;
    VAR_16->read256_bytes_block_height_c = 8.0;
   }
   else {
    VAR_16->read256_bytes_block_height_y = 8.0;
    VAR_16->read256_bytes_block_height_c = 8.0;
   }
   VAR_16->read256_bytes_block_width_y = 256.0 /FUNC_0(VAR_16->byte_per_pix_dety, 1.0) / VAR_16->read256_bytes_block_height_y;
   VAR_16->read256_bytes_block_width_c = 256.0 /FUNC_0(VAR_16->byte_per_pix_detc, 2.0) / VAR_16->read256_bytes_block_height_c;
  }
  if (VAR_16->source_scan[VAR_18] == VAR_0) {
   VAR_16->maximum_swath_height_y = VAR_16->read256_bytes_block_height_y;
   VAR_16->maximum_swath_height_c = VAR_16->read256_bytes_block_height_c;
  }
  else {
   VAR_16->maximum_swath_height_y = VAR_16->read256_bytes_block_width_y;
   VAR_16->maximum_swath_height_c = VAR_16->read256_bytes_block_width_c;
  }
  if ((VAR_16->source_pixel_format[VAR_18] == VAR_4 || VAR_16->source_pixel_format[VAR_18] == VAR_3 || VAR_16->source_pixel_format[VAR_18] == VAR_2)) {
   if (VAR_16->source_surface_mode[VAR_18] == VAR_10 || (VAR_16->source_pixel_format[VAR_18] == VAR_4 && (VAR_16->source_surface_mode[VAR_18] == VAR_5 || VAR_16->source_surface_mode[VAR_18] == VAR_6 || VAR_16->source_surface_mode[VAR_18] == VAR_7 || VAR_16->source_surface_mode[VAR_18] == VAR_8 || VAR_16->source_surface_mode[VAR_18] == VAR_9 || VAR_16->source_surface_mode[VAR_18] == VAR_11 || VAR_16->source_surface_mode[VAR_18] == VAR_12) && VAR_16->source_scan[VAR_18] == VAR_0)) {
    VAR_16->minimum_swath_height_y = VAR_16->maximum_swath_height_y;
   }
   else {
    VAR_16->minimum_swath_height_y = VAR_16->maximum_swath_height_y / 2.0;
   }
   VAR_16->minimum_swath_height_c = VAR_16->maximum_swath_height_c;
  }
  else {
   if (VAR_16->source_surface_mode[VAR_18] == VAR_10) {
    VAR_16->minimum_swath_height_y = VAR_16->maximum_swath_height_y;
    VAR_16->minimum_swath_height_c = VAR_16->maximum_swath_height_c;
   }
   else if (VAR_16->source_pixel_format[VAR_18] == VAR_15 && VAR_16->source_scan[VAR_18] == VAR_0) {
    VAR_16->minimum_swath_height_y = VAR_16->maximum_swath_height_y / 2.0;
    if (VAR_16->bug_forcing_luma_and_chroma_request_to_same_size_fixed == VAR_13) {
     VAR_16->minimum_swath_height_c = VAR_16->maximum_swath_height_c;
    }
    else {
     VAR_16->minimum_swath_height_c = VAR_16->maximum_swath_height_c / 2.0;
    }
   }
   else if (VAR_16->source_pixel_format[VAR_18] == VAR_14 && VAR_16->source_scan[VAR_18] == VAR_0) {
    VAR_16->minimum_swath_height_c = VAR_16->maximum_swath_height_c / 2.0;
    if (VAR_16->bug_forcing_luma_and_chroma_request_to_same_size_fixed == VAR_13) {
     VAR_16->minimum_swath_height_y = VAR_16->maximum_swath_height_y;
    }
    else {
     VAR_16->minimum_swath_height_y = VAR_16->maximum_swath_height_y / 2.0;
    }
   }
   else {
    VAR_16->minimum_swath_height_y = VAR_16->maximum_swath_height_y;
    VAR_16->minimum_swath_height_c = VAR_16->maximum_swath_height_c;
   }
  }
  if (VAR_16->source_scan[VAR_18] == VAR_0) {
   VAR_16->swath_width = VAR_16->viewport_width[VAR_18] / VAR_16->dpp_per_plane[VAR_18];
  }
  else {
   VAR_16->swath_width = VAR_16->viewport_height[VAR_18] / VAR_16->dpp_per_plane[VAR_18];
  }
  VAR_16->swath_width_granularity_y = 256.0 /FUNC_0(VAR_16->byte_per_pix_dety, 1.0) / VAR_16->maximum_swath_height_y;
  VAR_16->rounded_up_max_swath_size_bytes_y = (FUNC_0(VAR_16->swath_width - 1.0, VAR_16->swath_width_granularity_y) + VAR_16->swath_width_granularity_y) * VAR_16->byte_per_pix_dety * VAR_16->maximum_swath_height_y;
  if (VAR_16->source_pixel_format[VAR_18] == VAR_14) {
   VAR_16->rounded_up_max_swath_size_bytes_y =FUNC_0(VAR_16->rounded_up_max_swath_size_bytes_y, 256.0) + 256;
  }
  if (VAR_16->maximum_swath_height_c > 0.0) {
   VAR_16->swath_width_granularity_c = 256.0 /FUNC_0(VAR_16->byte_per_pix_detc, 2.0) / VAR_16->maximum_swath_height_c;
  }
  VAR_16->rounded_up_max_swath_size_bytes_c = (FUNC_0(VAR_16->swath_width / 2.0 - 1.0, VAR_16->swath_width_granularity_c) + VAR_16->swath_width_granularity_c) * VAR_16->byte_per_pix_detc * VAR_16->maximum_swath_height_c;
  if (VAR_16->source_pixel_format[VAR_18] == VAR_14) {
   VAR_16->rounded_up_max_swath_size_bytes_c =FUNC_0(VAR_16->rounded_up_max_swath_size_bytes_c, 256.0) + 256;
  }
  if (VAR_16->rounded_up_max_swath_size_bytes_y + VAR_16->rounded_up_max_swath_size_bytes_c <= VAR_16->det_buffer_size_in_kbyte * 1024.0 / 2.0) {
   VAR_16->swath_height_y[VAR_18] = VAR_16->maximum_swath_height_y;
   VAR_16->swath_height_c[VAR_18] = VAR_16->maximum_swath_height_c;
  }
  else {
   VAR_16->swath_height_y[VAR_18] = VAR_16->minimum_swath_height_y;
   VAR_16->swath_height_c[VAR_18] = VAR_16->minimum_swath_height_c;
  }
  if (VAR_16->swath_height_c[VAR_18] == 0.0) {
   VAR_16->det_buffer_size_y[VAR_18] = VAR_16->det_buffer_size_in_kbyte * 1024.0;
   VAR_16->det_buffer_size_c[VAR_18] = 0.0;
  }
  else if (VAR_16->swath_height_y[VAR_18] <= VAR_16->swath_height_c[VAR_18]) {
   VAR_16->det_buffer_size_y[VAR_18] = VAR_16->det_buffer_size_in_kbyte * 1024.0 / 2.0;
   VAR_16->det_buffer_size_c[VAR_18] = VAR_16->det_buffer_size_in_kbyte * 1024.0 / 2.0;
  }
  else {
   VAR_16->det_buffer_size_y[VAR_18] = VAR_16->det_buffer_size_in_kbyte * 1024.0 * 2.0 / 3.0;
   VAR_16->det_buffer_size_c[VAR_18] = VAR_16->det_buffer_size_in_kbyte * 1024.0 / 3.0;
  }
 }
}
