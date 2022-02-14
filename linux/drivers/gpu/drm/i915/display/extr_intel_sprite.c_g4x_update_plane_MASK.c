
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int x1; int y1; } ;
struct TYPE_8__ {TYPE_5__ src; TYPE_5__ dst; } ;
struct drm_intel_sprite_colorkey {int min_value; int channel_mask; int max_value; scalar_t__ flags; } ;
struct intel_plane_state {int ctl; TYPE_3__* color_plane; TYPE_2__ base; struct drm_intel_sprite_colorkey ckey; } ;
struct TYPE_7__ {int dev; } ;
struct intel_plane {int pipe; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_10__ {int lock; } ;
struct drm_i915_private {TYPE_4__ uncore; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_9__ {int offset; int x; int y; int stride; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_0 ;
 int FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (struct intel_crtc_state const*) ;
 int FUNC_16 (struct intel_plane_state const*) ;
 int FUNC_17 (struct intel_plane_state const*) ;
 int FUNC_18 (int,int,struct intel_plane_state const*,int ) ;
 int FUNC_19 (struct intel_plane_state const*) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_22 (int ) ;

__attribute__((used)) static void
FUNC_23(struct intel_plane *VAR_1,
   const struct intel_crtc_state *VAR_2,
   const struct intel_plane_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_22(VAR_1->base.dev);
 enum pipe VAR_5 = VAR_1->pipe;
 u32 VAR_6 = VAR_3->color_plane[0].offset;
 u32 VAR_7;
 const struct drm_intel_sprite_colorkey *VAR_8 = &VAR_3->ckey;
 int VAR_9 = VAR_3->base.dst.x1;
 int VAR_10 = VAR_3->base.dst.y1;
 u32 VAR_11 = FUNC_14(&VAR_3->base.dst);
 u32 VAR_12 = FUNC_13(&VAR_3->base.dst);
 u32 VAR_13 = VAR_3->color_plane[0].x;
 u32 VAR_14 = VAR_3->color_plane[0].y;
 u32 VAR_15 = FUNC_14(&VAR_3->base.src) >> 16;
 u32 VAR_16 = FUNC_13(&VAR_3->base.src) >> 16;
 u32 VAR_17, VAR_18 = 0;
 unsigned long VAR_19;

 VAR_17 = VAR_3->ctl | FUNC_15(VAR_2);


 VAR_15--;
 VAR_16--;
 VAR_11--;
 VAR_12--;

 if (VAR_11 != VAR_15 || VAR_12 != VAR_16)
  VAR_18 = VAR_0 | (VAR_15 << 16) | VAR_16;

 VAR_7 = FUNC_18(VAR_13, VAR_14, VAR_3, 0);

 FUNC_20(&VAR_4->uncore.lock, VAR_19);

 FUNC_11(FUNC_8(VAR_5), VAR_3->color_plane[0].stride);
 FUNC_11(FUNC_5(VAR_5), (VAR_10 << 16) | VAR_9);
 FUNC_11(FUNC_7(VAR_5), (VAR_12 << 16) | VAR_11);
 FUNC_11(FUNC_6(VAR_5), VAR_18);

 if (VAR_8->flags) {
  FUNC_11(FUNC_3(VAR_5), VAR_8->min_value);
  FUNC_11(FUNC_2(VAR_5), VAR_8->channel_mask);
  FUNC_11(FUNC_1(VAR_5), VAR_8->max_value);
 }

 FUNC_11(FUNC_4(VAR_5), VAR_7);
 FUNC_11(FUNC_10(VAR_5), (VAR_14 << 16) | VAR_13);






 FUNC_11(FUNC_0(VAR_5), VAR_17);
 FUNC_11(FUNC_9(VAR_5),
        FUNC_19(VAR_3) + VAR_6);

 if (FUNC_12(VAR_4))
  FUNC_16(VAR_3);
 else
  FUNC_17(VAR_3);

 FUNC_21(&VAR_4->uncore.lock, VAR_19);
}
