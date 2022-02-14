
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_fbc {int enabled; int active; char* no_fbc_reason; int lock; int underrun_work; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
struct TYPE_6__ {int enable_fbc; } ;
struct TYPE_4__ {int has_fbc; } ;
struct TYPE_5__ {TYPE_1__ display; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int VAR_3 ;
 int FUNC_8 (struct drm_i915_private*) ;
 TYPE_2__* FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;

void FUNC_12(struct drm_i915_private *VAR_4)
{
 struct intel_fbc *VAR_5 = &VAR_4->fbc;

 FUNC_3(&VAR_5->underrun_work, VAR_3);
 FUNC_10(&VAR_5->lock);
 VAR_5->enabled = 0;
 VAR_5->active = 0;

 if (FUNC_11(VAR_4))
  FUNC_9(VAR_4)->display.has_fbc = 0;

 VAR_2.enable_fbc = FUNC_8(VAR_4);
 FUNC_0("Sanitized enable_fbc value: %d\n",
        VAR_2.enable_fbc);

 if (!FUNC_1(VAR_4)) {
  VAR_5->no_fbc_reason = "unsupported by this chipset";
  return;
 }


 if (FUNC_4(VAR_4) <= 4 && !FUNC_5(VAR_4))
  FUNC_2(VAR_0, 500 << VAR_1);




 if (FUNC_7(VAR_4))
  FUNC_6(VAR_4);
}
