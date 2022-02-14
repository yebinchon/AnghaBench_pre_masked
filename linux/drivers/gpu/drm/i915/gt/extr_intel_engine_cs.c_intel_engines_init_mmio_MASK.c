
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_device_info {unsigned int engine_mask; } ;
struct drm_i915_private {int gt; } ;
struct TYPE_4__ {unsigned int engine_mask; } ;
struct TYPE_3__ {int num_engines; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_0 ;
 unsigned int const FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct drm_i915_private*,unsigned int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_5 (struct drm_i915_private*) ;
 TYPE_1__* FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (unsigned int const) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int *,unsigned int) ;
 int VAR_2 ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct drm_i915_private*) ;
 struct intel_device_info* FUNC_14 (struct drm_i915_private*) ;

int FUNC_15(struct drm_i915_private *VAR_3)
{
 struct intel_device_info *VAR_4 = FUNC_14(VAR_3);
 const unsigned int VAR_5 = FUNC_5(VAR_3)->engine_mask;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_7(VAR_5 == 0);
 FUNC_7(VAR_5 &
  FUNC_3(FUNC_2(VAR_6) - 1, VAR_1));

 if (FUNC_9(VAR_3))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (!FUNC_4(VAR_3, VAR_7))
   continue;

  VAR_8 = FUNC_10(&VAR_3->gt, VAR_7);
  if (VAR_8)
   goto cleanup;

  VAR_6 |= FUNC_1(VAR_7);
 }






 if (FUNC_7(VAR_6 != VAR_5))
  VAR_4->engine_mask = VAR_6;

 FUNC_6(VAR_3)->num_engines = FUNC_8(VAR_6);

 FUNC_12(&VAR_3->gt);

 FUNC_13(VAR_3);

 return 0;

cleanup:
 FUNC_11(VAR_3);
 return VAR_8;
}
