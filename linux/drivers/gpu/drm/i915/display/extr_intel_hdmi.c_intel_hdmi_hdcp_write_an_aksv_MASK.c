
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct intel_hdmi {int ddc_bus; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct intel_digital_port {TYPE_3__ base; struct intel_hdmi hdmi; } ;
struct i2c_adapter {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct i2c_adapter* FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct intel_digital_port*,int ,int *,int ) ;

__attribute__((used)) static
int FUNC_4(struct intel_digital_port *VAR_2,
      u8 *VAR_3)
{
 struct intel_hdmi *VAR_4 = &VAR_2->hdmi;
 struct drm_i915_private *VAR_5 =
  VAR_2->base.base.dev->dev_private;
 struct i2c_adapter *VAR_6 = FUNC_1(VAR_5,
             VAR_4->ddc_bus);
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_1, VAR_3,
        VAR_0);
 if (VAR_7) {
  FUNC_0("Write An over DDC failed (%d)\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 < 0) {
  FUNC_0("Failed to output aksv (%d)\n", VAR_7);
  return VAR_7;
 }
 return 0;
}
