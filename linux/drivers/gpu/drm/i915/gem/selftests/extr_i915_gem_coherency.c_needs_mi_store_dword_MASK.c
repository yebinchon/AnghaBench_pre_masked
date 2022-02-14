
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int * engine; int gt; } ;


 int FUNC_0 (struct drm_i915_private*,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_1)
{
 if (FUNC_2(&VAR_1->gt))
  return 0;

 if (!FUNC_0(VAR_1, VAR_0))
  return 0;

 return FUNC_1(VAR_1->engine[VAR_0]);
}
