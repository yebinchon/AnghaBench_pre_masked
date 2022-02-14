
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int * reset_func ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static reset_func FUNC_4(struct drm_i915_private *VAR_6)
{
 if (FUNC_0(VAR_6) >= 8)
  return VAR_3;
 else if (FUNC_0(VAR_6) >= 6)
  return VAR_2;
 else if (FUNC_0(VAR_6) >= 5)
  return VAR_5;
 else if (FUNC_2(VAR_6))
  return VAR_1;
 else if (FUNC_1(VAR_6) || FUNC_3(VAR_6))
  return VAR_0;
 else if (FUNC_0(VAR_6) >= 3)
  return VAR_4;
 else
  return ((void*)0);
}
