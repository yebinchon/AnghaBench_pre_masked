
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct drm_i915_gem_object*,int ) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_2 (struct drm_i915_gem_object*,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_gem_object *VAR_3,
         unsigned long VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = 0;
 if (VAR_4 & VAR_2)
  VAR_5 = VAR_0;

 if (FUNC_2(VAR_3, VAR_5) == 0)
  FUNC_0(VAR_3, VAR_1);

 return !FUNC_1(VAR_3);
}
