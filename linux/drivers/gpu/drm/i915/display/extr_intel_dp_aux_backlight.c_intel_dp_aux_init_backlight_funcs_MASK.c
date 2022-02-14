
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int get; int set; int disable; int enable; int setup; } ;
struct intel_panel {TYPE_4__ backlight; } ;
struct TYPE_6__ {int dev; } ;
struct intel_connector {TYPE_1__ base; struct intel_panel panel; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_8__ {TYPE_2__ backlight; } ;
struct drm_i915_private {TYPE_3__ vbt; } ;
struct TYPE_10__ {int enable_dpcd_backlight; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_connector*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct drm_i915_private* FUNC_1 (int ) ;

int FUNC_2(struct intel_connector *VAR_8)
{
 struct intel_panel *VAR_9 = &VAR_8->panel;
 struct drm_i915_private *VAR_10 = FUNC_1(VAR_8->base.dev);

 if (VAR_2.enable_dpcd_backlight == 0 ||
     (VAR_2.enable_dpcd_backlight == -1 &&
     VAR_10->vbt.backlight.type != VAR_1))
  return -VAR_0;

 if (!FUNC_0(VAR_8))
  return -VAR_0;

 VAR_9->backlight.setup = VAR_7;
 VAR_9->backlight.enable = VAR_4;
 VAR_9->backlight.disable = VAR_3;
 VAR_9->backlight.set = VAR_6;
 VAR_9->backlight.get = VAR_5;

 return 0;
}
