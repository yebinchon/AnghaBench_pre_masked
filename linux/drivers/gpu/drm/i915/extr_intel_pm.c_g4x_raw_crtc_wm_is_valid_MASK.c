
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_6__ {int max_level; } ;
struct drm_i915_private {TYPE_3__ wm; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state const*,int ,int) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const struct intel_crtc_state *VAR_3,
         int VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_1(VAR_3->base.crtc->dev);

 if (VAR_4 > VAR_5->wm.max_level)
  return 0;

 return FUNC_0(VAR_3, VAR_1, VAR_4) &&
  FUNC_0(VAR_3, VAR_2, VAR_4) &&
  FUNC_0(VAR_3, VAR_0, VAR_4);
}
