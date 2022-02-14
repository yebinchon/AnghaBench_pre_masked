
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int port_data; } ;
struct TYPE_6__ {int dev; } ;
struct intel_connector {TYPE_2__ hdcp; TYPE_3__ base; } ;
struct i915_hdcp_comp_master {int mei_dev; TYPE_1__* ops; } ;
struct drm_i915_private {int hdcp_comp_mutex; struct i915_hdcp_comp_master* hdcp_master; } ;
struct TYPE_4__ {int (* close_hdcp_session ) (int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct intel_connector *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.dev);
 struct i915_hdcp_comp_master *VAR_3;
 int VAR_4;

 FUNC_0(&VAR_2->hdcp_comp_mutex);
 VAR_3 = VAR_2->hdcp_master;

 if (!VAR_3 || !VAR_3->ops) {
  FUNC_1(&VAR_2->hdcp_comp_mutex);
  return -VAR_0;
 }

 VAR_4 = VAR_3->ops->close_hdcp_session(VAR_3->mei_dev,
          &VAR_1->hdcp.port_data);
 FUNC_1(&VAR_2->hdcp_comp_mutex);

 return VAR_4;
}
