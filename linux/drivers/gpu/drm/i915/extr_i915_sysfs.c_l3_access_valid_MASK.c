
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_4, loff_t VAR_5)
{
 if (!FUNC_0(VAR_4))
  return -VAR_2;

 if (VAR_5 % 4 != 0)
  return -VAR_0;

 if (VAR_5 >= VAR_3)
  return -VAR_1;

 return 0;
}
