
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector {TYPE_1__* state; int dev; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_5__ {int port; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct TYPE_4__ {int scaling_mode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct drm_connector*,int,int) ;
 int FUNC_6 (struct drm_connector*,int) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_connector*) ;
 scalar_t__ FUNC_9 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct intel_dp *VAR_4, struct drm_connector *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_10(VAR_5->dev);
 enum port VAR_7 = FUNC_4(VAR_4)->base.port;

 if (!FUNC_3(VAR_6) && VAR_7 != VAR_3)
  FUNC_8(VAR_5);

 FUNC_7(VAR_5);
 if (FUNC_1(VAR_6))
  FUNC_5(VAR_5, 6, 10);
 else if (FUNC_2(VAR_6) >= 5)
  FUNC_5(VAR_5, 6, 12);

 if (FUNC_9(VAR_4)) {
  u32 VAR_8;

  VAR_8 = FUNC_0(VAR_0) | FUNC_0(VAR_2);
  if (!FUNC_1(VAR_6))
   VAR_8 |= FUNC_0(VAR_1);

  FUNC_6(VAR_5, VAR_8);

  VAR_5->state->scaling_mode = VAR_0;

 }
}
