
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_hdcp {int hdcp_encrypted; TYPE_5__* shim; } ;
struct TYPE_7__ {int port; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_9__ {TYPE_3__ base; int name; TYPE_1__* dev; } ;
struct intel_connector {TYPE_4__ base; struct intel_hdcp hdcp; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_10__ {int (* toggle_signalling ) (struct intel_digital_port*,int) ;} ;
struct TYPE_6__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 struct intel_digital_port* FUNC_5 (struct intel_connector*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int ,int ,int ) ;
 int FUNC_7 (struct intel_digital_port*,int) ;

__attribute__((used)) static int FUNC_8(struct intel_connector *VAR_2)
{
 struct intel_hdcp *VAR_3 = &VAR_2->hdcp;
 struct drm_i915_private *VAR_4 = VAR_2->base.dev->dev_private;
 struct intel_digital_port *VAR_5 = FUNC_5(VAR_2);
 enum port VAR_6 = VAR_5->base.port;
 int VAR_7;

 FUNC_0("[%s:%d] HDCP is being disabled...\n",
        VAR_2->base.name, VAR_2->base.base.id);

 VAR_3->hdcp_encrypted = 0;
 FUNC_2(FUNC_3(VAR_6), 0);
 if (FUNC_6(VAR_4, FUNC_4(VAR_6), ~0,
        VAR_0)) {
  FUNC_1("Failed to disable HDCP, timeout clearing status\n");
  return -VAR_1;
 }

 VAR_7 = VAR_3->shim->toggle_signalling(VAR_5, 0);
 if (VAR_7) {
  FUNC_1("Failed to disable HDCP signalling\n");
  return VAR_7;
 }

 FUNC_0("HDCP is disabled\n");
 return 0;
}
