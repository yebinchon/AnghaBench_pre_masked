
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_22__ {int shaderEnable; void* swizzle; int num_rb_per_se; int max_compressed_frags; int num_shader_engines; int pipe_interleave; int num_banks; int num_pipes; } ;
struct TYPE_18__ {unsigned int num_banks; unsigned int tile_split; unsigned int bank_width; unsigned int bank_height; unsigned int tile_aspect; void* pipe_config; void* array_mode; int tile_mode; } ;
struct TYPE_16__ {void* high_part; void* low_part; } ;
struct TYPE_15__ {void* high_part; void* low_part; } ;
struct TYPE_17__ {TYPE_12__ chroma_addr; TYPE_11__ luma_addr; } ;
struct TYPE_26__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_25__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_23__ {void* high_part; void* low_part; } ;
struct TYPE_24__ {TYPE_6__ addr; } ;
union dc_tiling_info {int surface_pitch; int chroma_pitch; TYPE_5__ gfx9; TYPE_1__ gfx8; TYPE_13__ video_progressive; int type; TYPE_9__ chroma_size; TYPE_8__ surface_size; TYPE_7__ grph; } ;
typedef scalar_t__ uint64_t ;
struct plane_size {int surface_pitch; int chroma_pitch; TYPE_5__ gfx9; TYPE_1__ gfx8; TYPE_13__ video_progressive; int type; TYPE_9__ chroma_size; TYPE_8__ surface_size; TYPE_7__ grph; } ;
struct drm_framebuffer {int width; int height; int* pitches; TYPE_10__* format; scalar_t__* offsets; } ;
struct dc_plane_dcc_param {int surface_pitch; int chroma_pitch; TYPE_5__ gfx9; TYPE_1__ gfx8; TYPE_13__ video_progressive; int type; TYPE_9__ chroma_size; TYPE_8__ surface_size; TYPE_7__ grph; } ;
struct dc_plane_address {int surface_pitch; int chroma_pitch; TYPE_5__ gfx9; TYPE_1__ gfx8; TYPE_13__ video_progressive; int type; TYPE_9__ chroma_size; TYPE_8__ surface_size; TYPE_7__ grph; } ;
struct amdgpu_framebuffer {scalar_t__ address; struct drm_framebuffer base; } ;
struct TYPE_19__ {int num_rb_per_se; int max_compress_frags; int num_se; int pipe_interleave_size; int num_banks; int num_pipes; } ;
struct TYPE_20__ {TYPE_2__ gb_addr_config_fields; } ;
struct TYPE_21__ {TYPE_3__ config; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_4__ gfx; } ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;
struct TYPE_14__ {int* cpp; } ;


 void* FUNC_0 (scalar_t__ const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int const VAR_19 ;
 int const VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_framebuffer const*,int const,int const,union dc_tiling_info*,union dc_tiling_info*,scalar_t__ const,union dc_tiling_info*,union dc_tiling_info*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (union dc_tiling_info*,int ,int) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct amdgpu_device *VAR_23,
        const struct amdgpu_framebuffer *VAR_24,
        const enum surface_pixel_format VAR_25,
        const enum dc_rotation_angle VAR_26,
        const uint64_t VAR_27,
        union dc_tiling_info *VAR_28,
        struct plane_size *VAR_29,
        struct dc_plane_dcc_param *VAR_30,
        struct dc_plane_address *VAR_31)
{
 const struct drm_framebuffer *VAR_32 = &VAR_24->base;
 int VAR_33;

 FUNC_3(VAR_28, 0, sizeof(*VAR_28));
 FUNC_3(VAR_29, 0, sizeof(*VAR_29));
 FUNC_3(VAR_30, 0, sizeof(*VAR_30));
 FUNC_3(VAR_31, 0, sizeof(*VAR_31));

 if (VAR_25 < VAR_20) {
  VAR_29->surface_size.x = 0;
  VAR_29->surface_size.y = 0;
  VAR_29->surface_size.width = VAR_32->width;
  VAR_29->surface_size.height = VAR_32->height;
  VAR_29->surface_pitch =
   VAR_32->pitches[0] / VAR_32->format->cpp[0];

  VAR_31->type = VAR_17;
  VAR_31->grph.addr.low_part = FUNC_2(VAR_24->address);
  VAR_31->grph.addr.high_part = FUNC_4(VAR_24->address);
 } else if (VAR_25 < VAR_19) {
  uint64_t VAR_34 = VAR_24->address + VAR_32->offsets[1];

  VAR_29->surface_size.x = 0;
  VAR_29->surface_size.y = 0;
  VAR_29->surface_size.width = VAR_32->width;
  VAR_29->surface_size.height = VAR_32->height;
  VAR_29->surface_pitch =
   VAR_32->pitches[0] / VAR_32->format->cpp[0];

  VAR_29->chroma_size.x = 0;
  VAR_29->chroma_size.y = 0;

  VAR_29->chroma_size.width = VAR_32->width / 2;
  VAR_29->chroma_size.height = VAR_32->height / 2;

  VAR_29->chroma_pitch =
   VAR_32->pitches[1] / VAR_32->format->cpp[1];

  VAR_31->type = VAR_18;
  VAR_31->video_progressive.luma_addr.low_part =
   FUNC_2(VAR_24->address);
  VAR_31->video_progressive.luma_addr.high_part =
   FUNC_4(VAR_24->address);
  VAR_31->video_progressive.chroma_addr.low_part =
   FUNC_2(VAR_34);
  VAR_31->video_progressive.chroma_addr.high_part =
   FUNC_4(VAR_34);
 }


 if (FUNC_0(VAR_27, VAR_0) == VAR_13) {
  unsigned int VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;

  VAR_35 = FUNC_0(VAR_27, VAR_2);
  VAR_36 = FUNC_0(VAR_27, VAR_1);
  VAR_37 = FUNC_0(VAR_27, VAR_14);
  VAR_38 = FUNC_0(VAR_27, VAR_22);
  VAR_39 = FUNC_0(VAR_27, VAR_15);


  VAR_28->gfx8.num_banks = VAR_39;
  VAR_28->gfx8.array_mode =
    VAR_13;
  VAR_28->gfx8.tile_split = VAR_38;
  VAR_28->gfx8.bank_width = VAR_35;
  VAR_28->gfx8.bank_height = VAR_36;
  VAR_28->gfx8.tile_aspect = VAR_37;
  VAR_28->gfx8.tile_mode =
    VAR_11;
 } else if (FUNC_0(VAR_27, VAR_0)
   == VAR_12) {
  VAR_28->gfx8.array_mode = VAR_12;
 }

 VAR_28->gfx8.pipe_config =
   FUNC_0(VAR_27, VAR_16);

 if (VAR_23->asic_type == VAR_8 ||
     VAR_23->asic_type == VAR_9 ||
     VAR_23->asic_type == VAR_10 ||
     VAR_23->asic_type == VAR_6) {

  VAR_28->gfx9.num_pipes =
   VAR_23->gfx.config.gb_addr_config_fields.num_pipes;
  VAR_28->gfx9.num_banks =
   VAR_23->gfx.config.gb_addr_config_fields.num_banks;
  VAR_28->gfx9.pipe_interleave =
   VAR_23->gfx.config.gb_addr_config_fields.pipe_interleave_size;
  VAR_28->gfx9.num_shader_engines =
   VAR_23->gfx.config.gb_addr_config_fields.num_se;
  VAR_28->gfx9.max_compressed_frags =
   VAR_23->gfx.config.gb_addr_config_fields.max_compress_frags;
  VAR_28->gfx9.num_rb_per_se =
   VAR_23->gfx.config.gb_addr_config_fields.num_rb_per_se;
  VAR_28->gfx9.swizzle =
   FUNC_0(VAR_27, VAR_21);
  VAR_28->gfx9.shaderEnable = 1;

  VAR_33 = FUNC_1(VAR_23, VAR_24, VAR_25, VAR_26,
      VAR_29, VAR_28,
      VAR_27, VAR_30, VAR_31);
  if (VAR_33)
   return VAR_33;
 }

 return 0;
}
