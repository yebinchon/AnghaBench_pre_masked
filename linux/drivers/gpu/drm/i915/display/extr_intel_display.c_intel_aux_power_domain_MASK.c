
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {scalar_t__ tc_mode; int aux_ch; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum phy { ____Placeholder_phy } phy ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_3 (int ) ;

enum intel_display_power_domain
FUNC_4(struct intel_digital_port *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_3(VAR_11->base.base.dev);
 enum phy VAR_13 = FUNC_2(VAR_12, VAR_11->base.port);

 if (FUNC_1(VAR_12, VAR_13) &&
     VAR_11->tc_mode == VAR_10) {
  switch (VAR_11->aux_ch) {
  case 131:
   return VAR_6;
  case 130:
   return VAR_7;
  case 129:
   return VAR_8;
  case 128:
   return VAR_9;
  default:
   FUNC_0(VAR_11->aux_ch);
   return VAR_6;
  }
 }

 switch (VAR_11->aux_ch) {
 case 133:
  return VAR_0;
 case 132:
  return VAR_1;
 case 131:
  return VAR_2;
 case 130:
  return VAR_3;
 case 129:
  return VAR_4;
 case 128:
  return VAR_5;
 default:
  FUNC_0(VAR_11->aux_ch);
  return VAR_0;
 }
}
