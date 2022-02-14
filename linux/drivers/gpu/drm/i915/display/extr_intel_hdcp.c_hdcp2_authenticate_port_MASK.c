
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct hdcp_port_data {int dummy; } ;
struct TYPE_5__ {struct hdcp_port_data port_data; } ;
struct intel_connector {TYPE_3__ base; TYPE_2__ hdcp; } ;
struct i915_hdcp_comp_master {int mei_dev; TYPE_1__* ops; } ;
struct drm_i915_private {int hdcp_comp_mutex; struct i915_hdcp_comp_master* hdcp_master; } ;
struct TYPE_4__ {int (* enable_hdcp_authentication ) (int ,struct hdcp_port_data*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct hdcp_port_data*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct intel_connector *VAR_1)
{
 struct hdcp_port_data *VAR_2 = &VAR_1->hdcp.port_data;
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_1->base.dev);
 struct i915_hdcp_comp_master *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3->hdcp_comp_mutex);
 VAR_4 = VAR_3->hdcp_master;

 if (!VAR_4 || !VAR_4->ops) {
  FUNC_2(&VAR_3->hdcp_comp_mutex);
  return -VAR_0;
 }

 VAR_5 = VAR_4->ops->enable_hdcp_authentication(VAR_4->mei_dev, VAR_2);
 if (VAR_5 < 0)
  FUNC_0("Enable hdcp auth failed. %d\n", VAR_5);
 FUNC_2(&VAR_3->hdcp_comp_mutex);

 return VAR_5;
}
