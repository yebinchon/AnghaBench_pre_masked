
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ enable_gvt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct drm_i915_private*) ;

int FUNC_5(struct drm_i915_private *VAR_3)
{
 int VAR_4;

 if (FUNC_3(VAR_3))
  return -VAR_1;

 if (!VAR_2.enable_gvt) {
  FUNC_0("GVT-g is disabled by kernel params\n");
  return 0;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_1("i915 GVT-g loading failed due to Graphics virtualization is not yet supported with GuC submission\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  FUNC_0("Fail to init GVT device\n");
  goto bail;
 }

 return 0;

bail:
 VAR_2.enable_gvt = 0;
 return 0;
}
