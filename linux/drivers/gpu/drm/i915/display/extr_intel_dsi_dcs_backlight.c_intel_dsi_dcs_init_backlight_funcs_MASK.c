
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int get; int set; int disable; int enable; int setup; } ;
struct intel_panel {TYPE_3__ backlight; } ;
struct intel_encoder {scalar_t__ type; } ;
struct TYPE_8__ {struct drm_device* dev; } ;
struct intel_connector {struct intel_panel panel; struct intel_encoder* encoder; TYPE_4__ base; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_6__ {TYPE_1__ backlight; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct drm_i915_private* FUNC_1 (struct drm_device*) ;

int FUNC_2(struct intel_connector *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9->base.dev;
 struct drm_i915_private *VAR_11 = FUNC_1(VAR_10);
 struct intel_encoder *VAR_12 = VAR_9->encoder;
 struct intel_panel *VAR_13 = &VAR_9->panel;

 if (VAR_11->vbt.backlight.type != VAR_2)
  return -VAR_1;

 if (FUNC_0(VAR_12->type != VAR_3))
  return -VAR_0;

 VAR_13->backlight.setup = VAR_8;
 VAR_13->backlight.enable = VAR_5;
 VAR_13->backlight.disable = VAR_4;
 VAR_13->backlight.set = VAR_7;
 VAR_13->backlight.get = VAR_6;

 return 0;
}
