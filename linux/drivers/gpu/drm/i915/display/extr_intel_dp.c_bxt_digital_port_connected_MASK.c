
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int hpd_pin; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_encoder *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_4->base.dev);
 u32 VAR_6;

 switch (VAR_4->hpd_pin) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_1(VAR_4->hpd_pin);
  return 0;
 }

 return FUNC_0(VAR_3) & VAR_6;
}
