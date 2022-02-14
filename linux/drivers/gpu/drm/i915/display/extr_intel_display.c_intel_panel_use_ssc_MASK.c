
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lvds_use_ssc; } ;
struct drm_i915_private {int quirks; TYPE_1__ vbt; } ;
struct TYPE_4__ {scalar_t__ panel_use_ssc; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct drm_i915_private *VAR_2)
{
 if (VAR_1.panel_use_ssc >= 0)
  return VAR_1.panel_use_ssc != 0;
 return VAR_2->vbt.lvds_use_ssc
  && !(VAR_2->quirks & VAR_0);
}
