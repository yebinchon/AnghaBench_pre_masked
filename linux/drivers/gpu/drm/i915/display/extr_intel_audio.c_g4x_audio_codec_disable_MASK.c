
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


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_encoder *VAR_6,
        const struct intel_crtc_state *VAR_7,
        const struct drm_connector_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_3(VAR_6->base.dev);
 u32 VAR_10, VAR_11;

 FUNC_0("Disable audio codec\n");

 VAR_11 = FUNC_1(VAR_1);
 if (VAR_11 == VAR_4 || VAR_11 == VAR_5)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_3;


 VAR_11 = FUNC_1(VAR_0);
 VAR_11 &= ~VAR_10;
 FUNC_2(VAR_0, VAR_11);
}
