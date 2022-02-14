
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int sg; unsigned int gtt; int phys; } ;
struct i915_vma {TYPE_2__ page_sizes; struct drm_i915_gem_object* obj; TYPE_1__* vm; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_8__ {unsigned int sg; int gtt; int phys; } ;
struct TYPE_9__ {TYPE_3__ page_sizes; } ;
struct drm_i915_gem_object {TYPE_4__ mm; } ;
struct TYPE_10__ {unsigned int page_sizes; } ;
struct TYPE_6__ {struct drm_i915_private* i915; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*,unsigned int) ;
 TYPE_5__* FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(struct i915_vma *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->vm->i915;
 unsigned int VAR_3 = FUNC_1(VAR_2)->page_sizes;
 struct drm_i915_gem_object *VAR_4 = VAR_1->obj;
 int VAR_5 = 0;

 if (!FUNC_0(VAR_2, VAR_1->page_sizes.sg)) {
  FUNC_2("unsupported page_sizes.sg=%u, supported=%u\n",
         VAR_1->page_sizes.sg & ~VAR_3, VAR_3);
  VAR_5 = -VAR_0;
 }

 if (!FUNC_0(VAR_2, VAR_1->page_sizes.gtt)) {
  FUNC_2("unsupported page_sizes.gtt=%u, supported=%u\n",
         VAR_1->page_sizes.gtt & ~VAR_3, VAR_3);
  VAR_5 = -VAR_0;
 }

 if (VAR_1->page_sizes.phys != VAR_4->mm.page_sizes.phys) {
  FUNC_2("vma->page_sizes.phys(%u) != obj->mm.page_sizes.phys(%u)\n",
         VAR_1->page_sizes.phys, VAR_4->mm.page_sizes.phys);
  VAR_5 = -VAR_0;
 }

 if (VAR_1->page_sizes.sg != VAR_4->mm.page_sizes.sg) {
  FUNC_2("vma->page_sizes.sg(%u) != obj->mm.page_sizes.sg(%u)\n",
         VAR_1->page_sizes.sg, VAR_4->mm.page_sizes.sg);
  VAR_5 = -VAR_0;
 }

 if (VAR_4->mm.page_sizes.gtt) {
  FUNC_2("obj->page_sizes.gtt(%u) should never be set\n",
         VAR_4->mm.page_sizes.gtt);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
