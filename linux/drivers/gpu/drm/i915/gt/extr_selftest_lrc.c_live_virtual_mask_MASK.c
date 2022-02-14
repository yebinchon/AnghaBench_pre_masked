
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {struct intel_engine_cs*** engine_class; } ;
struct intel_engine_cs {int dummy; } ;
struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; struct intel_gt gt; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,struct intel_engine_cs**,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2;
 struct intel_engine_cs *VAR_4[VAR_1 + 1];
 struct intel_gt *VAR_5 = &VAR_3->gt;
 unsigned int VAR_6, VAR_7;
 int VAR_8 = 0;

 if (FUNC_0(VAR_3))
  return 0;

 FUNC_2(&VAR_3->drm.struct_mutex);

 for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
  unsigned int VAR_9;

  VAR_9 = 0;
  for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++) {
   if (!VAR_5->engine_class[VAR_6][VAR_7])
    break;

   VAR_4[VAR_9++] = VAR_5->engine_class[VAR_6][VAR_7];
  }
  if (VAR_9 < 2)
   continue;

  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_9);
  if (VAR_8)
   goto out_unlock;
 }

out_unlock:
 FUNC_3(&VAR_3->drm.struct_mutex);
 return VAR_8;
}
