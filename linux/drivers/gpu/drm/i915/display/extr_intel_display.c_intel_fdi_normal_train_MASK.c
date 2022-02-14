
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int ) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct intel_crtc *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->base.dev;
 struct drm_i915_private *VAR_10 = FUNC_7(VAR_9);
 int VAR_11 = VAR_8->pipe;
 i915_reg_t VAR_12;
 u32 VAR_13;


 VAR_12 = FUNC_1(VAR_11);
 VAR_13 = FUNC_3(VAR_12);
 if (FUNC_5(VAR_10)) {
  VAR_13 &= ~VAR_3;
  VAR_13 |= VAR_3 | VAR_7;
 } else {
  VAR_13 &= ~VAR_2;
  VAR_13 |= VAR_2 | VAR_7;
 }
 FUNC_4(VAR_12, VAR_13);

 VAR_12 = FUNC_0(VAR_11);
 VAR_13 = FUNC_3(VAR_12);
 if (FUNC_2(VAR_10)) {
  VAR_13 &= ~VAR_5;
  VAR_13 |= VAR_4;
 } else {
  VAR_13 &= ~VAR_2;
  VAR_13 |= VAR_2;
 }
 FUNC_4(VAR_12, VAR_13 | VAR_6);


 FUNC_6(VAR_12);
 FUNC_8(1000);


 if (FUNC_5(VAR_10))
  FUNC_4(VAR_12, FUNC_3(VAR_12) | VAR_1 |
      VAR_0);
}
