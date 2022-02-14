
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {unsigned long size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct dma_buf {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 struct drm_i915_gem_object* FUNC_1 (struct dma_buf*) ;
 struct page* FUNC_2 (struct drm_i915_gem_object*,unsigned long) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 void* FUNC_6 (struct page*) ;

__attribute__((used)) static void *FUNC_7(struct dma_buf *VAR_1, unsigned long VAR_2)
{
 struct drm_i915_gem_object *VAR_3 = FUNC_1(VAR_1);
 struct page *VAR_4;

 if (VAR_2 >= VAR_3->base.size >> VAR_0)
  return ((void*)0);

 if (!FUNC_3(VAR_3))
  return ((void*)0);

 if (FUNC_4(VAR_3))
  return ((void*)0);


 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (FUNC_0(VAR_4))
  goto err_unpin;

 return FUNC_6(VAR_4);

err_unpin:
 FUNC_5(VAR_3);
 return ((void*)0);
}
