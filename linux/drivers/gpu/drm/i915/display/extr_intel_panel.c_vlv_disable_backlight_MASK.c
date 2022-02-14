
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;
struct intel_connector {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int crtc; int connector; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_4__ {int pipe; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_connector_state const*,int ) ;
 struct drm_i915_private* FUNC_4 (int ) ;
 struct intel_connector* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct drm_connector_state *VAR_1)
{
 struct intel_connector *VAR_2 = FUNC_5(VAR_1->connector);
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_2->base.dev);
 enum pipe VAR_4 = FUNC_6(VAR_1->crtc)->pipe;
 u32 VAR_5;

 FUNC_3(VAR_1, 0);

 VAR_5 = FUNC_0(FUNC_2(VAR_4));
 FUNC_1(FUNC_2(VAR_4), VAR_5 & ~VAR_0);
}
