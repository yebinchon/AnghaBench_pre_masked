
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int free_work; int free_list; int free_count; } ;
struct drm_i915_private {TYPE_2__ mm; int wq; } ;
struct TYPE_3__ {int dev; } ;
struct drm_i915_gem_object {int freed; TYPE_1__ base; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct drm_i915_gem_object* FUNC_7 (struct drm_gem_object*) ;

void FUNC_8(struct drm_gem_object *VAR_0)
{
 struct drm_i915_gem_object *VAR_1 = FUNC_7(VAR_0);
 struct drm_i915_private *VAR_2 = FUNC_6(VAR_1->base.dev);

 FUNC_0(FUNC_2(VAR_1));







 FUNC_1(&VAR_2->mm.free_count);
 FUNC_3(VAR_1);
 if (FUNC_4(&VAR_1->freed, &VAR_2->mm.free_list))
  FUNC_5(VAR_2->wq, &VAR_2->mm.free_work);
}
