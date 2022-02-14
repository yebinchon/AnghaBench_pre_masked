
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


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int x1; int y1; } ;
struct TYPE_9__ {int alpha; struct drm_framebuffer* fb; int src; TYPE_2__ dst; } ;
struct drm_intel_sprite_colorkey {int max_value; int channel_mask; int min_value; } ;
struct intel_plane_state {int color_ctl; scalar_t__ scaler_id; TYPE_5__* color_plane; TYPE_3__ base; struct intel_plane* linked_plane; struct drm_intel_sprite_colorkey ckey; } ;
struct TYPE_7__ {int dev; } ;
struct intel_plane {int id; int pipe; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_12__ {int lock; } ;
struct drm_i915_private {TYPE_6__ uncore; } ;
struct drm_framebuffer {TYPE_4__* format; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_11__ {int offset; int x; int y; } ;
struct TYPE_10__ {scalar_t__ is_yuv; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int VAR_6 ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct intel_crtc_state const*) ;
 scalar_t__ FUNC_21 (struct drm_i915_private*,int) ;
 int FUNC_22 (struct intel_plane*,struct intel_crtc_state const*,struct intel_plane_state const*) ;
 int FUNC_23 (struct intel_plane_state const*) ;
 int FUNC_24 (struct intel_crtc_state const*) ;
 int FUNC_25 (struct intel_plane_state const*,int) ;
 int FUNC_26 (struct intel_plane*,struct intel_crtc_state const*,struct intel_plane_state const*) ;
 int FUNC_27 (struct intel_plane*,struct intel_crtc_state const*) ;
 int FUNC_28 (int *,unsigned long) ;
 int FUNC_29 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_30 (int ) ;

__attribute__((used)) static void
FUNC_31(struct intel_plane *VAR_9,
    const struct intel_crtc_state *VAR_10,
    const struct intel_plane_state *VAR_11,
    int VAR_12, bool VAR_13, u32 VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_30(VAR_9->base.dev);
 enum plane_id VAR_16 = VAR_9->id;
 enum pipe VAR_17 = VAR_9->pipe;
 const struct drm_intel_sprite_colorkey *VAR_18 = &VAR_11->ckey;
 u32 VAR_19 = VAR_11->color_plane[VAR_12].offset;
 u32 VAR_20 = FUNC_25(VAR_11, VAR_12);
 u32 VAR_21 = FUNC_25(VAR_11, 1);
 int VAR_22 = VAR_11->base.dst.x1;
 int VAR_23 = VAR_11->base.dst.y1;
 u32 VAR_24 = VAR_11->color_plane[VAR_12].x;
 u32 VAR_25 = VAR_11->color_plane[VAR_12].y;
 u32 VAR_26 = FUNC_19(&VAR_11->base.src) >> 16;
 u32 VAR_27 = FUNC_18(&VAR_11->base.src) >> 16;
 struct intel_plane *VAR_28 = VAR_11->linked_plane;
 const struct drm_framebuffer *VAR_29 = VAR_11->base.fb;
 u8 VAR_30 = VAR_11->base.alpha >> 8;
 u32 VAR_31 = 0;
 unsigned long VAR_32;
 u32 VAR_33, VAR_34;

 VAR_14 |= FUNC_24(VAR_10);

 if (FUNC_1(VAR_15) >= 10 || FUNC_2(VAR_15))
  VAR_31 = VAR_11->color_ctl |
   FUNC_20(VAR_10);


 VAR_26--;
 VAR_27--;

 VAR_34 = (VAR_18->max_value & 0xffffff) | FUNC_10(VAR_30);

 VAR_33 = VAR_18->channel_mask & 0x7ffffff;
 if (VAR_30 < 0xff)
  VAR_33 |= VAR_6;


 if (VAR_11->scaler_id >= 0) {
  VAR_22 = 0;
  VAR_23 = 0;
 }

 FUNC_28(&VAR_15->uncore.lock, VAR_32);

 FUNC_0(FUNC_16(VAR_17, VAR_16), VAR_20);
 FUNC_0(FUNC_14(VAR_17, VAR_16), (VAR_23 << 16) | VAR_22);
 FUNC_0(FUNC_15(VAR_17, VAR_16), (VAR_27 << 16) | VAR_26);
 FUNC_0(FUNC_4(VAR_17, VAR_16),
        (VAR_11->color_plane[1].offset - VAR_19) | VAR_21);

 if (FUNC_21(VAR_15, VAR_16)) {
  u32 VAR_35 = 0;

  if (VAR_28) {

   VAR_35 = VAR_0 |
    VAR_1 |
    VAR_5 |
    VAR_4;

   if (VAR_28->id == VAR_8)
    VAR_35 |= VAR_3;
   else if (VAR_28->id == VAR_7)
    VAR_35 |= VAR_2;
   else
    FUNC_3(VAR_28->id);
  }

  FUNC_0(FUNC_8(VAR_17, VAR_16), VAR_35);
 }

 if (FUNC_1(VAR_15) >= 10 || FUNC_2(VAR_15))
  FUNC_0(FUNC_6(VAR_17, VAR_16), VAR_31);

 if (VAR_29->format->is_yuv && FUNC_21(VAR_15, VAR_16))
  FUNC_22(VAR_9, VAR_10, VAR_11);

 FUNC_27(VAR_9, VAR_10);

 FUNC_0(FUNC_12(VAR_17, VAR_16), VAR_18->min_value);
 FUNC_0(FUNC_11(VAR_17, VAR_16), VAR_33);
 FUNC_0(FUNC_9(VAR_17, VAR_16), VAR_34);

 FUNC_0(FUNC_13(VAR_17, VAR_16), (VAR_25 << 16) | VAR_24);

 if (FUNC_1(VAR_15) < 11)
  FUNC_0(FUNC_5(VAR_17, VAR_16),
         (VAR_11->color_plane[1].y << 16) |
         VAR_11->color_plane[1].x);






 FUNC_0(FUNC_7(VAR_17, VAR_16), VAR_14);
 FUNC_0(FUNC_17(VAR_17, VAR_16),
        FUNC_23(VAR_11) + VAR_19);

 if (!VAR_13 && VAR_11->scaler_id >= 0)
  FUNC_26(VAR_9, VAR_10, VAR_11);

 FUNC_29(&VAR_15->uncore.lock, VAR_32);
}
