
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int port_clock; int shared_dpll; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;



 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct intel_crtc_state*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_6,
         struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_6(VAR_6->base.dev);
 int VAR_9 = 0;
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_5(VAR_7->shared_dpll);
 switch (VAR_10 & VAR_0) {
 case 131:
  VAR_9 = 81000;
  break;
 case 133:
  VAR_9 = 135000;
  break;
 case 132:
  VAR_9 = 270000;
  break;
 case 129:
  VAR_9 = FUNC_4(VAR_8, FUNC_2(0));
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_8, FUNC_2(1));
  break;
 case 130:
  VAR_11 = FUNC_0(VAR_1) & VAR_5;
  if (VAR_11 == VAR_4)
   VAR_9 = 81000;
  else if (VAR_11 == VAR_2)
   VAR_9 = 135000;
  else if (VAR_11 == VAR_3)
   VAR_9 = 270000;
  else {
   FUNC_1(1, "bad spll freq\n");
   return;
  }
  break;
 default:
  FUNC_1(1, "bad port clock sel\n");
  return;
 }

 VAR_7->port_clock = VAR_9 * 2;

 FUNC_3(VAR_7);
}
