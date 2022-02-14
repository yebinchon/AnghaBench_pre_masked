
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int struct_mutex; } ;
struct TYPE_4__ {int uc; int awake; } ;
struct TYPE_5__ {int userfault_wakeref; } ;
struct drm_i915_private {TYPE_3__ drm; TYPE_1__ gt; TYPE_2__ ggtt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct drm_i915_private *VAR_0)
{
 FUNC_0(VAR_0->gt.awake);

 FUNC_7(&VAR_0->ggtt.userfault_wakeref);

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);


 FUNC_2(VAR_0);

 FUNC_8(&VAR_0->drm.struct_mutex);
 FUNC_6(&VAR_0->gt.uc);
 FUNC_5(&VAR_0->gt.uc);
 FUNC_9(&VAR_0->drm.struct_mutex);

 FUNC_1(VAR_0);
}
