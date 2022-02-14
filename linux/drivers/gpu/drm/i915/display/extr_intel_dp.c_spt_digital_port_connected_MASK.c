
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int hpd_pin; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct intel_encoder*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_encoder *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_3->base.dev);
 u32 VAR_5;

 switch (VAR_3->hpd_pin) {
 case 129:
  VAR_5 = VAR_1;
  break;
 case 128:
  VAR_5 = VAR_2;
  break;
 default:
  return FUNC_1(VAR_3);
 }

 return FUNC_0(VAR_0) & VAR_5;
}
