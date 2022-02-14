
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_dpll_hw_state {int cfgcr0; } ;
struct intel_crtc_state {int port_clock; struct intel_dpll_hw_state dpll_hw_state; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drm_i915_private*,struct intel_dpll_hw_state*) ;
 int FUNC_2 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_2,
         struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_2->base.dev);
 struct intel_dpll_hw_state *VAR_5 = &VAR_3->dpll_hw_state;
 int VAR_6;

 if (VAR_5->cfgcr0 & VAR_0) {
  VAR_6 = FUNC_1(VAR_4, VAR_5);
 } else {
  VAR_6 = VAR_5->cfgcr0 & VAR_1;

  switch (VAR_6) {
  case 128:
   VAR_6 = 81000;
   break;
  case 135:
   VAR_6 = 108000;
   break;
  case 134:
   VAR_6 = 135000;
   break;
  case 133:
   VAR_6 = 162000;
   break;
  case 132:
   VAR_6 = 216000;
   break;
  case 131:
   VAR_6 = 270000;
   break;
  case 130:
   VAR_6 = 324000;
   break;
  case 129:
   VAR_6 = 405000;
   break;
  default:
   FUNC_0(1, "Unsupported link rate\n");
   break;
  }
  VAR_6 *= 2;
 }

 VAR_3->port_clock = VAR_6;

 FUNC_2(VAR_3);
}
