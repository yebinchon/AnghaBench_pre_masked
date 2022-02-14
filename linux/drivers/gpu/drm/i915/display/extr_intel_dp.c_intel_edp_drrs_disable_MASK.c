
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_dp {TYPE_3__* attached_connector; } ;
struct intel_crtc_state {int has_drrs; } ;
struct TYPE_8__ {scalar_t__ refresh_rate_type; int work; int mutex; int * dp; } ;
struct drm_i915_private {TYPE_4__ drrs; } ;
struct TYPE_6__ {TYPE_1__* fixed_mode; } ;
struct TYPE_7__ {TYPE_2__ panel; } ;
struct TYPE_5__ {int vrefresh; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (struct drm_i915_private*,struct intel_crtc_state const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct intel_dp *VAR_1,
       const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_2->has_drrs)
  return;

 FUNC_3(&VAR_3->drrs.mutex);
 if (!VAR_3->drrs.dp) {
  FUNC_4(&VAR_3->drrs.mutex);
  return;
 }

 if (VAR_3->drrs.refresh_rate_type == VAR_0)
  FUNC_2(VAR_3, VAR_2,
   VAR_1->attached_connector->panel.fixed_mode->vrefresh);

 VAR_3->drrs.dp = ((void*)0);
 FUNC_4(&VAR_3->drrs.mutex);

 FUNC_0(&VAR_3->drrs.work);
}
