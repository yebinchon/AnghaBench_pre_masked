
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {TYPE_1__* engine; int i915; } ;
struct drm_i915_mocs_table {int dummy; } ;
struct TYPE_2__ {scalar_t__ class; int gt; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct i915_request*,struct drm_i915_mocs_table*) ;
 int FUNC_2 (struct i915_request*,struct drm_i915_mocs_table*) ;
 scalar_t__ FUNC_3 (int ,struct drm_i915_mocs_table*) ;

int FUNC_4(struct i915_request *VAR_1)
{
 struct drm_i915_mocs_table VAR_2;
 int VAR_3;

 if (FUNC_0(VAR_1->i915) ||
     VAR_1->engine->class != VAR_0)
  return 0;

 if (FUNC_3(VAR_1->engine->gt, &VAR_2)) {

  VAR_3 = FUNC_1(VAR_1, &VAR_2);
  if (VAR_3)
   return VAR_3;


  VAR_3 = FUNC_2(VAR_1, &VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
