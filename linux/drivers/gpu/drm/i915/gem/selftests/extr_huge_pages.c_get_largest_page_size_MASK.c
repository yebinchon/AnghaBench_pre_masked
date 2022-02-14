
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (unsigned int*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,unsigned int) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_2(struct drm_i915_private *VAR_1,
       u64 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  unsigned int VAR_4 = VAR_0[VAR_3];

  if (FUNC_1(VAR_1, VAR_4) && VAR_2 >= VAR_4)
   return VAR_4;
 }

 return 0;
}
