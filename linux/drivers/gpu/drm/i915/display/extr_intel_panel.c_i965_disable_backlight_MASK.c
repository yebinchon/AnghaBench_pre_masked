
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {TYPE_1__* connector; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(const struct drm_connector_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_2->connector->dev);
 u32 VAR_4;

 FUNC_2(VAR_2, 0);

 VAR_4 = FUNC_0(VAR_0);
 FUNC_1(VAR_0, VAR_4 & ~VAR_1);
}
