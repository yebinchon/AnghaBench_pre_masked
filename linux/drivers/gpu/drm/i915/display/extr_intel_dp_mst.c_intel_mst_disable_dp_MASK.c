
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp_mst_encoder {struct intel_digital_port* primary; } ;
struct intel_dp {int mst_mgr; int active_mst_links; } ;
struct intel_digital_port {struct intel_dp dp; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct intel_connector {int port; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 struct intel_dp_mst_encoder* FUNC_4 (int *) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 struct intel_connector* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_0,
     const struct intel_crtc_state *VAR_1,
     const struct drm_connector_state *VAR_2)
{
 struct intel_dp_mst_encoder *VAR_3 = FUNC_4(&VAR_0->base);
 struct intel_digital_port *VAR_4 = VAR_3->primary;
 struct intel_dp *VAR_5 = &VAR_4->dp;
 struct intel_connector *VAR_6 =
  FUNC_6(VAR_2->connector);
 int VAR_7;

 FUNC_0("active links %d\n", VAR_5->active_mst_links);

 FUNC_2(&VAR_5->mst_mgr, VAR_6->port);

 VAR_7 = FUNC_3(&VAR_5->mst_mgr);
 if (VAR_7) {
  FUNC_1("failed to update payload %d\n", VAR_7);
 }
 if (VAR_1->has_audio)
  FUNC_5(VAR_0,
       VAR_1, VAR_2);
}
