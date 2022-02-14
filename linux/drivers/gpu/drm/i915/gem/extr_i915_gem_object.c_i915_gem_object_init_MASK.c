
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_i915_gem_object_ops {int dummy; } ;
struct TYPE_5__ {int lock; int radix; } ;
struct TYPE_6__ {TYPE_2__ get_page; int madv; int link; int lock; } ;
struct TYPE_4__ {int list; int lock; } ;
struct drm_i915_gem_object {TYPE_3__ mm; struct drm_i915_gem_object_ops const* ops; int rcu; int lut_list; TYPE_1__ vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_gem_object *VAR_3,
     const struct drm_i915_gem_object_ops *VAR_4)
{
 FUNC_3(&VAR_3->mm.lock);

 FUNC_4(&VAR_3->vma.lock);
 FUNC_0(&VAR_3->vma.list);

 FUNC_0(&VAR_3->mm.link);

 FUNC_0(&VAR_3->lut_list);

 FUNC_2(&VAR_3->rcu);

 VAR_3->ops = VAR_4;

 VAR_3->mm.madv = VAR_1;
 FUNC_1(&VAR_3->mm.get_page.radix, VAR_0 | VAR_2);
 FUNC_3(&VAR_3->mm.get_page.lock);
}
