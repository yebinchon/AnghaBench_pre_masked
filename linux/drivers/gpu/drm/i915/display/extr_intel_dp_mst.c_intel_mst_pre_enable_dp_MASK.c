
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_3__ base; } ;
struct intel_dp_mst_encoder {struct intel_connector* connector; struct intel_digital_port* primary; } ;
struct intel_dp {scalar_t__ active_mst_links; int mst_mgr; } ;
struct TYPE_5__ {int port; int (* pre_enable ) (TYPE_2__*,struct intel_crtc_state const*,int *) ;} ;
struct intel_digital_port {TYPE_2__ base; struct intel_dp dp; } ;
struct TYPE_4__ {int tu; } ;
struct intel_crtc_state {TYPE_1__ dp_m_n; int pbn; } ;
struct intel_connector {int port; struct intel_encoder* encoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 struct intel_dp_mst_encoder* FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct intel_crtc_state const*) ;
 int FUNC_10 (struct intel_dp*,int ) ;
 int FUNC_11 (TYPE_2__*,struct intel_crtc_state const*,int *) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 struct intel_connector* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct intel_encoder *VAR_1,
        const struct intel_crtc_state *VAR_2,
        const struct drm_connector_state *VAR_3)
{
 struct intel_dp_mst_encoder *VAR_4 = FUNC_8(&VAR_1->base);
 struct intel_digital_port *VAR_5 = VAR_4->primary;
 struct intel_dp *VAR_6 = &VAR_5->dp;
 struct drm_i915_private *VAR_7 = FUNC_12(VAR_1->base.dev);
 enum port VAR_8 = VAR_5->base.port;
 struct intel_connector *VAR_9 =
  FUNC_13(VAR_3->connector);
 int VAR_10;
 u32 VAR_11;




 VAR_9->encoder = VAR_1;
 VAR_4->connector = VAR_9;

 FUNC_1("active links %d\n", VAR_6->active_mst_links);

 if (VAR_6->active_mst_links == 0)
  FUNC_10(VAR_6, VAR_0);

 FUNC_6(&VAR_6->mst_mgr, VAR_9->port, 1);

 if (VAR_6->active_mst_links == 0)
  VAR_5->base.pre_enable(&VAR_5->base,
      VAR_2, ((void*)0));

 VAR_10 = FUNC_5(&VAR_6->mst_mgr,
           VAR_9->port,
           VAR_2->pbn,
           VAR_2->dp_m_n.tu);
 if (!VAR_10)
  FUNC_2("failed to allocate vcpi\n");

 VAR_6->active_mst_links++;
 VAR_11 = FUNC_3(FUNC_0(VAR_8));
 FUNC_4(FUNC_0(VAR_8), VAR_11);

 VAR_10 = FUNC_7(&VAR_6->mst_mgr);

 FUNC_9(VAR_2);
}
