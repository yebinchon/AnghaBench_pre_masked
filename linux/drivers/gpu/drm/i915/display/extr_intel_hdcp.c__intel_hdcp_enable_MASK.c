
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_hdcp {int hdcp_encrypted; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {int name; TYPE_2__ base; TYPE_1__* dev; } ;
struct intel_connector {TYPE_3__ base; struct intel_hdcp hdcp; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct intel_connector*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct intel_connector*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_7(struct intel_connector *VAR_2)
{
 struct intel_hdcp *VAR_3 = &VAR_2->hdcp;
 struct drm_i915_private *VAR_4 = VAR_2->base.dev->dev_private;
 int VAR_5, VAR_6, VAR_7 = 3;

 FUNC_0("[%s:%d] HDCP is being enabled...\n",
        VAR_2->base.name, VAR_2->base.base.id);

 if (!FUNC_3(VAR_4)) {
  FUNC_1("HDCP key Load is not possible\n");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = FUNC_6(VAR_4);
  if (!VAR_6)
   break;
  FUNC_5(VAR_4);
 }
 if (VAR_6) {
  FUNC_1("Could not load HDCP keys, (%d)\n", VAR_6);
  return VAR_6;
 }


 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
  VAR_6 = FUNC_4(VAR_2);
  if (!VAR_6) {
   VAR_3->hdcp_encrypted = 1;
   return 0;
  }

  FUNC_0("HDCP Auth failure (%d)\n", VAR_6);


  FUNC_2(VAR_2);
 }

 FUNC_0("HDCP authentication failed (%d tries/%d)\n", VAR_7, VAR_6);
 return VAR_6;
}
