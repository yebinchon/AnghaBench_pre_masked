
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct intel_dsi {TYPE_2__ base; } ;
struct TYPE_7__ {int seq_version; } ;
struct TYPE_8__ {TYPE_3__ dsi; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;


 scalar_t__ FUNC_0 (struct intel_dsi*) ;
 int FUNC_1 (int) ;
 struct drm_i915_private* FUNC_2 (int ) ;

void FUNC_3(struct intel_dsi *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_0->base.base.dev);


 if (FUNC_0(VAR_0) && VAR_2->vbt.dsi.seq_version >= 3)
  return;

 FUNC_1(VAR_1);
}
