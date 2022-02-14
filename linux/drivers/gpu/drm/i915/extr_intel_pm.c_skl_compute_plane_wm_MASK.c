
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_fixed_16_16_t ;
typedef scalar_t__ u32 ;
struct skl_wm_params {int cpp; int dbuf_block_size; int plane_bytes_per_line; scalar_t__ linetime_us; scalar_t__ y_min_scanlines; int plane_blocks_per_line; scalar_t__ y_tiled; int y_tile_minimum; scalar_t__ rc_surface; int plane_pixel_rate; scalar_t__ x_tiled; } ;
struct skl_wm_level {scalar_t__ plane_res_b; int plane_en; void* min_ddb_alloc; scalar_t__ plane_res_l; } ;
struct TYPE_7__ {int crtc_htotal; } ;
struct TYPE_8__ {TYPE_3__ adjusted_mode; TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_4__ base; } ;
struct TYPE_6__ {scalar_t__* skl_latency; } ;
struct drm_i915_private {scalar_t__ ipc_enabled; TYPE_2__ wm; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 void* VAR_0 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*,int) ;
 int FUNC_16 (struct drm_i915_private*,int ,int,scalar_t__,int) ;
 int FUNC_17 (int ,int,scalar_t__,int ) ;
 struct drm_i915_private* FUNC_18 (int ) ;

__attribute__((used)) static void FUNC_19(const struct intel_crtc_state *VAR_1,
     int VAR_2,
     const struct skl_wm_params *VAR_3,
     const struct skl_wm_level *VAR_4,
     struct skl_wm_level *VAR_5 )
{
 struct drm_i915_private *VAR_6 = FUNC_18(VAR_1->base.crtc->dev);
 u32 VAR_7 = VAR_6->wm.skl_latency[VAR_2];
 uint_fixed_16_16_t VAR_8, VAR_9;
 uint_fixed_16_16_t VAR_10;
 u32 VAR_11, VAR_12, VAR_13 = 0;

 if (VAR_7 == 0) {

  VAR_5->min_ddb_alloc = VAR_0;
  return;
 }





 if ((FUNC_7(VAR_6) || FUNC_3(VAR_6)) ||
     VAR_6->ipc_enabled)
  VAR_7 += 4;

 if (FUNC_14(VAR_6) && VAR_3->x_tiled)
  VAR_7 += 15;

 VAR_8 = FUNC_16(VAR_6, VAR_3->plane_pixel_rate,
     VAR_3->cpp, VAR_7, VAR_3->dbuf_block_size);
 VAR_9 = FUNC_17(VAR_3->plane_pixel_rate,
     VAR_1->base.adjusted_mode.crtc_htotal,
     VAR_7,
     VAR_3->plane_blocks_per_line);

 if (VAR_3->y_tiled) {
  VAR_10 = FUNC_11(VAR_9, VAR_3->y_tile_minimum);
 } else {
  if ((VAR_3->cpp * VAR_1->base.adjusted_mode.crtc_htotal /
       VAR_3->dbuf_block_size < 1) &&
       (VAR_3->plane_bytes_per_line / VAR_3->dbuf_block_size < 1)) {
   VAR_10 = VAR_9;
  } else if (VAR_7 >= VAR_3->linetime_us) {
   if (FUNC_5(VAR_6, 9) &&
       !FUNC_4(VAR_6))
    VAR_10 = FUNC_12(VAR_8, VAR_9);
   else
    VAR_10 = VAR_9;
  } else {
   VAR_10 = VAR_8;
  }
 }

 VAR_11 = FUNC_9(VAR_10) + 1;
 VAR_12 = FUNC_8(VAR_10,
      VAR_3->plane_blocks_per_line);

 if (FUNC_6(VAR_6) || FUNC_2(VAR_6)) {

  if (VAR_2 == 0 && VAR_3->rc_surface)
   VAR_11 +=
    FUNC_9(VAR_3->y_tile_minimum);


  if (VAR_2 >= 1 && VAR_2 <= 7) {
   if (VAR_3->y_tiled) {
    VAR_11 +=
        FUNC_9(VAR_3->y_tile_minimum);
    VAR_12 += VAR_3->y_min_scanlines;
   } else {
    VAR_11++;
   }







   if (VAR_4->plane_res_b > VAR_11)
    VAR_11 = VAR_4->plane_res_b;
  }
 }

 if (FUNC_1(VAR_6) >= 11) {
  if (VAR_3->y_tiled) {
   int VAR_14;

   if (VAR_12 % VAR_3->y_min_scanlines == 0)
    VAR_14 = VAR_3->y_min_scanlines;
   else
    VAR_14 = VAR_3->y_min_scanlines * 2 -
     VAR_12 % VAR_3->y_min_scanlines;

   VAR_13 = FUNC_13(VAR_12 + VAR_14,
         VAR_3->plane_blocks_per_line);
  } else {
   VAR_13 = VAR_11 +
    FUNC_0(VAR_11, 10);
  }
 }

 if (!FUNC_15(VAR_6, VAR_2))
  VAR_12 = 0;

 if (VAR_12 > 31) {

  VAR_5->min_ddb_alloc = VAR_0;
  return;
 }







 VAR_5->plane_res_b = VAR_11;
 VAR_5->plane_res_l = VAR_12;

 VAR_5->min_ddb_alloc = FUNC_10(VAR_13, VAR_11) + 1;
 VAR_5->plane_en = 1;
}
