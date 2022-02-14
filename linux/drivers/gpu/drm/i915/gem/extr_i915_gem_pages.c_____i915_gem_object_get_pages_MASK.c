
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ madv; } ;
struct drm_i915_gem_object {TYPE_2__* ops; TYPE_1__ mm; } ;
struct TYPE_4__ {int (* get_pages ) (struct drm_i915_gem_object*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct drm_i915_gem_object *VAR_2)
{
 int VAR_3;

 if (FUNC_4(VAR_2->mm.madv != VAR_1)) {
  FUNC_0("Attempting to obtain a purgeable object\n");
  return -VAR_0;
 }

 VAR_3 = VAR_2->ops->get_pages(VAR_2);
 FUNC_1(!VAR_3 && !FUNC_2(VAR_2));

 return VAR_3;
}
