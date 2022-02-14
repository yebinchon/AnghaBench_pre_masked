
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_connector* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct drm_connector_state *VAR_2, u32 VAR_3)
{
 struct intel_connector *VAR_4 = FUNC_3(VAR_2->connector);
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_4->base.dev);

 u32 VAR_6 = FUNC_0(VAR_1) & ~VAR_0;
 FUNC_1(VAR_1, VAR_6 | VAR_3);
}
