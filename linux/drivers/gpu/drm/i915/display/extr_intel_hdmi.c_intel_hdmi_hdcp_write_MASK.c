
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u8 ;
struct intel_hdmi {int ddc_bus; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct intel_digital_port {TYPE_3__ base; struct intel_hdmi hdmi; } ;
struct i2c_msg {size_t len; unsigned int* buf; scalar_t__ flags; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 struct i2c_adapter* FUNC_1 (struct drm_i915_private*,int ) ;
 int FUNC_2 (unsigned int*) ;
 unsigned int* FUNC_3 (size_t,int ) ;
 int FUNC_4 (unsigned int*,void*,size_t) ;

__attribute__((used)) static int FUNC_5(struct intel_digital_port *VAR_4,
     unsigned int VAR_5, void *VAR_6, size_t VAR_7)
{
 struct intel_hdmi *VAR_8 = &VAR_4->hdmi;
 struct drm_i915_private *VAR_9 =
  VAR_4->base.base.dev->dev_private;
 struct i2c_adapter *VAR_10 = FUNC_1(VAR_9,
             VAR_8->ddc_bus);
 int VAR_11;
 u8 *VAR_12;
 struct i2c_msg VAR_13;

 VAR_12 = FUNC_3(VAR_7 + 1, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12[0] = VAR_5 & 0xff;
 FUNC_4(&VAR_12[1], VAR_6, VAR_7);

 VAR_13.addr = VAR_0;
 VAR_13.flags = 0,
 VAR_13.len = VAR_7 + 1,
 VAR_13.buf = VAR_12;

 VAR_11 = FUNC_0(VAR_10, &VAR_13, 1);
 if (VAR_11 == 1)
  VAR_11 = 0;
 else if (VAR_11 >= 0)
  VAR_11 = -VAR_1;

 FUNC_2(VAR_12);
 return VAR_11;
}
