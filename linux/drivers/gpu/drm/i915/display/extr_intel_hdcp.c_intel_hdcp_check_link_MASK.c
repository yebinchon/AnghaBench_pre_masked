
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_hdcp {scalar_t__ value; int mutex; int prop_work; TYPE_3__* shim; int hdcp_encrypted; } ;
struct TYPE_7__ {int port; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {TYPE_4__ base; int name; TYPE_1__* dev; } ;
struct intel_connector {TYPE_5__ base; struct intel_hdcp hdcp; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_8__ {scalar_t__ (* check_link ) (struct intel_digital_port*) ;} ;
struct TYPE_6__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int,...) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct intel_connector*) ;
 int FUNC_6 (struct intel_connector*) ;
 struct intel_digital_port* FUNC_7 (struct intel_connector*) ;
 int FUNC_8 (struct intel_connector*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct intel_digital_port*) ;

__attribute__((used)) static int FUNC_13(struct intel_connector *VAR_5)
{
 struct intel_hdcp *VAR_6 = &VAR_5->hdcp;
 struct drm_i915_private *VAR_7 = VAR_5->base.dev->dev_private;
 struct intel_digital_port *VAR_8 = FUNC_7(VAR_5);
 enum port VAR_9 = VAR_8->base.port;
 int VAR_10 = 0;

 FUNC_9(&VAR_6->mutex);


 if (VAR_6->value != VAR_1 ||
     !VAR_6->hdcp_encrypted) {
  VAR_10 = -VAR_3;
  goto out;
 }

 if (FUNC_4(!FUNC_8(VAR_5))) {
  FUNC_1("%s:%d HDCP link stopped encryption,%x\n",
     VAR_5->base.name, VAR_5->base.base.id,
     FUNC_2(FUNC_3(VAR_9)));
  VAR_10 = -VAR_4;
  VAR_6->value = VAR_0;
  FUNC_11(&VAR_6->prop_work);
  goto out;
 }

 if (VAR_6->shim->check_link(VAR_8)) {
  if (VAR_6->value != VAR_2) {
   VAR_6->value = VAR_1;
   FUNC_11(&VAR_6->prop_work);
  }
  goto out;
 }

 FUNC_0("[%s:%d] HDCP link failed, retrying authentication\n",
        VAR_5->base.name, VAR_5->base.base.id);

 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10) {
  FUNC_1("Failed to disable hdcp (%d)\n", VAR_10);
  VAR_6->value = VAR_0;
  FUNC_11(&VAR_6->prop_work);
  goto out;
 }

 VAR_10 = FUNC_6(VAR_5);
 if (VAR_10) {
  FUNC_1("Failed to enable hdcp (%d)\n", VAR_10);
  VAR_6->value = VAR_0;
  FUNC_11(&VAR_6->prop_work);
  goto out;
 }

out:
 FUNC_10(&VAR_6->mutex);
 return VAR_10;
}
