
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_fw_domains; int read_fw_domains; int force_wake_put; int force_wake_get; } ;
struct intel_uncore {int flags; TYPE_1__ funcs; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct intel_uncore*) ;
 scalar_t__ FUNC_8 (struct intel_uncore*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct intel_uncore*) ;
 int FUNC_11 (struct intel_uncore*) ;
 int FUNC_12 (struct intel_uncore*) ;
 int FUNC_13 (struct intel_uncore*) ;

int FUNC_14(struct intel_uncore *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->i915;
 int VAR_6;

 VAR_6 = FUNC_12(VAR_4);
 if (VAR_6)
  return VAR_6;

 if (FUNC_3(VAR_5) > 5 && !FUNC_9(VAR_5))
  VAR_4->flags |= VAR_2;

 if (!FUNC_7(VAR_4)) {
  FUNC_13(VAR_4);
 } else {
  VAR_6 = FUNC_10(VAR_4);
  if (VAR_6)
   goto out_mmio_cleanup;
 }


 FUNC_1(FUNC_7(VAR_4) != !!VAR_4->funcs.force_wake_get);
 FUNC_1(FUNC_7(VAR_4) != !!VAR_4->funcs.force_wake_put);
 FUNC_1(FUNC_7(VAR_4) != !!VAR_4->funcs.read_fw_domains);
 FUNC_1(FUNC_7(VAR_4) != !!VAR_4->funcs.write_fw_domains);

 if (FUNC_2(VAR_5))
  VAR_4->flags |= VAR_3;

 if (FUNC_6(VAR_5) || FUNC_4(VAR_5))
  VAR_4->flags |= VAR_0;

 if (FUNC_5(VAR_5, 6, 7))
  VAR_4->flags |= VAR_1;


 if (FUNC_8(VAR_4))
  FUNC_0("unclaimed mmio detected on uncore init, clearing\n");

 return 0;

out_mmio_cleanup:
 FUNC_11(VAR_4);

 return VAR_6;
}
