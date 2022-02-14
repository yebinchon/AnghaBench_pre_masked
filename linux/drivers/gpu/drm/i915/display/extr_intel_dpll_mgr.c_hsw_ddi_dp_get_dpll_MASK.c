
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_shared_dpll {int dummy; } ;
struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {int port_clock; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 struct intel_shared_dpll* FUNC_1 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static struct intel_shared_dpll *
FUNC_3(struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_3->base.crtc->dev);
 struct intel_shared_dpll *VAR_5;
 enum intel_dpll_id VAR_6;
 int VAR_7 = VAR_3->port_clock;

 switch (VAR_7 / 2) {
 case 81000:
  VAR_6 = VAR_2;
  break;
 case 135000:
  VAR_6 = VAR_0;
  break;
 case 270000:
  VAR_6 = VAR_1;
  break;
 default:
  FUNC_0("Invalid clock for DP: %d\n", VAR_7);
  return ((void*)0);
 }

 VAR_5 = FUNC_1(VAR_4, VAR_6);

 if (!VAR_5)
  return ((void*)0);

 return VAR_5;
}
