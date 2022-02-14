
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
struct TYPE_11__ {int fence_y_offset; int i9xx_plane; } ;
struct TYPE_9__ {TYPE_2__* format; } ;
struct intel_fbc_reg_params {int flags; TYPE_6__* vma; TYPE_5__ crtc; TYPE_3__ fb; } ;
struct TYPE_7__ {int threshold; struct intel_fbc_reg_params params; } ;
struct drm_i915_private {TYPE_1__ fbc; } ;
struct TYPE_12__ {TYPE_4__* fence; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_8__ {int* cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_13)
{
 struct intel_fbc_reg_params *VAR_14 = &VAR_13->fbc.params;
 u32 VAR_15;
 int VAR_16 = VAR_13->fbc.threshold;

 VAR_15 = FUNC_0(VAR_14->crtc.i9xx_plane);
 if (VAR_14->fb.format->cpp[0] == 2)
  VAR_16++;

 switch (VAR_16) {
 case 4:
 case 3:
  VAR_15 |= VAR_5;
  break;
 case 2:
  VAR_15 |= VAR_4;
  break;
 case 1:
  VAR_15 |= VAR_3;
  break;
 }

 if (VAR_14->flags & VAR_10) {
  VAR_15 |= VAR_2;
  if (FUNC_2(VAR_13, 5))
   VAR_15 |= VAR_14->vma->fence->id;
  if (FUNC_2(VAR_13, 6)) {
   FUNC_1(VAR_12,
       VAR_11 |
       VAR_14->vma->fence->id);
   FUNC_1(VAR_0,
       VAR_14->crtc.fence_y_offset);
  }
 } else {
  if (FUNC_2(VAR_13, 6)) {
   FUNC_1(VAR_12, 0);
   FUNC_1(VAR_0, 0);
  }
 }

 FUNC_1(VAR_7, VAR_14->crtc.fence_y_offset);
 FUNC_1(VAR_8,
     FUNC_3(VAR_14->vma) | VAR_9);

 FUNC_1(VAR_6, VAR_15 | VAR_1);

 FUNC_4(VAR_13);
}
