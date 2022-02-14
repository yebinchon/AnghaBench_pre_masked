
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {int (* write_infoframe ) (struct intel_encoder*,struct intel_crtc_state const*,int ,struct drm_dsc_pps_infoframe*,int) ;} ;
struct drm_dsc_config {int dummy; } ;
struct intel_crtc_state {struct drm_dsc_config dp_dsc_cfg; } ;
struct drm_dsc_pps_infoframe {int pps_payload; int pps_header; } ;
typedef int dp_dsc_pps_sdp ;


 int VAR_0 ;
 struct intel_digital_port* FUNC_0 (struct intel_dp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct drm_dsc_config const*) ;
 struct intel_dp* FUNC_3 (int *) ;
 int FUNC_4 (struct intel_encoder*,struct intel_crtc_state const*,int ,struct drm_dsc_pps_infoframe*,int) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_1,
           const struct intel_crtc_state *VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_3(&VAR_1->base);
 struct intel_digital_port *VAR_4 = FUNC_0(VAR_3);
 const struct drm_dsc_config *VAR_5 = &VAR_2->dp_dsc_cfg;
 struct drm_dsc_pps_infoframe VAR_6;


 FUNC_1(&VAR_6.pps_header);


 FUNC_2(&VAR_6.pps_payload, VAR_5);

 VAR_4->write_infoframe(VAR_1, VAR_2,
     VAR_0, &VAR_6,
     sizeof(VAR_6));
}
