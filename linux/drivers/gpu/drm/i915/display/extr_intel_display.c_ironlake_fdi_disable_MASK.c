
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;
 struct drm_i915_private* FUNC_9 (struct drm_device*) ;
 struct intel_crtc* FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct drm_crtc *VAR_8)
{
 struct drm_device *VAR_9 = VAR_8->dev;
 struct drm_i915_private *VAR_10 = FUNC_9(VAR_9);
 struct intel_crtc *VAR_11 = FUNC_10(VAR_8);
 int VAR_12 = VAR_11->pipe;
 i915_reg_t VAR_13;
 u32 VAR_14;


 VAR_13 = FUNC_2(VAR_12);
 VAR_14 = FUNC_5(VAR_13);
 FUNC_6(VAR_13, VAR_14 & ~VAR_6);
 FUNC_8(VAR_13);

 VAR_13 = FUNC_1(VAR_12);
 VAR_14 = FUNC_5(VAR_13);
 VAR_14 &= ~(0x7 << 16);
 VAR_14 |= (FUNC_5(FUNC_7(VAR_12)) & VAR_7) << 11;
 FUNC_6(VAR_13, VAR_14 & ~VAR_4);

 FUNC_8(VAR_13);
 FUNC_11(100);


 if (FUNC_4(VAR_10))
  FUNC_6(FUNC_0(VAR_12), VAR_5);


 VAR_13 = FUNC_2(VAR_12);
 VAR_14 = FUNC_5(VAR_13);
 VAR_14 &= ~VAR_0;
 VAR_14 |= VAR_1;
 FUNC_6(VAR_13, VAR_14);

 VAR_13 = FUNC_1(VAR_12);
 VAR_14 = FUNC_5(VAR_13);
 if (FUNC_3(VAR_10)) {
  VAR_14 &= ~VAR_3;
  VAR_14 |= VAR_2;
 } else {
  VAR_14 &= ~VAR_0;
  VAR_14 |= VAR_1;
 }

 VAR_14 &= ~(0x07 << 16);
 VAR_14 |= (FUNC_5(FUNC_7(VAR_12)) & VAR_7) << 11;
 FUNC_6(VAR_13, VAR_14);

 FUNC_8(VAR_13);
 FUNC_11(100);
}
