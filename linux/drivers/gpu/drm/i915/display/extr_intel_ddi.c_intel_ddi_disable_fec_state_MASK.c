
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct intel_crtc_state {int fec_enable; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_1,
     const struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_1->base.dev);
 enum port VAR_4 = VAR_1->port;
 u32 VAR_5;

 if (!VAR_2->fec_enable)
  return;

 VAR_5 = FUNC_1(FUNC_0(VAR_4));
 VAR_5 &= ~VAR_0;
 FUNC_2(FUNC_0(VAR_4), VAR_5);
 FUNC_3(FUNC_0(VAR_4));
}
