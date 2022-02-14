
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int pps_mmio_base; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3)
{
 if (FUNC_0(VAR_3) || FUNC_2(VAR_3))
  VAR_3->pps_mmio_base = VAR_0;
 else if (FUNC_3(VAR_3) || FUNC_1(VAR_3))
  VAR_3->pps_mmio_base = VAR_2;
 else
  VAR_3->pps_mmio_base = VAR_1;

 FUNC_4(VAR_3);
}
