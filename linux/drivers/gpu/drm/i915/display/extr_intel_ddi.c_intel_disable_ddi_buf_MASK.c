
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_4,
      const struct intel_crtc_state *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_6(VAR_4->base.dev);
 enum port VAR_7 = VAR_4->port;
 bool VAR_8 = 0;
 u32 VAR_9;

 VAR_9 = FUNC_2(FUNC_0(VAR_7));
 if (VAR_9 & VAR_0) {
  VAR_9 &= ~VAR_0;
  FUNC_3(FUNC_0(VAR_7), VAR_9);
  VAR_8 = 1;
 }

 VAR_9 = FUNC_2(FUNC_1(VAR_7));
 VAR_9 &= ~(VAR_1 | VAR_2);
 VAR_9 |= VAR_3;
 FUNC_3(FUNC_1(VAR_7), VAR_9);


 FUNC_4(VAR_4, VAR_5);

 if (VAR_8)
  FUNC_5(VAR_6, VAR_7);
}
