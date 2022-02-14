
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int high_gm_node; int low_gm_node; } ;
struct intel_vgpu {TYPE_2__ gm; TYPE_1__* gvt; } ;
struct TYPE_6__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct TYPE_4__ {struct drm_i915_private* dev_priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct intel_vgpu *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->gvt->dev_priv;

 FUNC_1(&VAR_1->drm.struct_mutex);
 FUNC_0(&VAR_0->gm.low_gm_node);
 FUNC_0(&VAR_0->gm.high_gm_node);
 FUNC_2(&VAR_1->drm.struct_mutex);
}
