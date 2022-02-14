
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int work; } ;
struct TYPE_8__ {int uc; TYPE_1__ hangcheck; } ;
struct TYPE_7__ {int struct_mutex; } ;
struct TYPE_6__ {int userfault_wakeref; } ;
struct drm_i915_private {TYPE_4__ gt; TYPE_3__ drm; int wq; TYPE_2__ ggtt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;

void FUNC_9(struct drm_i915_private *VAR_0)
{
 FUNC_0("\n");

 FUNC_5(&VAR_0->ggtt.userfault_wakeref, 0);
 FUNC_2(VAR_0->wq);

 FUNC_6(&VAR_0->drm.struct_mutex);
 FUNC_8(&VAR_0->gt);

 FUNC_7(&VAR_0->drm.struct_mutex);

 FUNC_1(&VAR_0->gt.hangcheck.work);

 FUNC_3(VAR_0);

 FUNC_4(&VAR_0->gt.uc);
}
