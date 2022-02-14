
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_request {int fence; TYPE_2__* i915; } ;
struct i915_active_request {int dummy; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct TYPE_4__ {TYPE_1__ drm; } ;


 struct i915_request* FUNC_0 (struct i915_active_request*,int *) ;
 int FUNC_1 (struct i915_request*,int *) ;

int FUNC_2(struct i915_request *VAR_0,
          struct i915_active_request *VAR_1)
{
 struct i915_request *VAR_2 =
  FUNC_0(VAR_1, &VAR_0->i915->drm.struct_mutex);

 return VAR_2 ? FUNC_1(VAR_0, &VAR_2->fence) : 0;
}
