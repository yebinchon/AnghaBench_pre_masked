
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_hdmi {int cec_notifier; } ;
struct intel_encoder {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; int dev; } ;
typedef int intel_wakeref_t ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_4__ {struct intel_encoder base; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (struct intel_hdmi*) ;
 struct intel_hdmi* FUNC_4 (struct drm_connector*) ;
 int FUNC_5 (struct intel_encoder*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,int ) ;
 int FUNC_8 (struct drm_i915_private*,int ,int ) ;
 scalar_t__ FUNC_9 (struct drm_connector*) ;
 int FUNC_10 (struct drm_connector*) ;
 struct drm_i915_private* FUNC_11 (int ) ;

__attribute__((used)) static enum drm_connector_status
FUNC_12(struct drm_connector *VAR_3, bool VAR_4)
{
 enum drm_connector_status VAR_5 = VAR_2;
 struct drm_i915_private *VAR_6 = FUNC_11(VAR_3->dev);
 struct intel_hdmi *VAR_7 = FUNC_4(VAR_3);
 struct intel_encoder *VAR_8 = &FUNC_3(VAR_7)->base;
 intel_wakeref_t VAR_9;

 FUNC_0("[CONNECTOR:%d:%s]\n",
        VAR_3->base.id, VAR_3->name);

 VAR_9 = FUNC_7(VAR_6, VAR_0);

 if (FUNC_1(VAR_6) >= 11 &&
     !FUNC_5(VAR_8))
  goto out;

 FUNC_10(VAR_3);

 if (FUNC_9(VAR_3))
  VAR_5 = VAR_1;

out:
 FUNC_8(VAR_6, VAR_0, VAR_9);

 if (VAR_5 != VAR_1)
  FUNC_2(VAR_7->cec_notifier);





 FUNC_6(VAR_6);

 return VAR_5;
}
