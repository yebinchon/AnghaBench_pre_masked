
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_sdvo {scalar_t__ port; int sdvo_reg; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 struct drm_i915_private* FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void FUNC_6(struct intel_sdvo *VAR_3, u32 VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.base.dev;
 struct drm_i915_private *VAR_6 = FUNC_5(VAR_5);
 u32 VAR_7 = VAR_4, VAR_8 = VAR_4;
 int VAR_9;

 if (FUNC_1(VAR_6)) {
  FUNC_3(VAR_3->sdvo_reg, VAR_4);
  FUNC_4(VAR_3->sdvo_reg);




  if (FUNC_0(VAR_6)) {
   FUNC_3(VAR_3->sdvo_reg, VAR_4);
   FUNC_4(VAR_3->sdvo_reg);
  }
  return;
 }

 if (VAR_3->port == VAR_2)
  VAR_8 = FUNC_2(VAR_1);
 else
  VAR_7 = FUNC_2(VAR_0);






 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  FUNC_3(VAR_0, VAR_7);
  FUNC_4(VAR_0);

  FUNC_3(VAR_1, VAR_8);
  FUNC_4(VAR_1);
 }
}
