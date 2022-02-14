
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct intel_dp_mst_encoder {struct intel_digital_port* primary; } ;
struct intel_dp {int mst_mgr; int active_mst_links; } ;
struct TYPE_3__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; struct intel_dp dp; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct intel_dp_mst_encoder* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int ,int ,int) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_encoder *VAR_1,
    const struct intel_crtc_state *VAR_2,
    const struct drm_connector_state *VAR_3)
{
 struct intel_dp_mst_encoder *VAR_4 = FUNC_5(&VAR_1->base);
 struct intel_digital_port *VAR_5 = VAR_4->primary;
 struct intel_dp *VAR_6 = &VAR_5->dp;
 struct drm_i915_private *VAR_7 = FUNC_8(VAR_1->base.dev);
 enum port VAR_8 = VAR_5->base.port;

 FUNC_1("active links %d\n", VAR_6->active_mst_links);

 if (FUNC_7(VAR_7, FUNC_0(VAR_8),
      VAR_0, 1))
  FUNC_2("Timed out waiting for ACT sent\n");

 FUNC_3(&VAR_6->mst_mgr);

 FUNC_4(&VAR_6->mst_mgr);
 if (VAR_2->has_audio)
  FUNC_6(VAR_1, VAR_2, VAR_3);
}
