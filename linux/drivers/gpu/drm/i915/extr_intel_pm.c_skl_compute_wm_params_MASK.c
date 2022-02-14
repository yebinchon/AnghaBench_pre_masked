
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct skl_wm_params {int y_tiled; int x_tiled; int rc_surface; int width; int cpp; int dbuf_block_size; int y_min_scanlines; int plane_bytes_per_line; int linetime_us; void* plane_blocks_per_line; int y_tile_minimum; scalar_t__ plane_pixel_rate; scalar_t__ is_planar; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_format_info {int* cpp; int format; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct intel_crtc_state const*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int,void*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 struct intel_crtc* FUNC_13 (int ) ;
 void* FUNC_14 (scalar_t__) ;

__attribute__((used)) static int
FUNC_15(const struct intel_crtc_state *VAR_6,
        int VAR_7, const struct drm_format_info *VAR_8,
        u64 VAR_9, unsigned int VAR_10,
        u32 VAR_11, struct skl_wm_params *VAR_12,
        int VAR_13)
{
 struct intel_crtc *VAR_14 = FUNC_13(VAR_6->base.crtc);
 struct drm_i915_private *VAR_15 = FUNC_12(VAR_14->base.dev);
 u32 VAR_16;


 if (VAR_13 == 1 && !FUNC_9(VAR_8->format)) {
  FUNC_1("Non planar format have single plane\n");
  return -VAR_0;
 }

 VAR_12->y_tiled = VAR_9 == VAR_2 ||
        VAR_9 == VAR_4 ||
        VAR_9 == VAR_3 ||
        VAR_9 == VAR_5;
 VAR_12->x_tiled = VAR_9 == VAR_1;
 VAR_12->rc_surface = VAR_9 == VAR_3 ||
    VAR_9 == VAR_5;
 VAR_12->is_planar = FUNC_9(VAR_8->format);

 VAR_12->width = VAR_7;
 if (VAR_13 == 1 && VAR_12->is_planar)
  VAR_12->width /= 2;

 VAR_12->cpp = VAR_8->cpp[VAR_13];
 VAR_12->plane_pixel_rate = VAR_11;

 if (FUNC_2(VAR_15) >= 11 &&
     VAR_9 == VAR_4 && VAR_12->cpp == 1)
  VAR_12->dbuf_block_size = 256;
 else
  VAR_12->dbuf_block_size = 512;

 if (FUNC_6(VAR_10)) {
  switch (VAR_12->cpp) {
  case 1:
   VAR_12->y_min_scanlines = 16;
   break;
  case 2:
   VAR_12->y_min_scanlines = 8;
   break;
  case 4:
   VAR_12->y_min_scanlines = 4;
   break;
  default:
   FUNC_4(VAR_12->cpp);
   return -VAR_0;
  }
 } else {
  VAR_12->y_min_scanlines = 4;
 }

 if (FUNC_11(VAR_15))
  VAR_12->y_min_scanlines *= 2;

 VAR_12->plane_bytes_per_line = VAR_12->width * VAR_12->cpp;
 if (VAR_12->y_tiled) {
  VAR_16 = FUNC_0(VAR_12->plane_bytes_per_line *
        VAR_12->y_min_scanlines,
        VAR_12->dbuf_block_size);

  if (FUNC_2(VAR_15) >= 10)
   VAR_16++;

  VAR_12->plane_blocks_per_line = FUNC_5(VAR_16,
       VAR_12->y_min_scanlines);
 } else if (VAR_12->x_tiled && FUNC_3(VAR_15, 9)) {
  VAR_16 = FUNC_0(VAR_12->plane_bytes_per_line,
        VAR_12->dbuf_block_size);
  VAR_12->plane_blocks_per_line = FUNC_14(VAR_16);
 } else {
  VAR_16 = FUNC_0(VAR_12->plane_bytes_per_line,
        VAR_12->dbuf_block_size) + 1;
  VAR_12->plane_blocks_per_line = FUNC_14(VAR_16);
 }

 VAR_12->y_tile_minimum = FUNC_10(VAR_12->y_min_scanlines,
          VAR_12->plane_blocks_per_line);

 VAR_12->linetime_us = FUNC_7(
     FUNC_8(VAR_6));

 return 0;
}
