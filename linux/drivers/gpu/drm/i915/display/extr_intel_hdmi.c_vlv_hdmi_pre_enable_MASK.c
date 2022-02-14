
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_digital_port {int (* set_infoframes ) (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct intel_crtc_state {int has_infoframe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 struct intel_digital_port* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_5 (struct intel_encoder*,int,int,int,int) ;
 int FUNC_6 (struct drm_i915_private*,struct intel_digital_port*,int) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_0,
    const struct intel_crtc_state *VAR_1,
    const struct drm_connector_state *VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_0(&VAR_0->base);
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_0->base.dev);

 FUNC_4(VAR_0, VAR_1);


 FUNC_5(VAR_0, 0x2b245f5f, 0x00002000, 0x5578b83a,
     0x2b247878);

 VAR_3->set_infoframes(VAR_0,
         VAR_1->has_infoframe,
         VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1, VAR_2);

 FUNC_6(VAR_4, VAR_3, 0x0);
}
