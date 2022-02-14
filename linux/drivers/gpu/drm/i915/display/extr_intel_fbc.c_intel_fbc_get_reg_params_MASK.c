
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


struct TYPE_11__ {int src_w; } ;
struct TYPE_10__ {int stride; int format; } ;
struct intel_fbc_state_cache {TYPE_5__ plane; TYPE_4__ fb; int flags; int vma; } ;
struct TYPE_9__ {int stride; int format; } ;
struct TYPE_8__ {int fence_y_offset; int i9xx_plane; int pipe; } ;
struct intel_fbc_reg_params {int gen9_wa_cfb_stride; int cfb_size; TYPE_3__ fb; TYPE_2__ crtc; int flags; int vma; } ;
struct intel_fbc {int threshold; struct intel_fbc_state_cache state_cache; } ;
struct TYPE_7__ {int primary; int dev; } ;
struct intel_crtc {TYPE_1__ base; int pipe; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
struct TYPE_12__ {int i9xx_plane; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct intel_fbc*) ;
 int FUNC_4 (struct drm_i915_private*,struct intel_fbc_state_cache*) ;
 int FUNC_5 (struct intel_fbc_reg_params*,int ,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 TYPE_6__* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_crtc *VAR_0,
         struct intel_fbc_reg_params *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_6(VAR_0->base.dev);
 struct intel_fbc *VAR_3 = &VAR_2->fbc;
 struct intel_fbc_state_cache *VAR_4 = &VAR_3->state_cache;




 FUNC_5(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->vma = VAR_4->vma;
 VAR_1->flags = VAR_4->flags;

 VAR_1->crtc.pipe = VAR_0->pipe;
 VAR_1->crtc.i9xx_plane = FUNC_7(VAR_0->base.primary)->i9xx_plane;
 VAR_1->crtc.fence_y_offset = FUNC_3(VAR_3);

 VAR_1->fb.format = VAR_4->fb.format;
 VAR_1->fb.stride = VAR_4->fb.stride;

 VAR_1->cfb_size = FUNC_4(VAR_2, VAR_4);

 if (FUNC_2(VAR_2, 9) && !FUNC_1(VAR_2))
  VAR_1->gen9_wa_cfb_stride = FUNC_0(VAR_4->plane.src_w,
      32 * VAR_3->threshold) * 8;
}
