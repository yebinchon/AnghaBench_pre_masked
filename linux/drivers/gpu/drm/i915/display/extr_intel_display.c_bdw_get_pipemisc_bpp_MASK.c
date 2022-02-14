
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;




 int VAR_0 ;
 struct drm_i915_private* FUNC_3 (int ) ;

int FUNC_4(struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.dev);
 u32 VAR_3;

 VAR_3 = FUNC_0(FUNC_2(VAR_1->pipe));

 switch (VAR_3 & VAR_0) {
 case 129:
  return 18;
 case 128:
  return 24;
 case 131:
  return 30;
 case 130:
  return 36;
 default:
  FUNC_1(VAR_3);
  return 0;
 }
}
