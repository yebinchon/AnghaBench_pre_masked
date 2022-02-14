
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct hdcp_port_data {int dummy; } ;
struct TYPE_6__ {struct hdcp_port_data port_data; } ;
struct intel_connector {TYPE_1__ base; TYPE_3__ hdcp; } ;
struct i915_hdcp_comp_master {int mei_dev; TYPE_2__* ops; } ;
struct hdcp2_rep_send_receiverid_list {int dummy; } ;
struct hdcp2_rep_send_ack {int dummy; } ;
struct drm_i915_private {int hdcp_comp_mutex; struct i915_hdcp_comp_master* hdcp_master; } ;
struct TYPE_5__ {int (* repeater_check_flow_prepare_ack ) (int ,struct hdcp_port_data*,struct hdcp2_rep_send_receiverid_list*,struct hdcp2_rep_send_ack*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct hdcp_port_data*,struct hdcp2_rep_send_receiverid_list*,struct hdcp2_rep_send_ack*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct intel_connector *VAR_1,
          struct hdcp2_rep_send_receiverid_list
        *VAR_2,
          struct hdcp2_rep_send_ack *VAR_3)
{
 struct hdcp_port_data *VAR_4 = &VAR_1->hdcp.port_data;
 struct drm_i915_private *VAR_5 = FUNC_4(VAR_1->base.dev);
 struct i915_hdcp_comp_master *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->hdcp_comp_mutex);
 VAR_6 = VAR_5->hdcp_master;

 if (!VAR_6 || !VAR_6->ops) {
  FUNC_2(&VAR_5->hdcp_comp_mutex);
  return -VAR_0;
 }

 VAR_7 = VAR_6->ops->repeater_check_flow_prepare_ack(VAR_6->mei_dev, VAR_4,
        VAR_2,
        VAR_3);
 if (VAR_7 < 0)
  FUNC_0("Verify rep topology failed. %d\n", VAR_7);
 FUNC_2(&VAR_5->hdcp_comp_mutex);

 return VAR_7;
}
