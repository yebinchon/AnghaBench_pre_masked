
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


struct hubbub {TYPE_2__* funcs; TYPE_1__* ctx; } ;
struct TYPE_11__ {int max_uncompressed_blk_size; int max_compressed_blk_size; int independent_64b_blks; } ;
struct TYPE_12__ {TYPE_5__ rgb; } ;
struct dc_surface_dcc_cap {int capable; int const_color_support; TYPE_6__ grph; } ;
struct TYPE_9__ {int width; int height; } ;
struct dc_dcc_surface_param {scalar_t__ swizzle_mode; scalar_t__ scan; TYPE_3__ surface_size; int format; } ;
struct TYPE_10__ {scalar_t__ disable_dcc; } ;
struct dc {TYPE_4__ debug; } ;
typedef enum segment_order { ____Placeholder_segment_order } segment_order ;
typedef enum dcc_control { ____Placeholder_dcc_control } dcc_control ;
struct TYPE_8__ {int (* dcc_support_swizzle ) (scalar_t__,unsigned int,int*,int*) ;int (* dcc_support_pixel_format ) (int ,unsigned int*) ;} ;
struct TYPE_7__ {struct dc* dc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



 int FUNC_0 (int ,int ,unsigned int,int*,int*) ;
 int FUNC_1 (struct dc_surface_dcc_cap*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (scalar_t__,unsigned int,int*,int*) ;

bool FUNC_4(struct hubbub *VAR_7,
  const struct dc_dcc_surface_param *VAR_8,
  struct dc_surface_dcc_cap *VAR_9)
{
 struct dc *VAR_10 = VAR_7->ctx->dc;

 enum dcc_control VAR_11;
 unsigned int VAR_12;
 enum segment_order VAR_13, VAR_14;
 bool VAR_15, VAR_16;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));

 if (VAR_10->debug.disable_dcc == VAR_0)
  return 0;

 if (!VAR_7->funcs->dcc_support_pixel_format(VAR_8->format,
   &VAR_12))
  return 0;

 if (!VAR_7->funcs->dcc_support_swizzle(VAR_8->swizzle_mode, VAR_12,
   &VAR_13, &VAR_14))
  return 0;

 FUNC_0(VAR_8->surface_size.height, VAR_8->surface_size.width,
   VAR_12, &VAR_15, &VAR_16);

 if (!VAR_15 && !VAR_16) {
  VAR_11 = 129;
 } else if (VAR_8->scan == VAR_3) {
  if (!VAR_15)
   VAR_11 = 129;
  else if (VAR_13 == VAR_5)
   VAR_11 = 130;
  else
   VAR_11 = 128;
 } else if (VAR_8->scan == VAR_4) {
  if (!VAR_16)
   VAR_11 = 129;
  else if (VAR_14 == VAR_5)
   VAR_11 = 130;
  else
   VAR_11 = 128;
 } else {
  if ((VAR_15 &&
   VAR_13 == VAR_6) ||
   (VAR_16 &&
   VAR_14 == VAR_6))

   VAR_11 = 128;
  else



   VAR_11 = 130;
 }


 if ((VAR_12 == 2) && (VAR_8->swizzle_mode == VAR_2))
  VAR_11 = 130;

 if (VAR_10->debug.disable_dcc == VAR_1 &&
  VAR_11 != 129)
  return 0;

 switch (VAR_11) {
 case 129:
  VAR_9->grph.rgb.max_uncompressed_blk_size = 256;
  VAR_9->grph.rgb.max_compressed_blk_size = 256;
  VAR_9->grph.rgb.independent_64b_blks = 0;
  break;
 case 130:
  VAR_9->grph.rgb.max_uncompressed_blk_size = 128;
  VAR_9->grph.rgb.max_compressed_blk_size = 128;
  VAR_9->grph.rgb.independent_64b_blks = 0;
  break;
 case 128:
  VAR_9->grph.rgb.max_uncompressed_blk_size = 256;
  VAR_9->grph.rgb.max_compressed_blk_size = 64;
  VAR_9->grph.rgb.independent_64b_blks = 1;
  break;
 }
 VAR_9->capable = 1;
 VAR_9->const_color_support = 1;

 return 1;
}
