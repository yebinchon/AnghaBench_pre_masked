
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
struct TYPE_8__ {TYPE_5__ dst; } ;
struct drm_intel_sprite_colorkey {int min_value; int channel_mask; int max_value; scalar_t__ flags; } ;
struct intel_plane_state {int ctl; TYPE_3__* color_plane; TYPE_2__ base; struct drm_intel_sprite_colorkey ckey; } ;
struct TYPE_7__ {int dev; } ;
struct intel_plane {int pipe; int id; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_10__ {int lock; } ;
struct drm_i915_private {TYPE_4__ uncore; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_9__ {int offset; int x; int y; int stride; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (struct intel_plane_state const*) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (int,int,struct intel_plane_state const*,int ) ;
 int FUNC_17 (struct intel_plane_state const*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_20 (int ) ;
 int FUNC_21 (struct intel_crtc_state const*) ;
 int FUNC_22 (struct intel_plane_state const*) ;
 int FUNC_23 (struct intel_plane_state const*) ;

__attribute__((used)) static void
FUNC_24(struct intel_plane *VAR_1,
   const struct intel_crtc_state *VAR_2,
   const struct intel_plane_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_20(VAR_1->base.dev);
 enum pipe VAR_5 = VAR_1->pipe;
 enum plane_id VAR_6 = VAR_1->id;
 u32 VAR_7 = VAR_3->color_plane[0].offset;
 u32 VAR_8;
 const struct drm_intel_sprite_colorkey *VAR_9 = &VAR_3->ckey;
 int VAR_10 = VAR_3->base.dst.x1;
 int VAR_11 = VAR_3->base.dst.y1;
 u32 VAR_12 = FUNC_15(&VAR_3->base.dst);
 u32 VAR_13 = FUNC_14(&VAR_3->base.dst);
 u32 VAR_14 = VAR_3->color_plane[0].x;
 u32 VAR_15 = VAR_3->color_plane[0].y;
 unsigned long VAR_16;
 u32 VAR_17;

 VAR_17 = VAR_3->ctl | FUNC_21(VAR_2);


 VAR_12--;
 VAR_13--;

 VAR_8 = FUNC_16(VAR_14, VAR_15, VAR_3, 0);

 FUNC_18(&VAR_4->uncore.lock, VAR_16);

 FUNC_0(FUNC_10(VAR_5, VAR_6),
        VAR_3->color_plane[0].stride);
 FUNC_0(FUNC_8(VAR_5, VAR_6), (VAR_11 << 16) | VAR_10);
 FUNC_0(FUNC_9(VAR_5, VAR_6), (VAR_13 << 16) | VAR_12);
 FUNC_0(FUNC_3(VAR_5, VAR_6), 0);

 if (FUNC_1(VAR_4) && VAR_5 == VAR_0)
  FUNC_13(VAR_3);

 if (VAR_9->flags) {
  FUNC_0(FUNC_5(VAR_5, VAR_6), VAR_9->min_value);
  FUNC_0(FUNC_6(VAR_5, VAR_6), VAR_9->channel_mask);
  FUNC_0(FUNC_4(VAR_5, VAR_6), VAR_9->max_value);
 }

 FUNC_0(FUNC_7(VAR_5, VAR_6), VAR_8);
 FUNC_0(FUNC_12(VAR_5, VAR_6), (VAR_15 << 16) | VAR_14);






 FUNC_0(FUNC_2(VAR_5, VAR_6), VAR_17);
 FUNC_0(FUNC_11(VAR_5, VAR_6),
        FUNC_17(VAR_3) + VAR_7);

 FUNC_22(VAR_3);
 FUNC_23(VAR_3);

 FUNC_19(&VAR_4->uncore.lock, VAR_16);
}
