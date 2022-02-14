
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_printer {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int platform; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 TYPE_1__* FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int VAR_4 ;
 struct drm_printer FUNC_7 (char*) ;
 int FUNC_8 (struct drm_printer*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,struct drm_printer*) ;
 int FUNC_10 (int ,struct drm_printer*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(struct drm_i915_private *VAR_5)
{
 if (VAR_4 & VAR_3) {
  struct drm_printer VAR_6 = FUNC_7("i915 device info:");

  FUNC_8(&VAR_6, "pciid=0x%04x rev=0x%02x platform=%s (subplatform=0x%x) gen=%i\n",
      FUNC_1(VAR_5),
      FUNC_4(VAR_5),
      FUNC_11(FUNC_3(VAR_5)->platform),
      FUNC_12(FUNC_6(VAR_5),
          FUNC_3(VAR_5)->platform),
      FUNC_2(VAR_5));

  FUNC_9(FUNC_3(VAR_5), &VAR_6);
  FUNC_10(FUNC_6(VAR_5), &VAR_6);
 }

 if (FUNC_5(VAR_0))
  FUNC_0("DRM_I915_DEBUG enabled\n");
 if (FUNC_5(VAR_1))
  FUNC_0("DRM_I915_DEBUG_GEM enabled\n");
 if (FUNC_5(VAR_2))
  FUNC_0("DRM_I915_DEBUG_RUNTIME_PM enabled\n");
}
