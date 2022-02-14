
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {int cec_notifier; int has_hdmi_sink; int has_audio; int ddc_bus; } ;
struct i2c_adapter {int dummy; } ;
struct edid {int input; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {int dev; } ;
typedef int intel_wakeref_t ;
struct TYPE_2__ {struct edid* detect_edid; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct edid*) ;
 int FUNC_2 (struct edid*) ;
 int FUNC_3 (struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*,struct i2c_adapter*) ;
 struct intel_hdmi* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (struct drm_i915_private*,int ,int ) ;
 int FUNC_8 (struct i2c_adapter*,int) ;
 struct i2c_adapter* FUNC_9 (struct drm_i915_private*,int ) ;
 int FUNC_10 (struct i2c_adapter*) ;
 int FUNC_11 (struct drm_connector*,int ) ;
 struct drm_i915_private* FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (struct drm_connector*) ;

__attribute__((used)) static bool
FUNC_14(struct drm_connector *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_12(VAR_2->dev);
 struct intel_hdmi *VAR_4 = FUNC_5(VAR_2);
 intel_wakeref_t VAR_5;
 struct edid *VAR_6;
 bool VAR_7 = 0;
 struct i2c_adapter *VAR_8;

 VAR_5 = FUNC_6(VAR_3, VAR_1);

 VAR_8 = FUNC_9(VAR_3, VAR_4->ddc_bus);

 VAR_6 = FUNC_4(VAR_2, VAR_8);

 if (!VAR_6 && !FUNC_10(VAR_8)) {
  FUNC_0("HDMI GMBUS EDID read failed, retry using GPIO bit-banging\n");
  FUNC_8(VAR_8, 1);
  VAR_6 = FUNC_4(VAR_2, VAR_8);
  FUNC_8(VAR_8, 0);
 }

 FUNC_11(VAR_2, VAR_6 != ((void*)0));

 FUNC_7(VAR_3, VAR_1, VAR_5);

 FUNC_13(VAR_2)->detect_edid = VAR_6;
 if (VAR_6 && VAR_6->input & VAR_0) {
  VAR_4->has_audio = FUNC_3(VAR_6);
  VAR_4->has_hdmi_sink = FUNC_2(VAR_6);

  VAR_7 = 1;
 }

 FUNC_1(VAR_4->cec_notifier, VAR_6);

 return VAR_7;
}
