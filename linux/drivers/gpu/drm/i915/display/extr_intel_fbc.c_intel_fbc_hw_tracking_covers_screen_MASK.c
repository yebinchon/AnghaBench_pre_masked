
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ adjusted_y; scalar_t__ adjusted_x; } ;
struct TYPE_6__ {TYPE_2__ plane; } ;
struct intel_fbc {TYPE_3__ state_cache; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (TYPE_3__*,unsigned int*,unsigned int*) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct intel_crtc *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_5(VAR_0->base.dev);
 struct intel_fbc *VAR_2 = &VAR_1->fbc;
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_0(VAR_1) >= 10 || FUNC_2(VAR_1)) {
  VAR_5 = 5120;
  VAR_6 = 4096;
 } else if (FUNC_0(VAR_1) >= 8 || FUNC_3(VAR_1)) {
  VAR_5 = 4096;
  VAR_6 = 4096;
 } else if (FUNC_1(VAR_1) || FUNC_0(VAR_1) >= 5) {
  VAR_5 = 4096;
  VAR_6 = 2048;
 } else {
  VAR_5 = 2048;
  VAR_6 = 1536;
 }

 FUNC_4(&VAR_2->state_cache, &VAR_3,
     &VAR_4);
 VAR_3 += VAR_2->state_cache.plane.adjusted_x;
 VAR_4 += VAR_2->state_cache.plane.adjusted_y;

 return VAR_3 <= VAR_5 && VAR_4 <= VAR_6;
}
