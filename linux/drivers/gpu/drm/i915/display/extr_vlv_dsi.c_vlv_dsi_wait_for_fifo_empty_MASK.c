
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_encoder {struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct intel_dsi {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int ,int,int) ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;

void FUNC_4(struct intel_dsi *VAR_4, enum port VAR_5)
{
 struct drm_encoder *VAR_6 = &VAR_4->base.base;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct drm_i915_private *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9;

 VAR_9 = VAR_2 | VAR_0 |
  VAR_3 | VAR_1;

 if (FUNC_2(VAR_8, FUNC_1(VAR_5),
      VAR_9, 100))
  FUNC_0("DPI FIFOs are not empty\n");
}
