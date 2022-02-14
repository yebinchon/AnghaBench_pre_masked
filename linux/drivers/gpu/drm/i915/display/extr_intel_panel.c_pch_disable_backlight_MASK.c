
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_connector* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(const struct drm_connector_state *VAR_4)
{
 struct intel_connector *VAR_5 = FUNC_4(VAR_4->connector);
 struct drm_i915_private *VAR_6 = FUNC_3(VAR_5->base.dev);
 u32 VAR_7;

 FUNC_2(VAR_4, 0);

 VAR_7 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_7 & ~VAR_3);

 VAR_7 = FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_7 & ~VAR_2);
}
