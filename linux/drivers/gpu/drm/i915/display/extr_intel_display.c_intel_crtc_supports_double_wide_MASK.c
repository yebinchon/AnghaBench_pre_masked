
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_crtc {scalar_t__ pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private const*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private const*) ;
 scalar_t__ VAR_0 ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(const struct intel_crtc *VAR_1)
{
 const struct drm_i915_private *VAR_2 = FUNC_2(VAR_1->base.dev);


 return FUNC_0(VAR_2) < 4 &&
  (VAR_1->pipe == VAR_0 || FUNC_1(VAR_2));
}
