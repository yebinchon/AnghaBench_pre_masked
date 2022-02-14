
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct i2c_algo_bit_data* algo_data; } ;
struct i2c_algo_bit_data {struct intel_gmbus* data; int timeout; int udelay; int post_xfer; int pre_xfer; int getscl; int getsda; int setscl; int setsda; } ;
struct intel_gmbus {TYPE_1__ adapter; int gpio_reg; struct i2c_algo_bit_data bit_algo; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct drm_i915_private*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct intel_gmbus *VAR_7, unsigned int VAR_8)
{
 struct drm_i915_private *VAR_9 = VAR_7->dev_priv;
 struct i2c_algo_bit_data *VAR_10;

 VAR_10 = &VAR_7->bit_algo;

 VAR_7->gpio_reg = FUNC_0(FUNC_1(VAR_9, VAR_8)->gpio);
 VAR_7->adapter.algo_data = VAR_10;
 VAR_10->setsda = VAR_6;
 VAR_10->setscl = VAR_5;
 VAR_10->getsda = VAR_2;
 VAR_10->getscl = VAR_1;
 VAR_10->pre_xfer = VAR_4;
 VAR_10->post_xfer = VAR_3;
 VAR_10->udelay = VAR_0;
 VAR_10->timeout = FUNC_2(2200);
 VAR_10->data = VAR_7;
}
