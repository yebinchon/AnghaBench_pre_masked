
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {struct drm_device* dev; } ;
struct TYPE_13__ {TYPE_5__ base; } ;
struct intel_lvds_encoder {int reg; TYPE_3__* attached_connector; TYPE_6__ base; } ;
struct TYPE_11__ {unsigned int bios_lvds_val; } ;
struct drm_i915_private {TYPE_4__ vbt; } ;
struct drm_device {int dummy; } ;
struct TYPE_14__ {int lvds_channel_mode; } ;
struct TYPE_9__ {TYPE_1__* fixed_mode; } ;
struct TYPE_10__ {TYPE_2__ panel; } ;
struct TYPE_8__ {int clock; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_7__ VAR_5 ;
 int VAR_6 ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_4(struct intel_lvds_encoder *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->base.base.dev;
 unsigned int VAR_9;
 struct drm_i915_private *VAR_10 = FUNC_3(VAR_8);


 if (VAR_5.lvds_channel_mode > 0)
  return VAR_5.lvds_channel_mode == 2;


 if (VAR_7->attached_connector->panel.fixed_mode->clock > 112999)
  return 1;

 if (FUNC_2(VAR_6))
  return 1;







 VAR_9 = FUNC_1(VAR_7->reg);
 if (FUNC_0(VAR_10))
  VAR_9 &= ~(VAR_2 | VAR_4);
 else
  VAR_9 &= ~(VAR_2 | VAR_3);
 if (VAR_9 == 0)
  VAR_9 = VAR_10->vbt.bios_lvds_val;

 return (VAR_9 & VAR_0) == VAR_1;
}
