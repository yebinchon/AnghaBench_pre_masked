
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int p2_fast; int p2_slow; int dot_limit; } ;
struct intel_limit {TYPE_3__ p2; } ;
struct TYPE_5__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state const*,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(const struct intel_limit *VAR_1,
     const struct intel_crtc_state *VAR_2,
     int VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_2->base.crtc->dev);

 if (FUNC_0(VAR_2, VAR_0)) {





  if (FUNC_1(VAR_4))
   return VAR_1->p2.p2_fast;
  else
   return VAR_1->p2.p2_slow;
 } else {
  if (VAR_3 < VAR_1->p2.dot_limit)
   return VAR_1->p2.p2_slow;
  else
   return VAR_1->p2.p2_fast;
 }
}
