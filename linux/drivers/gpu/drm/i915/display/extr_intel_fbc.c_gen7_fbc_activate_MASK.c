
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


typedef int u32 ;
struct TYPE_12__ {int fence_y_offset; int pipe; int i9xx_plane; } ;
struct TYPE_8__ {TYPE_1__* format; } ;
struct intel_fbc_reg_params {int gen9_wa_cfb_stride; int flags; TYPE_6__ crtc; TYPE_4__* vma; TYPE_2__ fb; } ;
struct TYPE_11__ {int threshold; scalar_t__ false_color; struct intel_fbc_reg_params params; } ;
struct drm_i915_private {TYPE_5__ fbc; } ;
struct TYPE_10__ {TYPE_3__* fence; int obj; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_7__ {int* cpp; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int VAR_16 ;
 int FUNC_8 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_11(struct drm_i915_private *VAR_20)
{
 struct intel_fbc_reg_params *VAR_21 = &VAR_20->fbc.params;
 u32 VAR_22;
 int VAR_23 = VAR_20->fbc.threshold;


 if (FUNC_5(VAR_20, 9) && !FUNC_4(VAR_20)) {
  u32 VAR_24 = FUNC_1(VAR_0);

  VAR_24 &= ~(VAR_8 | VAR_7);

  if (FUNC_9(VAR_21->vma->obj) !=
      VAR_10)
   VAR_24 |= VAR_8 | VAR_21->gen9_wa_cfb_stride;

  FUNC_2(VAR_0, VAR_24);
 }

 VAR_22 = 0;
 if (FUNC_7(VAR_20))
  VAR_22 |= FUNC_8(VAR_21->crtc.i9xx_plane);

 if (VAR_21->fb.format->cpp[0] == 2)
  VAR_23++;

 switch (VAR_23) {
 case 4:
 case 3:
  VAR_22 |= VAR_5;
  break;
 case 2:
  VAR_22 |= VAR_4;
  break;
 case 1:
  VAR_22 |= VAR_3;
  break;
 }

 if (VAR_21->flags & VAR_17) {
  VAR_22 |= VAR_16;
  FUNC_2(VAR_19,
      VAR_18 |
      VAR_21->vma->fence->id);
  FUNC_2(VAR_1, VAR_21->crtc.fence_y_offset);
 } else {
  FUNC_2(VAR_19,0);
  FUNC_2(VAR_1, 0);
 }

 if (VAR_20->fbc.false_color)
  VAR_22 |= VAR_6;

 if (FUNC_7(VAR_20)) {

  FUNC_2(VAR_11,
      FUNC_1(VAR_11) |
      VAR_15);
 } else if (FUNC_6(VAR_20) || FUNC_3(VAR_20)) {

  FUNC_2(FUNC_0(VAR_21->crtc.pipe),
      FUNC_1(FUNC_0(VAR_21->crtc.pipe)) |
      VAR_9);
 }

 if (FUNC_5(VAR_20, 11))

  FUNC_2(VAR_12, VAR_13);

 FUNC_2(VAR_14, VAR_22 | VAR_2);

 FUNC_10(VAR_20);
}
