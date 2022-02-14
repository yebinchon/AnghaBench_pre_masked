
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct intel_timeline {TYPE_1__* hwsp_ggtt; } ;
struct TYPE_6__ {TYPE_2__* pages; } ;
struct drm_i915_gem_object {TYPE_3__ mm; } ;
struct TYPE_5__ {int sgl; } ;
struct TYPE_4__ {struct drm_i915_gem_object* obj; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 struct page* FUNC_2 (int ) ;

__attribute__((used)) static struct page *FUNC_3(struct intel_timeline *VAR_0)
{
 struct drm_i915_gem_object *VAR_1 = VAR_0->hwsp_ggtt->obj;

 FUNC_0(!FUNC_1(VAR_1));
 return FUNC_2(VAR_1->mm.pages->sgl);
}
