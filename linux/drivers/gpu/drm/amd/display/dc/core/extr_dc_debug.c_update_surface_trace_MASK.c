
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct dc_surface_update {TYPE_17__* scaling_info; TYPE_12__* plane_info; TYPE_6__* flip_addr; } ;
struct dc {TYPE_1__* ctx; } ;
struct TYPE_34__ {int array_mode; int pipe_config; int tile_mode_c; int tile_mode; int tile_split_c; int tile_split; int tile_aspect_c; int tile_aspect; int bank_height_c; int bank_height; int bank_width_c; int bank_width; int num_banks; } ;
struct TYPE_32__ {int y; int x; int width; int height; } ;
struct TYPE_33__ {TYPE_7__ surface_size; int surface_pitch; } ;
struct TYPE_28__ {int quad_part; } ;
struct TYPE_27__ {int quad_part; } ;
struct TYPE_29__ {TYPE_3__ meta_addr; TYPE_2__ addr; } ;
struct TYPE_30__ {TYPE_4__ grph; int type; } ;
struct TYPE_31__ {int flip_immediate; TYPE_5__ address; } ;
struct TYPE_26__ {int logger; } ;
struct TYPE_24__ {int v_taps_c; int h_taps_c; int v_taps; int h_taps; } ;
struct TYPE_23__ {int height; int width; int y; int x; } ;
struct TYPE_22__ {int height; int width; int y; int x; } ;
struct TYPE_21__ {int height; int width; int y; int x; } ;
struct TYPE_25__ {TYPE_16__ scaling_quality; TYPE_15__ clip_rect; TYPE_14__ dst_rect; TYPE_13__ src_rect; } ;
struct TYPE_18__ {int swizzle; } ;
struct TYPE_19__ {TYPE_10__ gfx9; TYPE_9__ gfx8; } ;
struct TYPE_20__ {TYPE_11__ tiling_info; int per_pixel_alpha; int visible; int stereo_format; int rotation; TYPE_8__ plane_size; int format; int color_space; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(
  struct dc *VAR_0,
  const struct dc_surface_update *VAR_1,
  int VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0->ctx->logger);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  const struct dc_surface_update *VAR_4 = &VAR_1[VAR_3];

  FUNC_1("Update %d\n", VAR_3);
  if (VAR_4->flip_addr) {
   FUNC_1("flip_addr->address.type = %d;\n"
     "flip_addr->address.grph.addr.quad_part = 0x%llX;\n"
     "flip_addr->address.grph.meta_addr.quad_part = 0x%llX;\n"
     "flip_addr->flip_immediate = %d;\n",
     VAR_4->flip_addr->address.type,
     VAR_4->flip_addr->address.grph.addr.quad_part,
     VAR_4->flip_addr->address.grph.meta_addr.quad_part,
     VAR_4->flip_addr->flip_immediate);
  }

  if (VAR_4->plane_info) {
   FUNC_1(
     "plane_info->color_space = %d;\n"
     "plane_info->format = %d;\n"
     "plane_info->plane_size.surface_pitch = %d;\n"
     "plane_info->plane_size.surface_size.height = %d;\n"
     "plane_info->plane_size.surface_size.width = %d;\n"
     "plane_info->plane_size.surface_size.x = %d;\n"
     "plane_info->plane_size.surface_size.y = %d;\n"
     "plane_info->rotation = %d;\n"
     "plane_info->stereo_format = %d;\n",
     VAR_4->plane_info->color_space,
     VAR_4->plane_info->format,
     VAR_4->plane_info->plane_size.surface_pitch,
     VAR_4->plane_info->plane_size.surface_size.height,
     VAR_4->plane_info->plane_size.surface_size.width,
     VAR_4->plane_info->plane_size.surface_size.x,
     VAR_4->plane_info->plane_size.surface_size.y,
     VAR_4->plane_info->rotation,
     VAR_4->plane_info->stereo_format);

   FUNC_1(
     "plane_info->tiling_info.gfx8.num_banks = %d;\n"
     "plane_info->tiling_info.gfx8.bank_width = %d;\n"
     "plane_info->tiling_info.gfx8.bank_width_c = %d;\n"
     "plane_info->tiling_info.gfx8.bank_height = %d;\n"
     "plane_info->tiling_info.gfx8.bank_height_c = %d;\n"
     "plane_info->tiling_info.gfx8.tile_aspect = %d;\n"
     "plane_info->tiling_info.gfx8.tile_aspect_c = %d;\n"
     "plane_info->tiling_info.gfx8.tile_split = %d;\n"
     "plane_info->tiling_info.gfx8.tile_split_c = %d;\n"
     "plane_info->tiling_info.gfx8.tile_mode = %d;\n"
     "plane_info->tiling_info.gfx8.tile_mode_c = %d;\n",
     VAR_4->plane_info->tiling_info.gfx8.num_banks,
     VAR_4->plane_info->tiling_info.gfx8.bank_width,
     VAR_4->plane_info->tiling_info.gfx8.bank_width_c,
     VAR_4->plane_info->tiling_info.gfx8.bank_height,
     VAR_4->plane_info->tiling_info.gfx8.bank_height_c,
     VAR_4->plane_info->tiling_info.gfx8.tile_aspect,
     VAR_4->plane_info->tiling_info.gfx8.tile_aspect_c,
     VAR_4->plane_info->tiling_info.gfx8.tile_split,
     VAR_4->plane_info->tiling_info.gfx8.tile_split_c,
     VAR_4->plane_info->tiling_info.gfx8.tile_mode,
     VAR_4->plane_info->tiling_info.gfx8.tile_mode_c);

   FUNC_1(
     "plane_info->tiling_info.gfx8.pipe_config = %d;\n"
     "plane_info->tiling_info.gfx8.array_mode = %d;\n"
     "plane_info->visible = %d;\n"
     "plane_info->per_pixel_alpha = %d;\n",
     VAR_4->plane_info->tiling_info.gfx8.pipe_config,
     VAR_4->plane_info->tiling_info.gfx8.array_mode,
     VAR_4->plane_info->visible,
     VAR_4->plane_info->per_pixel_alpha);

   FUNC_1("surface->tiling_info.gfx9.swizzle = %d;\n",
     VAR_4->plane_info->tiling_info.gfx9.swizzle);
  }

  if (VAR_4->scaling_info) {
   FUNC_1(
     "scaling_info->src_rect.x = %d;\n"
     "scaling_info->src_rect.y = %d;\n"
     "scaling_info->src_rect.width = %d;\n"
     "scaling_info->src_rect.height = %d;\n"
     "scaling_info->dst_rect.x = %d;\n"
     "scaling_info->dst_rect.y = %d;\n"
     "scaling_info->dst_rect.width = %d;\n"
     "scaling_info->dst_rect.height = %d;\n"
     "scaling_info->clip_rect.x = %d;\n"
     "scaling_info->clip_rect.y = %d;\n"
     "scaling_info->clip_rect.width = %d;\n"
     "scaling_info->clip_rect.height = %d;\n"
     "scaling_info->scaling_quality.h_taps = %d;\n"
     "scaling_info->scaling_quality.v_taps = %d;\n"
     "scaling_info->scaling_quality.h_taps_c = %d;\n"
     "scaling_info->scaling_quality.v_taps_c = %d;\n",
     VAR_4->scaling_info->src_rect.x,
     VAR_4->scaling_info->src_rect.y,
     VAR_4->scaling_info->src_rect.width,
     VAR_4->scaling_info->src_rect.height,
     VAR_4->scaling_info->dst_rect.x,
     VAR_4->scaling_info->dst_rect.y,
     VAR_4->scaling_info->dst_rect.width,
     VAR_4->scaling_info->dst_rect.height,
     VAR_4->scaling_info->clip_rect.x,
     VAR_4->scaling_info->clip_rect.y,
     VAR_4->scaling_info->clip_rect.width,
     VAR_4->scaling_info->clip_rect.height,
     VAR_4->scaling_info->scaling_quality.h_taps,
     VAR_4->scaling_info->scaling_quality.v_taps,
     VAR_4->scaling_info->scaling_quality.h_taps_c,
     VAR_4->scaling_info->scaling_quality.v_taps_c);
  }
  FUNC_1("\n");
 }
 FUNC_1("\n");
}
