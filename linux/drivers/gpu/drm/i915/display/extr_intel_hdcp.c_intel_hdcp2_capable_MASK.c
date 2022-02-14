
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_hdcp {TYPE_1__* shim; int hdcp2_supported; } ;
struct intel_digital_port {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {struct intel_hdcp hdcp; TYPE_2__ base; } ;
struct drm_i915_private {int hdcp_comp_mutex; int hdcp_master; int hdcp_comp_added; } ;
struct TYPE_3__ {int (* hdcp_2_2_capable ) (struct intel_digital_port*,int*) ;} ;


 struct intel_digital_port* FUNC_0 (struct intel_connector*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_digital_port*,int*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

bool FUNC_5(struct intel_connector *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_4(VAR_0->base.dev);
 struct intel_digital_port *VAR_2 = FUNC_0(VAR_0);
 struct intel_hdcp *VAR_3 = &VAR_0->hdcp;
 bool VAR_4 = 0;


 if (!VAR_3->hdcp2_supported)
  return 0;


 FUNC_1(&VAR_1->hdcp_comp_mutex);
 if (!VAR_1->hdcp_comp_added || !VAR_1->hdcp_master) {
  FUNC_2(&VAR_1->hdcp_comp_mutex);
  return 0;
 }
 FUNC_2(&VAR_1->hdcp_comp_mutex);


 VAR_3->shim->hdcp_2_2_capable(VAR_2, &VAR_4);

 return VAR_4;
}
