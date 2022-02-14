
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int false_color; } ;
struct drm_i915_private {TYPE_1__ fbc; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u64 *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1;

 if (FUNC_1(VAR_3) < 7 || !FUNC_0(VAR_3))
  return -VAR_0;

 *VAR_2 = VAR_3->fbc.false_color;

 return 0;
}
