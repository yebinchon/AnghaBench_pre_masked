
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int type; } ;
struct i915_vma {int size; int fence_size; TYPE_5__* vm; int vm_link; int closed_link; int obj_link; TYPE_4__ ggtt_view; int flags; struct gen6_ppgtt* private; int * ops; int active; } ;
struct TYPE_10__ {int total; int mutex; int unbound_list; } ;
struct i915_ggtt {TYPE_5__ vm; } ;
struct TYPE_7__ {TYPE_1__* gt; struct drm_i915_private* i915; } ;
struct TYPE_8__ {TYPE_2__ vm; } ;
struct gen6_ppgtt {TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_6__ {struct i915_ggtt* ggtt; } ;


 int VAR_0 ;
 struct i915_vma* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_i915_private*,int *,int *,int *) ;
 struct i915_vma* FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;

__attribute__((used)) static struct i915_vma *FUNC_9(struct gen6_ppgtt *VAR_5, int VAR_6)
{
 struct drm_i915_private *VAR_7 = VAR_5->base.vm.i915;
 struct i915_ggtt *VAR_8 = VAR_5->base.vm.gt->ggtt;
 struct i915_vma *VAR_9;

 FUNC_1(!FUNC_3(VAR_6, VAR_2));
 FUNC_1(VAR_6 > VAR_8->vm.total);

 VAR_9 = FUNC_5();
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_4(VAR_7, &VAR_9->active, ((void*)0), ((void*)0));

 VAR_9->vm = &VAR_8->vm;
 VAR_9->ops = &VAR_4;
 VAR_9->private = VAR_5;

 VAR_9->size = VAR_6;
 VAR_9->fence_size = VAR_6;
 VAR_9->flags = VAR_3;
 VAR_9->ggtt_view.type = VAR_1;

 FUNC_2(&VAR_9->obj_link);
 FUNC_2(&VAR_9->closed_link);

 FUNC_7(&VAR_9->vm->mutex);
 FUNC_6(&VAR_9->vm_link, &VAR_9->vm->unbound_list);
 FUNC_8(&VAR_9->vm->mutex);

 return VAR_9;
}
