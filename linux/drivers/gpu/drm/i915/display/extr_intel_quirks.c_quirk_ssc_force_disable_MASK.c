
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int quirks; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_1)
{
 VAR_1->quirks |= VAR_0;
 FUNC_0("applying lvds SSC disable quirk\n");
}
