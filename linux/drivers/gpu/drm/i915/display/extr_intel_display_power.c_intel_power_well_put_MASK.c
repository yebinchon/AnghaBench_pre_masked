
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_power_well {int count; TYPE_1__* desc; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct drm_i915_private*,struct i915_power_well*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0,
     struct i915_power_well *VAR_1)
{
 FUNC_0(!VAR_1->count, "Use count on power well %s is already zero",
      VAR_1->desc->name);

 if (!--VAR_1->count)
  FUNC_1(VAR_0, VAR_1);
}
