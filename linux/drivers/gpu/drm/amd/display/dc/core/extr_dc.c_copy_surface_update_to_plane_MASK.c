
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dc_transfer_func_distributed_points {int dummy; } ;
struct dc_surface_update {int * coeff_reduction_factor; int * input_csc_color_matrix; int * blend_tf; int * lut3d_func; int * func_shaper; TYPE_6__* in_transfer_func; TYPE_5__* gamma; TYPE_4__* plane_info; TYPE_3__* scaling_info; TYPE_1__* flip_addr; } ;
struct TYPE_8__ {size_t index; scalar_t__ prev_update_time_in_us; scalar_t__* time_elapsed_in_us; } ;
struct dc_plane_state {int coeff_reduction_factor; int input_csc_color_matrix; int * blend_tf; int * lut3d_func; int * in_shaper_func; TYPE_6__* in_transfer_func; TYPE_5__* gamma_correction; int layer_index; int sdr_white_level; int dcc; int global_alpha_value; int global_alpha; int per_pixel_alpha; int visible; int tiling_info; int stereo_format; int horizontal_mirror; int rotation; int plane_size; int format; int color_space; int clip_rect; int src_rect; int dst_rect; int scaling_quality; TYPE_2__ time; int flip_immediate; int address; } ;
struct dc_gamma_entries {int dummy; } ;
struct TYPE_12__ {int tf_pts; int type; int tf; int sdr_ref_white_level; } ;
struct TYPE_11__ {int type; int num_entries; int is_identity; int entries; } ;
struct TYPE_10__ {int layer_index; int sdr_white_level; int dcc; int global_alpha_value; int global_alpha; int per_pixel_alpha; int visible; int tiling_info; int stereo_format; int horizontal_mirror; int rotation; int plane_size; int format; int color_space; } ;
struct TYPE_9__ {int clip_rect; int src_rect; int dst_rect; int scaling_quality; } ;
struct TYPE_7__ {scalar_t__ flip_timestamp_in_us; int flip_immediate; int address; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(
  struct dc_plane_state *VAR_1,
  struct dc_surface_update *VAR_2)
{
 if (VAR_2->flip_addr) {
  VAR_1->address = VAR_2->flip_addr->address;
  VAR_1->flip_immediate =
   VAR_2->flip_addr->flip_immediate;
  VAR_1->time.time_elapsed_in_us[VAR_1->time.index] =
   VAR_2->flip_addr->flip_timestamp_in_us -
    VAR_1->time.prev_update_time_in_us;
  VAR_1->time.prev_update_time_in_us =
   VAR_2->flip_addr->flip_timestamp_in_us;
  VAR_1->time.index++;
  if (VAR_1->time.index >= VAR_0)
   VAR_1->time.index = 0;
 }

 if (VAR_2->scaling_info) {
  VAR_1->scaling_quality =
    VAR_2->scaling_info->scaling_quality;
  VAR_1->dst_rect =
    VAR_2->scaling_info->dst_rect;
  VAR_1->src_rect =
    VAR_2->scaling_info->src_rect;
  VAR_1->clip_rect =
    VAR_2->scaling_info->clip_rect;
 }

 if (VAR_2->plane_info) {
  VAR_1->color_space =
    VAR_2->plane_info->color_space;
  VAR_1->format =
    VAR_2->plane_info->format;
  VAR_1->plane_size =
    VAR_2->plane_info->plane_size;
  VAR_1->rotation =
    VAR_2->plane_info->rotation;
  VAR_1->horizontal_mirror =
    VAR_2->plane_info->horizontal_mirror;
  VAR_1->stereo_format =
    VAR_2->plane_info->stereo_format;
  VAR_1->tiling_info =
    VAR_2->plane_info->tiling_info;
  VAR_1->visible =
    VAR_2->plane_info->visible;
  VAR_1->per_pixel_alpha =
    VAR_2->plane_info->per_pixel_alpha;
  VAR_1->global_alpha =
    VAR_2->plane_info->global_alpha;
  VAR_1->global_alpha_value =
    VAR_2->plane_info->global_alpha_value;
  VAR_1->dcc =
    VAR_2->plane_info->dcc;
  VAR_1->sdr_white_level =
    VAR_2->plane_info->sdr_white_level;
  VAR_1->layer_index =
    VAR_2->plane_info->layer_index;
 }

 if (VAR_2->gamma &&
   (VAR_1->gamma_correction !=
     VAR_2->gamma)) {
  FUNC_0(&VAR_1->gamma_correction->entries,
   &VAR_2->gamma->entries,
   sizeof(struct dc_gamma_entries));
  VAR_1->gamma_correction->is_identity =
   VAR_2->gamma->is_identity;
  VAR_1->gamma_correction->num_entries =
   VAR_2->gamma->num_entries;
  VAR_1->gamma_correction->type =
   VAR_2->gamma->type;
 }

 if (VAR_2->in_transfer_func &&
   (VAR_1->in_transfer_func !=
    VAR_2->in_transfer_func)) {
  VAR_1->in_transfer_func->sdr_ref_white_level =
   VAR_2->in_transfer_func->sdr_ref_white_level;
  VAR_1->in_transfer_func->tf =
   VAR_2->in_transfer_func->tf;
  VAR_1->in_transfer_func->type =
   VAR_2->in_transfer_func->type;
  FUNC_0(&VAR_1->in_transfer_func->tf_pts,
   &VAR_2->in_transfer_func->tf_pts,
   sizeof(struct dc_transfer_func_distributed_points));
 }
 if (VAR_2->input_csc_color_matrix)
  VAR_1->input_csc_color_matrix =
   *VAR_2->input_csc_color_matrix;

 if (VAR_2->coeff_reduction_factor)
  VAR_1->coeff_reduction_factor =
   *VAR_2->coeff_reduction_factor;
}
