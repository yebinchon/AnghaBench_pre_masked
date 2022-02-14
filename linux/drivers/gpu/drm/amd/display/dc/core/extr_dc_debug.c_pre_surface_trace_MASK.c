
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_20__ {int swizzle; } ;
struct TYPE_18__ {int array_mode; int pipe_config; int tile_mode_c; int tile_mode; int tile_split_c; int tile_split; int tile_aspect_c; int tile_aspect; int bank_height_c; int bank_height; int bank_width_c; int bank_width; int num_banks; } ;
struct TYPE_21__ {TYPE_14__ gfx9; TYPE_12__ gfx8; } ;
struct TYPE_19__ {int enable; } ;
struct TYPE_16__ {int height; int width; int y; int x; } ;
struct TYPE_17__ {int surface_pitch; TYPE_10__ surface_size; } ;
struct TYPE_30__ {int height; int width; int y; int x; } ;
struct TYPE_29__ {int height; int width; int y; int x; } ;
struct TYPE_28__ {int height; int width; int y; int x; } ;
struct TYPE_27__ {int v_taps_c; int h_taps_c; int v_taps; int h_taps; } ;
struct TYPE_24__ {int quad_part; } ;
struct TYPE_23__ {int quad_part; } ;
struct TYPE_25__ {TYPE_3__ meta_addr; TYPE_2__ addr; } ;
struct TYPE_26__ {TYPE_4__ grph; int type; } ;
struct dc_plane_state {TYPE_15__ tiling_info; int stereo_format; int rotation; int format; TYPE_13__ dcc; int color_space; TYPE_11__ plane_size; TYPE_9__ clip_rect; TYPE_8__ dst_rect; TYPE_7__ src_rect; TYPE_6__ scaling_quality; TYPE_5__ address; int flip_immediate; int visible; } ;
struct dc {TYPE_1__* ctx; } ;
struct TYPE_22__ {int logger; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(
  struct dc *VAR_0,
  const struct dc_plane_state *const *VAR_1,
  int VAR_2)
{
 int VAR_3;
 FUNC_0(VAR_0->ctx->logger);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  const struct dc_plane_state *VAR_4 = VAR_1[VAR_3];

  FUNC_1("Planes %d:\n", VAR_3);

  FUNC_1(
    "plane_state->visible = %d;\n"
    "plane_state->flip_immediate = %d;\n"
    "plane_state->address.type = %d;\n"
    "plane_state->address.grph.addr.quad_part = 0x%llX;\n"
    "plane_state->address.grph.meta_addr.quad_part = 0x%llX;\n"
    "plane_state->scaling_quality.h_taps = %d;\n"
    "plane_state->scaling_quality.v_taps = %d;\n"
    "plane_state->scaling_quality.h_taps_c = %d;\n"
    "plane_state->scaling_quality.v_taps_c = %d;\n",
    VAR_4->visible,
    VAR_4->flip_immediate,
    VAR_4->address.type,
    VAR_4->address.grph.addr.quad_part,
    VAR_4->address.grph.meta_addr.quad_part,
    VAR_4->scaling_quality.h_taps,
    VAR_4->scaling_quality.v_taps,
    VAR_4->scaling_quality.h_taps_c,
    VAR_4->scaling_quality.v_taps_c);

  FUNC_1(
    "plane_state->src_rect.x = %d;\n"
    "plane_state->src_rect.y = %d;\n"
    "plane_state->src_rect.width = %d;\n"
    "plane_state->src_rect.height = %d;\n"
    "plane_state->dst_rect.x = %d;\n"
    "plane_state->dst_rect.y = %d;\n"
    "plane_state->dst_rect.width = %d;\n"
    "plane_state->dst_rect.height = %d;\n"
    "plane_state->clip_rect.x = %d;\n"
    "plane_state->clip_rect.y = %d;\n"
    "plane_state->clip_rect.width = %d;\n"
    "plane_state->clip_rect.height = %d;\n",
    VAR_4->src_rect.x,
    VAR_4->src_rect.y,
    VAR_4->src_rect.width,
    VAR_4->src_rect.height,
    VAR_4->dst_rect.x,
    VAR_4->dst_rect.y,
    VAR_4->dst_rect.width,
    VAR_4->dst_rect.height,
    VAR_4->clip_rect.x,
    VAR_4->clip_rect.y,
    VAR_4->clip_rect.width,
    VAR_4->clip_rect.height);

  FUNC_1(
    "plane_state->plane_size.surface_size.x = %d;\n"
    "plane_state->plane_size.surface_size.y = %d;\n"
    "plane_state->plane_size.surface_size.width = %d;\n"
    "plane_state->plane_size.surface_size.height = %d;\n"
    "plane_state->plane_size.surface_pitch = %d;\n",
    VAR_4->plane_size.surface_size.x,
    VAR_4->plane_size.surface_size.y,
    VAR_4->plane_size.surface_size.width,
    VAR_4->plane_size.surface_size.height,
    VAR_4->plane_size.surface_pitch);


  FUNC_1(
    "plane_state->tiling_info.gfx8.num_banks = %d;\n"
    "plane_state->tiling_info.gfx8.bank_width = %d;\n"
    "plane_state->tiling_info.gfx8.bank_width_c = %d;\n"
    "plane_state->tiling_info.gfx8.bank_height = %d;\n"
    "plane_state->tiling_info.gfx8.bank_height_c = %d;\n"
    "plane_state->tiling_info.gfx8.tile_aspect = %d;\n"
    "plane_state->tiling_info.gfx8.tile_aspect_c = %d;\n"
    "plane_state->tiling_info.gfx8.tile_split = %d;\n"
    "plane_state->tiling_info.gfx8.tile_split_c = %d;\n"
    "plane_state->tiling_info.gfx8.tile_mode = %d;\n"
    "plane_state->tiling_info.gfx8.tile_mode_c = %d;\n",
    VAR_4->tiling_info.gfx8.num_banks,
    VAR_4->tiling_info.gfx8.bank_width,
    VAR_4->tiling_info.gfx8.bank_width_c,
    VAR_4->tiling_info.gfx8.bank_height,
    VAR_4->tiling_info.gfx8.bank_height_c,
    VAR_4->tiling_info.gfx8.tile_aspect,
    VAR_4->tiling_info.gfx8.tile_aspect_c,
    VAR_4->tiling_info.gfx8.tile_split,
    VAR_4->tiling_info.gfx8.tile_split_c,
    VAR_4->tiling_info.gfx8.tile_mode,
    VAR_4->tiling_info.gfx8.tile_mode_c);

  FUNC_1(
    "plane_state->tiling_info.gfx8.pipe_config = %d;\n"
    "plane_state->tiling_info.gfx8.array_mode = %d;\n"
    "plane_state->color_space = %d;\n"
    "plane_state->dcc.enable = %d;\n"
    "plane_state->format = %d;\n"
    "plane_state->rotation = %d;\n"
    "plane_state->stereo_format = %d;\n",
    VAR_4->tiling_info.gfx8.pipe_config,
    VAR_4->tiling_info.gfx8.array_mode,
    VAR_4->color_space,
    VAR_4->dcc.enable,
    VAR_4->format,
    VAR_4->rotation,
    VAR_4->stereo_format);

  FUNC_1("plane_state->tiling_info.gfx9.swizzle = %d;\n",
    VAR_4->tiling_info.gfx9.swizzle);

  FUNC_1("\n");
 }
 FUNC_1("\n");
}
