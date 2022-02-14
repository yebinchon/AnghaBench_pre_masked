
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct intel_gt {int uc; int last_init_time; } ;
struct drm_i915_private {int kernel_context; struct intel_gt gt; struct intel_uncore uncore; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct intel_gt*) ;
 int FUNC_8 (struct drm_i915_private*,char*,int) ;
 int FUNC_9 (struct intel_gt*) ;
 int FUNC_10 (struct intel_gt*) ;
 int FUNC_11 (struct intel_gt*) ;
 int FUNC_12 (struct intel_gt*) ;
 int FUNC_13 (struct intel_gt*,char*) ;
 int FUNC_14 (struct intel_gt*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct intel_uncore*,int ) ;
 int FUNC_17 (struct intel_uncore*,int ) ;
 int FUNC_18 (struct intel_uncore*,int ,int ,int ) ;
 int FUNC_19 (struct intel_uncore*,int ,int ) ;
 int FUNC_20 () ;

int FUNC_21(struct drm_i915_private *VAR_5)
{
 struct intel_uncore *VAR_6 = &VAR_5->uncore;
 struct intel_gt *VAR_7 = &VAR_5->gt;
 int VAR_8;

 FUNC_0(!VAR_5->kernel_context);
 VAR_8 = FUNC_12(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->last_init_time = FUNC_20();


 FUNC_16(VAR_6, VAR_0);

 if (FUNC_2(VAR_5) && FUNC_4(VAR_5) < 9)
  FUNC_18(VAR_6, VAR_1, 0, FUNC_3(0xf));

 if (FUNC_5(VAR_5))
  FUNC_19(VAR_6,
       VAR_4,
       FUNC_6(VAR_5) ?
       VAR_3 : VAR_2);


 FUNC_10(VAR_7);

 FUNC_13(VAR_7, "init");

 FUNC_11(VAR_7);







 FUNC_9(VAR_7);

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_1("Enabling PPGTT failed (%d)\n", VAR_8);
  goto out;
 }


 VAR_8 = FUNC_15(&VAR_7->uc);
 if (VAR_8) {
  FUNC_8(VAR_5, "Enabling uc failed (%d)\n", VAR_8);
  goto out;
 }

 FUNC_14(VAR_7);

out:
 FUNC_17(VAR_6, VAR_0);
 return VAR_8;
}
