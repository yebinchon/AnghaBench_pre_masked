
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_request {int dummy; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; TYPE_1__** engine; } ;
struct TYPE_3__ {int kernel_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct i915_request*) ;
 struct i915_request* FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3;
 struct i915_request *VAR_5;
 int VAR_6 = -VAR_0;



 FUNC_2(&VAR_4->drm.struct_mutex);
 VAR_5 = FUNC_1(VAR_4->engine[VAR_2]->kernel_context, VAR_1 / 10);
 if (!VAR_5)
  goto out_unlock;

 FUNC_0(VAR_5);

 VAR_6 = 0;
out_unlock:
 FUNC_3(&VAR_4->drm.struct_mutex);
 return VAR_6;
}
