
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reloc_cache {unsigned long page; int vaddr; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (struct drm_i915_gem_object*,struct reloc_cache*,unsigned long) ;
 void* FUNC_1 (struct drm_i915_gem_object*,struct reloc_cache*,unsigned long) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static void *FUNC_3(struct drm_i915_gem_object *VAR_1,
    struct reloc_cache *VAR_2,
    unsigned long VAR_3)
{
 void *VAR_4;

 if (VAR_2->page == VAR_3) {
  VAR_4 = FUNC_2(VAR_2->vaddr);
 } else {
  VAR_4 = ((void*)0);
  if ((VAR_2->vaddr & VAR_0) == 0)
   VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (!VAR_4)
   VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 return VAR_4;
}
