
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_4__ {int lock; int pages_pin_count; } ;
struct drm_i915_gem_object {TYPE_2__ mm; TYPE_1__* ops; int bind_count; } ;
typedef enum i915_mm_subclass { ____Placeholder_i915_mm_subclass } i915_mm_subclass ;
struct TYPE_3__ {int (* put_pages ) (struct drm_i915_gem_object*,struct sg_table*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct sg_table* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sg_table*) ;
 struct sg_table* FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_i915_gem_object*,struct sg_table*) ;
 scalar_t__ FUNC_10 (int ) ;

int FUNC_11(struct drm_i915_gem_object *VAR_2,
    enum i915_mm_subclass VAR_3)
{
 struct sg_table *VAR_4;
 int VAR_5;

 if (FUNC_5(VAR_2))
  return -VAR_0;

 FUNC_1(FUNC_4(&VAR_2->bind_count));


 FUNC_7(&VAR_2->mm.lock, VAR_3);
 if (FUNC_10(FUNC_4(&VAR_2->mm.pages_pin_count))) {
  VAR_5 = -VAR_0;
  goto unlock;
 }






 VAR_4 = FUNC_3(VAR_2);







 if (!VAR_4 && !FUNC_6(VAR_2))
  VAR_4 = FUNC_0(-VAR_1);

 if (!FUNC_2(VAR_4))
  VAR_2->ops->put_pages(VAR_2, VAR_4);

 VAR_5 = 0;
unlock:
 FUNC_8(&VAR_2->mm.lock);

 return VAR_5;
}
