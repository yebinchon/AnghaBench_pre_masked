
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {scalar_t__ combination_mode; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct TYPE_6__ {int pdev; } ;
struct drm_i915_private {TYPE_3__ drm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct intel_connector *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_3(VAR_3->base.dev);
 struct intel_panel *VAR_5 = &VAR_3->panel;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_1) & VAR_0;
 if (FUNC_1(VAR_4) < 4)
  VAR_6 >>= 1;

 if (VAR_5->backlight.combination_mode) {
  u8 VAR_7;

  FUNC_2(VAR_4->drm.pdev, VAR_2, &VAR_7);
  VAR_6 *= VAR_7;
 }

 return VAR_6;
}
