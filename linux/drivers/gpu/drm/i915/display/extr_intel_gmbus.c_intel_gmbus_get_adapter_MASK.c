
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct drm_i915_private {TYPE_1__* gmbus; } ;
struct TYPE_2__ {struct i2c_adapter adapter; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*,unsigned int) ;

struct i2c_adapter *FUNC_2(struct drm_i915_private *VAR_0,
         unsigned int VAR_1)
{
 if (FUNC_0(!FUNC_1(VAR_0, VAR_1)))
  return ((void*)0);

 return &VAR_0->gmbus[VAR_1].adapter;
}
