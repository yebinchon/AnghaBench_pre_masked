
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct intel_dp_mst_encoder {int * connector; struct intel_digital_port* primary; } ;
struct intel_dp {scalar_t__ active_mst_links; int mst_mgr; } ;
struct TYPE_2__ {int (* post_disable ) (TYPE_1__*,struct intel_crtc_state const*,int *) ;} ;
struct intel_digital_port {TYPE_1__ base; struct intel_dp dp; } ;
struct intel_crtc_state {int dummy; } ;
struct intel_connector {int port; } ;
struct drm_connector_state {int connector; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 struct intel_dp_mst_encoder* FUNC_5 (int *) ;
 int FUNC_6 (struct intel_crtc_state const*) ;
 int FUNC_7 (struct intel_dp*,int ) ;
 int FUNC_8 (TYPE_1__*,struct intel_crtc_state const*,int *) ;
 struct intel_connector* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_encoder *VAR_1,
          const struct intel_crtc_state *VAR_2,
          const struct drm_connector_state *VAR_3)
{
 struct intel_dp_mst_encoder *VAR_4 = FUNC_5(&VAR_1->base);
 struct intel_digital_port *VAR_5 = VAR_4->primary;
 struct intel_dp *VAR_6 = &VAR_5->dp;
 struct intel_connector *VAR_7 =
  FUNC_9(VAR_3->connector);

 FUNC_6(VAR_2);


 FUNC_1(&VAR_6->mst_mgr);

 FUNC_4(&VAR_6->mst_mgr);

 FUNC_2(&VAR_6->mst_mgr, VAR_7->port);





 FUNC_3(&VAR_6->mst_mgr, VAR_7->port,
         0);

 VAR_6->active_mst_links--;

 VAR_4->connector = ((void*)0);
 if (VAR_6->active_mst_links == 0) {
  FUNC_7(VAR_6, VAR_0);
  VAR_5->base.post_disable(&VAR_5->base,
        VAR_2, ((void*)0));
 }

 FUNC_0("active links %d\n", VAR_6->active_mst_links);
}
