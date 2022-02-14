
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct drm_i915_private {int dpll_lock; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*,int) ;
 int FUNC_3 (struct drm_i915_private*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct drm_i915_private* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_6(VAR_1->base.dev);
 enum phy VAR_3 = FUNC_3(VAR_2, VAR_1->port);
 u32 VAR_4;

 FUNC_4(&VAR_2->dpll_lock);

 VAR_4 = FUNC_0(VAR_0);
 VAR_4 |= FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_4);

 FUNC_5(&VAR_2->dpll_lock);
}
