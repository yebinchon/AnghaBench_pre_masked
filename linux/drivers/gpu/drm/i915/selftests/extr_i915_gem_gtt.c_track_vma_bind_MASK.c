
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {TYPE_2__* vm; int vm_link; int pages; struct drm_i915_gem_object* obj; } ;
struct TYPE_3__ {int pages; } ;
struct drm_i915_gem_object {TYPE_1__ mm; int bind_count; } ;
struct TYPE_4__ {int mutex; int bound_list; } ;


 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct i915_vma *VAR_0)
{
 struct drm_i915_gem_object *VAR_1 = VAR_0->obj;

 FUNC_1(&VAR_1->bind_count);
 FUNC_0(VAR_1);

 VAR_0->pages = VAR_1->mm.pages;

 FUNC_3(&VAR_0->vm->mutex);
 FUNC_2(&VAR_0->vm_link, &VAR_0->vm->bound_list);
 FUNC_4(&VAR_0->vm->mutex);
}
