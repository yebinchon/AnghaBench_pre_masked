
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_digital_port {int (* set_infoframes ) (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;} ;
struct intel_crtc_state {int has_infoframe; } ;
struct drm_connector_state {int dummy; } ;


 struct intel_digital_port* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_2 (struct intel_encoder*,int ,struct intel_crtc_state const*,struct drm_connector_state const*) ;

__attribute__((used)) static void FUNC_3(struct intel_encoder *VAR_0,
      const struct intel_crtc_state *VAR_1,
      const struct drm_connector_state *VAR_2)
{
 struct intel_digital_port *VAR_3 =
  FUNC_0(&VAR_0->base);

 FUNC_1(VAR_0, VAR_1);

 VAR_3->set_infoframes(VAR_0,
           VAR_1->has_infoframe,
           VAR_1, VAR_2);
}
