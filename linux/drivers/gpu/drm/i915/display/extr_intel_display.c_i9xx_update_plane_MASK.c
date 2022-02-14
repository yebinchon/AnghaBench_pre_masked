
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
struct intel_plane_state {int ctl; TYPE_3__* color_plane; TYPE_2__ base; } ;
struct TYPE_7__ {int dev; } ;
struct intel_plane {int i9xx_plane; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_10__ {int lock; } ;
struct drm_i915_private {TYPE_4__ uncore; } ;
typedef enum i9xx_plane_id { ____Placeholder_i9xx_plane_id } i9xx_plane_id ;
struct TYPE_9__ {int x; int y; int offset; int stride; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 scalar_t__ FUNC_13 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (struct intel_crtc_state const*) ;
 int FUNC_20 (int,int,struct intel_plane_state const*,int ) ;
 int FUNC_21 (struct intel_plane_state const*) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;
 struct drm_i915_private* FUNC_24 (int ) ;

__attribute__((used)) static void FUNC_25(struct intel_plane *VAR_1,
         const struct intel_crtc_state *VAR_2,
         const struct intel_plane_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_24(VAR_1->base.dev);
 enum i9xx_plane_id VAR_5 = VAR_1->i9xx_plane;
 u32 VAR_6;
 int VAR_7 = VAR_3->color_plane[0].x;
 int VAR_8 = VAR_3->color_plane[0].y;
 int VAR_9 = VAR_3->base.dst.x1;
 int VAR_10 = VAR_3->base.dst.y1;
 int VAR_11 = FUNC_18(&VAR_3->base.dst);
 int VAR_12 = FUNC_17(&VAR_3->base.dst);
 unsigned long VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 VAR_15 = VAR_3->ctl | FUNC_19(VAR_2);

 VAR_6 = FUNC_20(VAR_7, VAR_8, VAR_3, 0);

 if (FUNC_10(VAR_4) >= 4)
  VAR_14 = VAR_3->color_plane[0].offset;
 else
  VAR_14 = VAR_6;

 FUNC_22(&VAR_4->uncore.lock, VAR_13);

 FUNC_9(FUNC_6(VAR_5), VAR_3->color_plane[0].stride);

 if (FUNC_10(VAR_4) < 4) {





  FUNC_9(FUNC_4(VAR_5), (VAR_10 << 16) | VAR_9);
  FUNC_9(FUNC_5(VAR_5),
         ((VAR_12 - 1) << 16) | (VAR_11 - 1));
 } else if (FUNC_12(VAR_4) && VAR_5 == VAR_0) {
  FUNC_9(FUNC_15(VAR_5), (VAR_10 << 16) | VAR_9);
  FUNC_9(FUNC_16(VAR_5),
         ((VAR_12 - 1) << 16) | (VAR_11 - 1));
  FUNC_9(FUNC_14(VAR_5), 0);
 }

 if (FUNC_13(VAR_4) || FUNC_11(VAR_4)) {
  FUNC_9(FUNC_3(VAR_5), (VAR_8 << 16) | VAR_7);
 } else if (FUNC_10(VAR_4) >= 4) {
  FUNC_9(FUNC_2(VAR_5), VAR_6);
  FUNC_9(FUNC_8(VAR_5), (VAR_8 << 16) | VAR_7);
 }






 FUNC_9(FUNC_1(VAR_5), VAR_15);
 if (FUNC_10(VAR_4) >= 4)
  FUNC_9(FUNC_7(VAR_5),
         FUNC_21(VAR_3) +
         VAR_14);
 else
  FUNC_9(FUNC_0(VAR_5),
         FUNC_21(VAR_3) +
         VAR_14);

 FUNC_23(&VAR_4->uncore.lock, VAR_13);
}
