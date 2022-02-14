
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ enable_gvt; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;

void FUNC_3(struct drm_i915_private *VAR_1)
{
 if (!VAR_0.enable_gvt)
  return;

 if (FUNC_1(VAR_1)) {
  FUNC_0("GVT-g is disabled for guest\n");
  goto bail;
 }

 if (!FUNC_2(VAR_1)) {
  FUNC_0("Unsupported device. GVT-g is disabled\n");
  goto bail;
 }

 return;
bail:
 VAR_0.enable_gvt = 0;
}
