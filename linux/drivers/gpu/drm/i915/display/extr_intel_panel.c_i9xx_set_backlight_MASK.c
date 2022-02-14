
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int max; scalar_t__ combination_mode; } ;
struct intel_panel {TYPE_2__ backlight; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {struct intel_panel panel; TYPE_1__ base; } ;
struct TYPE_6__ {int pdev; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct drm_connector_state {int connector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_connector* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct drm_connector_state *VAR_4, u32 VAR_5)
{
 struct intel_connector *VAR_6 = FUNC_6(VAR_4->connector);
 struct drm_i915_private *VAR_7 = FUNC_5(VAR_6->base.dev);
 struct intel_panel *VAR_8 = &VAR_6->panel;
 u32 VAR_9, VAR_10;

 FUNC_3(VAR_8->backlight.max == 0);

 if (VAR_8->backlight.combination_mode) {
  u8 VAR_11;

  VAR_11 = VAR_5 * 0xfe / VAR_8->backlight.max + 1;
  VAR_5 /= VAR_11;
  FUNC_4(VAR_7->drm.pdev, VAR_3, VAR_11);
 }

 if (FUNC_2(VAR_7, 4)) {
  VAR_10 = VAR_0;
 } else {
  VAR_5 <<= 1;
  VAR_10 = VAR_1;
 }

 VAR_9 = FUNC_0(VAR_2) & ~VAR_10;
 FUNC_1(VAR_2, VAR_9 | VAR_5);
}
