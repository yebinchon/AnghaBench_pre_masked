
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int dev; } ;
struct drm_i915_gem_object {TYPE_3__ userptr; TYPE_1__ base; } ;
struct TYPE_8__ {int mm_lock; } ;
struct TYPE_6__ {int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 TYPE_4__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct drm_i915_gem_object *VAR_1)
{
 if (VAR_1->userptr.mm == ((void*)0))
  return;

 FUNC_0(&VAR_1->userptr.mm->kref,
         VAR_0,
         &FUNC_1(VAR_1->base.dev)->mm_lock);
 VAR_1->userptr.mm = ((void*)0);
}
