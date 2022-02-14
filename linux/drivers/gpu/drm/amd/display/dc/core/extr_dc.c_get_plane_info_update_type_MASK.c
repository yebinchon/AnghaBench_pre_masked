
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {int color_space_change; int horizontal_mirror_change; int rotation_change; int pixel_format_change; int stereo_format_change; int per_pixel_alpha_change; int global_alpha_change; int sdr_white_level; int dcc_change; int bpp_change; int plane_size_change; int swizzle_change; int bandwidth_change; } ;
union surface_update_flags {TYPE_8__ bits; } ;
typedef union dc_tiling_info {int dummy; } dc_tiling_info ;
struct dc_surface_update {TYPE_7__* plane_info; TYPE_5__* surface; } ;
typedef enum surface_update_type { ____Placeholder_surface_update_type } surface_update_type ;
struct TYPE_15__ {scalar_t__ swizzle; } ;
struct TYPE_18__ {TYPE_6__ gfx9; } ;
struct TYPE_12__ {scalar_t__ surface_pitch; scalar_t__ chroma_pitch; } ;
struct TYPE_10__ {scalar_t__ enable; scalar_t__ independent_64b_blks; scalar_t__ meta_pitch; } ;
struct TYPE_16__ {scalar_t__ color_space; scalar_t__ horizontal_mirror; scalar_t__ rotation; scalar_t__ format; scalar_t__ stereo_format; scalar_t__ per_pixel_alpha; scalar_t__ global_alpha_value; scalar_t__ sdr_white_level; TYPE_9__ tiling_info; TYPE_3__ plane_size; TYPE_1__ dcc; } ;
struct TYPE_13__ {scalar_t__ surface_pitch; scalar_t__ chroma_pitch; } ;
struct TYPE_11__ {scalar_t__ enable; scalar_t__ independent_64b_blks; scalar_t__ meta_pitch; } ;
struct TYPE_14__ {scalar_t__ color_space; scalar_t__ horizontal_mirror; scalar_t__ rotation; scalar_t__ format; scalar_t__ stereo_format; scalar_t__ per_pixel_alpha; scalar_t__ global_alpha_value; scalar_t__ sdr_white_level; int tiling_info; TYPE_4__ plane_size; TYPE_2__ dcc; union surface_update_flags update_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int ) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int *,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static enum surface_update_type FUNC_3(const struct dc_surface_update *VAR_4)
{
 union surface_update_flags *VAR_5 = &VAR_4->surface->update_flags;
 enum surface_update_type VAR_6 = VAR_1;

 if (!VAR_4->plane_info)
  return VAR_1;

 if (VAR_4->plane_info->color_space != VAR_4->surface->color_space) {
  VAR_5->bits.color_space_change = 1;
  FUNC_0(&VAR_6, VAR_3);
 }

 if (VAR_4->plane_info->horizontal_mirror != VAR_4->surface->horizontal_mirror) {
  VAR_5->bits.horizontal_mirror_change = 1;
  FUNC_0(&VAR_6, VAR_3);
 }

 if (VAR_4->plane_info->rotation != VAR_4->surface->rotation) {
  VAR_5->bits.rotation_change = 1;
  FUNC_0(&VAR_6, VAR_2);
 }

 if (VAR_4->plane_info->format != VAR_4->surface->format) {
  VAR_5->bits.pixel_format_change = 1;
  FUNC_0(&VAR_6, VAR_2);
 }

 if (VAR_4->plane_info->stereo_format != VAR_4->surface->stereo_format) {
  VAR_5->bits.stereo_format_change = 1;
  FUNC_0(&VAR_6, VAR_2);
 }

 if (VAR_4->plane_info->per_pixel_alpha != VAR_4->surface->per_pixel_alpha) {
  VAR_5->bits.per_pixel_alpha_change = 1;
  FUNC_0(&VAR_6, VAR_3);
 }

 if (VAR_4->plane_info->global_alpha_value != VAR_4->surface->global_alpha_value) {
  VAR_5->bits.global_alpha_change = 1;
  FUNC_0(&VAR_6, VAR_3);
 }

 if (VAR_4->plane_info->sdr_white_level != VAR_4->surface->sdr_white_level) {
  VAR_5->bits.sdr_white_level = 1;
  FUNC_0(&VAR_6, VAR_3);
 }

 if (VAR_4->plane_info->dcc.enable != VAR_4->surface->dcc.enable
   || VAR_4->plane_info->dcc.independent_64b_blks != VAR_4->surface->dcc.independent_64b_blks
   || VAR_4->plane_info->dcc.meta_pitch != VAR_4->surface->dcc.meta_pitch) {
  VAR_5->bits.dcc_change = 1;
  FUNC_0(&VAR_6, VAR_3);
 }

 if (FUNC_2(VAR_4->plane_info->format) !=
   FUNC_2(VAR_4->surface->format)) {



  VAR_5->bits.bpp_change = 1;
  FUNC_0(&VAR_6, VAR_2);
 }

 if (VAR_4->plane_info->plane_size.surface_pitch != VAR_4->surface->plane_size.surface_pitch
   || VAR_4->plane_info->plane_size.surface_pitch != VAR_4->surface->plane_size.surface_pitch
   || VAR_4->plane_info->plane_size.chroma_pitch != VAR_4->surface->plane_size.chroma_pitch) {
  VAR_5->bits.plane_size_change = 1;
  FUNC_0(&VAR_6, VAR_3);
 }


 if (FUNC_1(&VAR_4->plane_info->tiling_info, &VAR_4->surface->tiling_info,
   sizeof(union dc_tiling_info)) != 0) {
  VAR_5->bits.swizzle_change = 1;
  FUNC_0(&VAR_6, VAR_3);




  if (VAR_4->plane_info->tiling_info.gfx9.swizzle != VAR_0) {



   VAR_5->bits.bandwidth_change = 1;
   FUNC_0(&VAR_6, VAR_2);
  }
 }


 return VAR_6;
}
