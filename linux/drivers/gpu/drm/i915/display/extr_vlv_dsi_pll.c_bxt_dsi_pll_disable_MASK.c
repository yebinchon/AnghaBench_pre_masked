
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int ,int ,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;

void FUNC_6(struct intel_encoder *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_3->base.dev);
 u32 VAR_5;

 FUNC_0("\n");

 VAR_5 = FUNC_2(VAR_1);
 VAR_5 &= ~VAR_0;
 FUNC_3(VAR_1, VAR_5);





 if (FUNC_4(VAR_4, VAR_1,
        VAR_2, 1))
  FUNC_1("Timeout waiting for PLL lock deassertion\n");
}
