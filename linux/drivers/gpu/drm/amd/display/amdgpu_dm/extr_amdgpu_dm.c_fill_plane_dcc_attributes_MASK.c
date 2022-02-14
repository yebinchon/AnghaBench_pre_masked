
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


struct TYPE_13__ {int swizzle; } ;
union dc_tiling_info {TYPE_4__ gfx9; } ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int height; int width; } ;
struct plane_size {TYPE_3__ surface_size; } ;
struct TYPE_15__ {scalar_t__ independent_64b_blks; } ;
struct TYPE_16__ {TYPE_6__ rgb; } ;
struct TYPE_11__ {int height; int width; } ;
struct dc_surface_dcc_cap {int format; TYPE_7__ grph; int capable; int scan; int swizzle_mode; TYPE_2__ surface_size; } ;
struct dc_plane_dcc_param {int enable; scalar_t__ independent_64b_blks; scalar_t__ meta_pitch; } ;
struct TYPE_17__ {int high_part; int low_part; } ;
struct TYPE_18__ {TYPE_8__ meta_addr; } ;
struct dc_plane_address {TYPE_9__ grph; } ;
struct dc_dcc_surface_param {int format; TYPE_7__ grph; int capable; int scan; int swizzle_mode; TYPE_2__ surface_size; } ;
struct TYPE_14__ {int (* get_dcc_compression_cap ) (struct dc*,struct dc_surface_dcc_cap*,struct dc_surface_dcc_cap*) ;} ;
struct dc {TYPE_5__ cap_funcs; } ;
struct amdgpu_framebuffer {int address; } ;
struct TYPE_10__ {struct dc* dc; } ;
struct amdgpu_device {TYPE_1__ dm; } ;
typedef int output ;
typedef int input ;
typedef enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;
typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;


 scalar_t__ FUNC_0 (int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int const VAR_10 ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dc_surface_dcc_cap*,int ,int) ;
 int FUNC_4 (struct dc*,struct dc_surface_dcc_cap*,struct dc_surface_dcc_cap*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct amdgpu_device *VAR_11,
     const struct amdgpu_framebuffer *VAR_12,
     const enum surface_pixel_format VAR_13,
     const enum dc_rotation_angle VAR_14,
     const struct plane_size *VAR_15,
     const union dc_tiling_info *VAR_16,
     const uint64_t VAR_17,
     struct dc_plane_dcc_param *VAR_18,
     struct dc_plane_address *VAR_19)
{
 struct dc *VAR_20 = VAR_11->dm.dc;
 struct dc_dcc_surface_param VAR_21;
 struct dc_surface_dcc_cap VAR_22;
 uint32_t VAR_23 = FUNC_0(VAR_17, VAR_1);
 uint32_t VAR_24 = FUNC_0(VAR_17, VAR_0) != 0;
 uint64_t VAR_25;

 FUNC_3(&VAR_21, 0, sizeof(VAR_21));
 FUNC_3(&VAR_22, 0, sizeof(VAR_22));

 if (!VAR_23)
  return 0;

 if (VAR_13 >= VAR_10)
  return 0;

 if (!VAR_20->cap_funcs.get_dcc_compression_cap)
  return -VAR_3;

 VAR_21.format = VAR_13;
 VAR_21.surface_size.width = VAR_15->surface_size.width;
 VAR_21.surface_size.height = VAR_15->surface_size.height;
 VAR_21.swizzle_mode = VAR_16->gfx9.swizzle;

 if (VAR_14 == VAR_4 || VAR_14 == VAR_5)
  VAR_21.scan = VAR_8;
 else if (VAR_14 == VAR_7 || VAR_14 == VAR_6)
  VAR_21.scan = VAR_9;

 if (!VAR_20->cap_funcs.get_dcc_compression_cap(VAR_20, &VAR_21, &VAR_22))
  return -VAR_3;

 if (!VAR_22.capable)
  return -VAR_3;

 if (VAR_24 == 0 && VAR_22.grph.rgb.independent_64b_blks != 0)
  return -VAR_3;

 VAR_18->enable = 1;
 VAR_18->meta_pitch =
  FUNC_0(VAR_17, VAR_2) + 1;
 VAR_18->independent_64b_blks = VAR_24;

 VAR_25 = FUNC_1(VAR_12->address, VAR_17);
 VAR_19->grph.meta_addr.low_part = FUNC_2(VAR_25);
 VAR_19->grph.meta_addr.high_part = FUNC_5(VAR_25);

 return 0;
}
