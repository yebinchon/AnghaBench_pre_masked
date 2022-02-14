
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct i915_vma {int * ops; struct i915_sleeve* private; } ;
struct i915_page_sizes {int dummy; } ;
struct i915_sleeve {struct i915_page_sizes page_sizes; struct sg_table* pages; struct i915_vma* vma; } ;
struct i915_address_space {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 struct i915_sleeve* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct i915_vma*) ;
 struct i915_vma* FUNC_3 (struct drm_i915_gem_object*,struct i915_address_space*,int *) ;
 int FUNC_4 (struct i915_sleeve*) ;
 struct i915_sleeve* FUNC_5 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct i915_sleeve *FUNC_6(struct i915_address_space *VAR_3,
      struct drm_i915_gem_object *VAR_4,
      struct sg_table *VAR_5,
      struct i915_page_sizes *VAR_6)
{
 struct i915_sleeve *VAR_7;
 struct i915_vma *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_3(VAR_4, VAR_3, ((void*)0));
 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8);
  goto err_free;
 }

 VAR_8->private = VAR_7;
 VAR_8->ops = &VAR_2;

 VAR_7->vma = VAR_8;
 VAR_7->pages = VAR_5;
 VAR_7->page_sizes = *VAR_6;

 return VAR_7;

err_free:
 FUNC_4(VAR_7);
 return FUNC_0(VAR_9);
}
