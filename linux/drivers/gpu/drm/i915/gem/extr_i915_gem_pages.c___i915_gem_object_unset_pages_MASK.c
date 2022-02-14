
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_3__ {scalar_t__ sg; scalar_t__ phys; } ;
struct TYPE_4__ {TYPE_1__ page_sizes; int * mapping; int pages; } ;
struct drm_i915_gem_object {TYPE_2__ mm; } ;


 scalar_t__ FUNC_0 (struct sg_table*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 struct sg_table* FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (void*) ;

struct sg_table *
FUNC_9(struct drm_i915_gem_object *VAR_0)
{
 struct sg_table *VAR_1;

 VAR_1 = FUNC_2(&VAR_0->mm.pages);
 if (FUNC_0(VAR_1))
  return VAR_1;

 FUNC_3(VAR_0);

 if (VAR_0->mm.mapping) {
  void *VAR_2;

  VAR_2 = FUNC_7(VAR_0->mm.mapping);
  if (FUNC_4(VAR_2))
   FUNC_8(VAR_2);
  else
   FUNC_6(FUNC_5(VAR_2));

  VAR_0->mm.mapping = ((void*)0);
 }

 FUNC_1(VAR_0);
 VAR_0->mm.page_sizes.phys = VAR_0->mm.page_sizes.sg = 0;

 return VAR_1;
}
