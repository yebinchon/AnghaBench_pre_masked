
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
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_connector* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct drm_connector_state *VAR_1, u32 VAR_2)
{
 struct intel_connector *VAR_3 = FUNC_4(VAR_1->connector);
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.dev);
 enum pipe VAR_5 = FUNC_5(VAR_1->crtc)->pipe;
 u32 VAR_6;

 VAR_6 = FUNC_0(FUNC_2(VAR_5)) & ~VAR_0;
 FUNC_1(FUNC_2(VAR_5), VAR_6 | VAR_2);
}
