
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hw_ida; int hw_id_list; } ;
struct TYPE_3__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ contexts; int kernel_context; TYPE_1__ drm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_private *VAR_0)
{
 FUNC_4(&VAR_0->drm.struct_mutex);

 FUNC_1(&VAR_0->kernel_context);


 FUNC_0(!FUNC_3(&VAR_0->contexts.hw_id_list));
 FUNC_2(&VAR_0->contexts.hw_ida);
}
