
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_hdcp_shim {int dummy; } ;
struct TYPE_3__ {int streams; } ;
struct intel_hdcp {int hdcp2_supported; int cp_irq_queue; int prop_work; int check_work; int mutex; struct intel_hdcp_shim const* shim; TYPE_1__ port_data; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {TYPE_2__ base; struct intel_hdcp hdcp; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_connector*,struct intel_hdcp_shim const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 struct drm_i915_private* FUNC_8 (int ) ;

int FUNC_9(struct intel_connector *VAR_3,
      const struct intel_hdcp_shim *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_8(VAR_3->base.dev);
 struct intel_hdcp *VAR_6 = &VAR_3->hdcp;
 int VAR_7;

 if (!VAR_4)
  return -VAR_0;

 if (FUNC_5(VAR_5))
  FUNC_4(VAR_3, VAR_4);

 VAR_7 =
 FUNC_2(&VAR_3->base,
        VAR_6->hdcp2_supported);
 if (VAR_7) {
  VAR_6->hdcp2_supported = 0;
  FUNC_6(VAR_6->port_data.streams);
  return VAR_7;
 }

 VAR_6->shim = VAR_4;
 FUNC_7(&VAR_6->mutex);
 FUNC_0(&VAR_6->check_work, VAR_1);
 FUNC_1(&VAR_6->prop_work, VAR_2);
 FUNC_3(&VAR_6->cp_irq_queue);

 return 0;
}
