
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* cleanup ) (TYPE_2__*) ;} ;
struct TYPE_6__ {TYPE_2__ vm; } ;
struct TYPE_4__ {int wc_stash; } ;
struct drm_i915_private {TYPE_3__ ggtt; TYPE_1__ mm; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(struct drm_i915_private *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->mm.wc_stash);






 VAR_1 = FUNC_0(&VAR_0->ggtt);
 if (VAR_1)
  return VAR_1;





 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto out_gtt_cleanup;

 return 0;

out_gtt_cleanup:
 VAR_0->ggtt.vm.cleanup(&VAR_0->ggtt.vm);
 return VAR_1;
}
