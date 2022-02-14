
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;





const char *FUNC_1(struct drm_i915_private *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 129: return " uncached";
 case 130: return FUNC_0(VAR_0) ? " LLC" : " snooped";
 case 131: return " L3+LLC";
 case 128: return " WT";
 default: return "";
 }
}
