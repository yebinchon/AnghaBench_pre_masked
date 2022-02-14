
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_hdmi {int ddc_bus; } ;
struct TYPE_10__ {int dev; } ;
struct intel_encoder {TYPE_5__ base; } ;
struct i2c_adapter {int dummy; } ;
struct drm_scrambling {int supported; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_6__ {struct drm_scrambling scrambling; } ;
struct TYPE_7__ {TYPE_1__ scdc; } ;
struct TYPE_8__ {TYPE_2__ hdmi; } ;
struct drm_connector {int name; TYPE_4__ base; TYPE_3__ display_info; } ;


 int FUNC_0 (char*,int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,int) ;
 scalar_t__ FUNC_2 (struct i2c_adapter*,int) ;
 struct intel_hdmi* FUNC_3 (TYPE_5__*) ;
 struct i2c_adapter* FUNC_4 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 int FUNC_6 (int) ;

bool FUNC_7(struct intel_encoder *VAR_0,
           struct drm_connector *VAR_1,
           bool VAR_2,
           bool VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_0->base.dev);
 struct intel_hdmi *VAR_5 = FUNC_3(&VAR_0->base);
 struct drm_scrambling *VAR_6 =
  &VAR_1->display_info.hdmi.scdc.scrambling;
 struct i2c_adapter *VAR_7 =
  FUNC_4(VAR_4, VAR_5->ddc_bus);

 if (!VAR_6->supported)
  return 1;

 FUNC_0("[CONNECTOR:%d:%s] scrambling=%s, TMDS bit clock ratio=1/%d\n",
        VAR_1->base.id, VAR_1->name,
        FUNC_6(VAR_3), VAR_2 ? 40 : 10);


 return FUNC_1(VAR_7,
        VAR_2) &&
  FUNC_2(VAR_7, VAR_3);
}
