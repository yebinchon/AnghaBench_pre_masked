
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_6__ {TYPE_1__* vma; } ;
struct intel_engine_cs {TYPE_2__ status_page; } ;
struct TYPE_8__ {TYPE_3__* pages; } ;
struct drm_i915_gem_object {TYPE_4__ mm; } ;
struct TYPE_7__ {int sgl; } ;
struct TYPE_5__ {struct drm_i915_gem_object* obj; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 struct page* FUNC_2 (int ) ;

__attribute__((used)) static struct page *FUNC_3(struct intel_engine_cs *VAR_0)
{
 struct drm_i915_gem_object *VAR_1 = VAR_0->status_page.vma->obj;

 FUNC_0(!FUNC_1(VAR_1));
 return FUNC_2(VAR_1->mm.pages->sgl);
}
