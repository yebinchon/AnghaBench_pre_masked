
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hubbub {int dummy; } ;
struct TYPE_10__ {TYPE_2__* funcs; TYPE_1__* ctx; } ;
struct dcn10_hubbub {TYPE_3__ base; } ;
struct TYPE_13__ {int max_uncompressed_blk_size; int max_compressed_blk_size; int independent_64b_blks; } ;
struct TYPE_14__ {TYPE_6__ rgb; } ;
struct dc_surface_dcc_cap {int capable; int const_color_support; TYPE_7__ grph; } ;
struct TYPE_11__ {int width; int height; } ;
struct dc_dcc_surface_param {scalar_t__ scan; TYPE_4__ surface_size; int swizzle_mode; int format; } ;
struct TYPE_12__ {scalar_t__ disable_dcc; } ;
struct dc {TYPE_5__ debug; } ;
typedef enum segment_order { ____Placeholder_segment_order } segment_order ;
typedef enum dcc_control { ____Placeholder_dcc_control } dcc_control ;
struct TYPE_9__ {int (* dcc_support_swizzle ) (int ,unsigned int,int*,int*) ;int (* dcc_support_pixel_format ) (int ,unsigned int*) ;} ;
struct TYPE_8__ {struct dc* dc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dcn10_hubbub* FUNC_0 (struct hubbub*) ;



 int FUNC_1 (int ,int ,unsigned int,int*,int*) ;
 int FUNC_2 (struct dc_surface_dcc_cap*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,unsigned int*) ;
 int FUNC_4 (int ,unsigned int,int*,int*) ;

__attribute__((used)) static bool FUNC_5(struct hubbub *VAR_6,
  const struct dc_dcc_surface_param *VAR_7,
  struct dc_surface_dcc_cap *VAR_8)
{
 struct dcn10_hubbub *VAR_9 = FUNC_0(VAR_6);
 struct dc *VAR_10 = VAR_9->base.ctx->dc;


 enum dcc_control VAR_11;
 unsigned int VAR_12;
 enum segment_order VAR_13, VAR_14;
 bool VAR_15, VAR_16;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));

 if (VAR_10->debug.disable_dcc == VAR_0)
  return 0;

 if (!VAR_9->base.funcs->dcc_support_pixel_format(VAR_7->format, &VAR_12))
  return 0;

 if (!VAR_9->base.funcs->dcc_support_swizzle(VAR_7->swizzle_mode, VAR_12,
   &VAR_13, &VAR_14))
  return 0;

 FUNC_1(VAR_7->surface_size.height, VAR_7->surface_size.width,
   VAR_12, &VAR_15, &VAR_16);

 if (!VAR_15 && !VAR_16) {
  VAR_11 = 129;
 } else if (VAR_7->scan == VAR_2) {
  if (!VAR_15)
   VAR_11 = 129;
  else if (VAR_13 == VAR_4)
   VAR_11 = 130;
  else
   VAR_11 = 128;
 } else if (VAR_7->scan == VAR_3) {
  if (!VAR_16)
   VAR_11 = 129;
  else if (VAR_14 == VAR_4)
   VAR_11 = 130;
  else
   VAR_11 = 128;
 } else {
  if ((VAR_15 &&
   VAR_13 == VAR_5) ||
   (VAR_16 &&
   VAR_14 == VAR_5))

   VAR_11 = 128;
  else



   VAR_11 = 130;
 }

 if (VAR_10->debug.disable_dcc == VAR_1 &&
  VAR_11 != 129)
  return 0;

 switch (VAR_11) {
 case 129:
  VAR_8->grph.rgb.max_uncompressed_blk_size = 256;
  VAR_8->grph.rgb.max_compressed_blk_size = 256;
  VAR_8->grph.rgb.independent_64b_blks = 0;
  break;
 case 130:
  VAR_8->grph.rgb.max_uncompressed_blk_size = 128;
  VAR_8->grph.rgb.max_compressed_blk_size = 128;
  VAR_8->grph.rgb.independent_64b_blks = 0;
  break;
 case 128:
  VAR_8->grph.rgb.max_uncompressed_blk_size = 256;
  VAR_8->grph.rgb.max_compressed_blk_size = 64;
  VAR_8->grph.rgb.independent_64b_blks = 1;
  break;
 }

 VAR_8->capable = 1;
 VAR_8->const_color_support = 0;

 return 1;
}
