
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int base; } ;
struct intel_dp_mst_encoder {struct intel_digital_port* primary; } ;
struct intel_dp {scalar_t__ active_mst_links; } ;
struct TYPE_2__ {int (* pre_pll_enable ) (TYPE_1__*,struct intel_crtc_state const*,int *) ;} ;
struct intel_digital_port {TYPE_1__ base; struct intel_dp dp; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 struct intel_dp_mst_encoder* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct intel_crtc_state const*,int *) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_0,
     const struct intel_crtc_state *VAR_1,
     const struct drm_connector_state *VAR_2)
{
 struct intel_dp_mst_encoder *VAR_3 = FUNC_0(&VAR_0->base);
 struct intel_digital_port *VAR_4 = VAR_3->primary;
 struct intel_dp *VAR_5 = &VAR_4->dp;

 if (VAR_5->active_mst_links == 0)
  VAR_4->base.pre_pll_enable(&VAR_4->base,
          VAR_1, ((void*)0));
}
