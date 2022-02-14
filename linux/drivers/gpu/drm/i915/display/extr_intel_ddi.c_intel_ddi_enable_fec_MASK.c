
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
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int ,int ,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_2,
     const struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_6(VAR_2->base.dev);
 enum port VAR_5 = VAR_2->port;
 u32 VAR_6;

 if (!VAR_3->fec_enable)
  return;

 VAR_6 = FUNC_3(FUNC_0(VAR_5));
 VAR_6 |= VAR_0;
 FUNC_4(FUNC_0(VAR_5), VAR_6);

 if (FUNC_5(VAR_4, FUNC_1(VAR_5),
      VAR_1, 1))
  FUNC_2("Timed out waiting for FEC Enable Status\n");
}
