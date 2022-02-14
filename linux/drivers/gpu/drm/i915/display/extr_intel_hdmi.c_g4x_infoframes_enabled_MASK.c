
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


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct intel_encoder *VAR_6,
      const struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_2(VAR_6->base.dev);
 u32 VAR_9 = FUNC_0(VAR_0);

 if ((VAR_9 & VAR_1) == 0)
  return 0;

 if ((VAR_9 & VAR_5) != FUNC_1(VAR_6->port))
  return 0;

 return VAR_9 & (VAR_2 |
        VAR_4 | VAR_3);
}
