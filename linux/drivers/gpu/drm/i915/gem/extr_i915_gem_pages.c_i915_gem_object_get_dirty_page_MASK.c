
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int dirty; } ;
struct drm_i915_gem_object {TYPE_1__ mm; } ;


 struct page* FUNC_0 (struct drm_i915_gem_object*,unsigned int) ;
 int FUNC_1 (struct page*) ;

struct page *
FUNC_2(struct drm_i915_gem_object *VAR_0,
          unsigned int VAR_1)
{
 struct page *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_0->mm.dirty)
  FUNC_1(VAR_2);

 return VAR_2;
}
