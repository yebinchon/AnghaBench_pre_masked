
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct intel_engine_cs {TYPE_1__ whitelist; } ;
struct drm_i915_private {int gt; struct intel_engine_cs** engine; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct intel_engine_cs*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3;
 struct intel_engine_cs *VAR_5 = VAR_4->engine[VAR_0];
 int VAR_6 = 0;



 if (!VAR_5 || VAR_5->whitelist.count == 0)
  return 0;

 FUNC_1(&VAR_4->gt);

 if (FUNC_4(VAR_4)) {
  VAR_6 = FUNC_0(VAR_5,
         VAR_2,
         "engine");
  if (VAR_6)
   goto out;
 }

 if (FUNC_3(VAR_4)) {
  VAR_6 = FUNC_0(VAR_5,
         VAR_1,
         "device");
  if (VAR_6)
   goto out;
 }

out:
 FUNC_2(&VAR_4->gt);
 return VAR_6;
}
