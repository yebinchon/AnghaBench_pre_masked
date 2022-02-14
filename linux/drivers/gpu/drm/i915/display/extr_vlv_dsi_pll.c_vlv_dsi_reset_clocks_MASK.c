
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_dsi {int escape_clk_div; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 struct intel_dsi* FUNC_3 (TYPE_1__*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

void FUNC_5(struct intel_encoder *VAR_2, enum port VAR_3)
{
 u32 VAR_4;
 struct drm_i915_private *VAR_5 = FUNC_4(VAR_2->base.dev);
 struct intel_dsi *VAR_6 = FUNC_3(&VAR_2->base);

 VAR_4 = FUNC_0(FUNC_2(VAR_3));
 VAR_4 &= ~VAR_0;
 FUNC_1(FUNC_2(VAR_3), VAR_4 |
   VAR_6->escape_clk_div <<
   VAR_1);
}
