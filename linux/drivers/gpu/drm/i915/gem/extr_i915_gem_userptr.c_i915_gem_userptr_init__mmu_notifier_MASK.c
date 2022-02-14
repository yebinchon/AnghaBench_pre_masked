
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct drm_i915_gem_object *VAR_4,
        unsigned VAR_5)
{
 if ((VAR_5 & VAR_3) == 0)
  return -VAR_1;

 if (!FUNC_0(VAR_0))
  return -VAR_2;

 return 0;
}
