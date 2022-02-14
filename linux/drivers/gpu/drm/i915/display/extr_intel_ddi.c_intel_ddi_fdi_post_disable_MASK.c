
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_5 ;
 int FUNC_6 (struct intel_encoder*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_8 (int ) ;

void FUNC_9(struct intel_encoder *VAR_6,
    const struct intel_crtc_state *VAR_7,
    const struct drm_connector_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_8(VAR_6->base.dev);
 u32 VAR_10;







 VAR_10 = FUNC_4(FUNC_0(VAR_5));
 VAR_10 &= ~VAR_1;
 FUNC_5(FUNC_0(VAR_5), VAR_10);

 FUNC_7(VAR_6, VAR_7);
 FUNC_6(VAR_6);

 VAR_10 = FUNC_4(FUNC_1(VAR_5));
 VAR_10 &= ~(VAR_4 | VAR_3);
 VAR_10 |= FUNC_3(2) | FUNC_2(2);
 FUNC_5(FUNC_1(VAR_5), VAR_10);

 VAR_10 = FUNC_4(FUNC_0(VAR_5));
 VAR_10 &= ~VAR_0;
 FUNC_5(FUNC_0(VAR_5), VAR_10);

 VAR_10 = FUNC_4(FUNC_0(VAR_5));
 VAR_10 &= ~VAR_2;
 FUNC_5(FUNC_0(VAR_5), VAR_10);
}
