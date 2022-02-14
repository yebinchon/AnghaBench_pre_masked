
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct hdcp_port_data {int dummy; } ;
struct TYPE_4__ {struct hdcp_port_data port_data; } ;
struct intel_connector {TYPE_2__ base; TYPE_1__ hdcp; } ;
struct i915_hdcp_comp_master {int mei_dev; TYPE_3__* ops; } ;
struct hdcp2_ake_send_cert {int dummy; } ;
struct hdcp2_ake_no_stored_km {int dummy; } ;
struct drm_i915_private {int hdcp_comp_mutex; struct i915_hdcp_comp_master* hdcp_master; } ;
struct TYPE_6__ {int (* verify_receiver_cert_prepare_km ) (int ,struct hdcp_port_data*,struct hdcp2_ake_send_cert*,int*,struct hdcp2_ake_no_stored_km*,size_t*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct hdcp_port_data*,struct hdcp2_ake_send_cert*,int*,struct hdcp2_ake_no_stored_km*,size_t*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct intel_connector *VAR_1,
    struct hdcp2_ake_send_cert *VAR_2,
    bool *VAR_3,
    struct hdcp2_ake_no_stored_km *VAR_4,
    size_t *VAR_5)
{
 struct hdcp_port_data *VAR_6 = &VAR_1->hdcp.port_data;
 struct drm_i915_private *VAR_7 = FUNC_4(VAR_1->base.dev);
 struct i915_hdcp_comp_master *VAR_8;
 int VAR_9;

 FUNC_1(&VAR_7->hdcp_comp_mutex);
 VAR_8 = VAR_7->hdcp_master;

 if (!VAR_8 || !VAR_8->ops) {
  FUNC_2(&VAR_7->hdcp_comp_mutex);
  return -VAR_0;
 }

 VAR_9 = VAR_8->ops->verify_receiver_cert_prepare_km(VAR_8->mei_dev, VAR_6,
        VAR_2, VAR_3,
        VAR_4, VAR_5);
 if (VAR_9 < 0)
  FUNC_0("Verify rx_cert failed. %d\n", VAR_9);
 FUNC_2(&VAR_7->hdcp_comp_mutex);

 return VAR_9;
}
