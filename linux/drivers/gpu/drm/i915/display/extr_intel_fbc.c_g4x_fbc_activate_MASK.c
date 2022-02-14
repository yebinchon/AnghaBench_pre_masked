
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
struct TYPE_8__ {TYPE_1__* format; } ;
struct intel_fbc_reg_params {int flags; TYPE_5__ crtc; TYPE_4__* vma; TYPE_2__ fb; } ;
struct TYPE_12__ {struct intel_fbc_reg_params params; } ;
struct drm_i915_private {TYPE_6__ fbc; } ;
struct TYPE_10__ {TYPE_3__* fence; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_7__ {int* cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_8)
{
 struct intel_fbc_reg_params *VAR_9 = &VAR_8->fbc.params;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_9->crtc.i9xx_plane) | VAR_6;
 if (VAR_9->fb.format->cpp[0] == 2)
  VAR_10 |= VAR_4;
 else
  VAR_10 |= VAR_3;

 if (VAR_9->flags & VAR_7) {
  VAR_10 |= VAR_2 | VAR_9->vma->fence->id;
  FUNC_1(VAR_5, VAR_9->crtc.fence_y_offset);
 } else {
  FUNC_1(VAR_5, 0);
 }


 FUNC_1(VAR_0, VAR_10 | VAR_1);
}
