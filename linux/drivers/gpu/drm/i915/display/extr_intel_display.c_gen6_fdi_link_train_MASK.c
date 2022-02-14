
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_crtc_state {int fdi_lanes; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
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
 int FUNC_3 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*,int) ;
 int FUNC_12 (int ) ;
 int* VAR_15 ;
 struct drm_i915_private* FUNC_13 (struct drm_device*) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct intel_crtc *VAR_16,
    const struct intel_crtc_state *VAR_17)
{
 struct drm_device *VAR_18 = VAR_16->base.dev;
 struct drm_i915_private *VAR_19 = FUNC_13(VAR_18);
 int VAR_20 = VAR_16->pipe;
 i915_reg_t VAR_21;
 u32 VAR_22, VAR_23, VAR_24;



 VAR_21 = FUNC_5(VAR_20);
 VAR_22 = FUNC_9(VAR_21);
 VAR_22 &= ~VAR_12;
 VAR_22 &= ~VAR_9;
 FUNC_10(VAR_21, VAR_22);

 FUNC_12(VAR_21);
 FUNC_14(150);


 VAR_21 = FUNC_7(VAR_20);
 VAR_22 = FUNC_9(VAR_21);
 VAR_22 &= ~VAR_0;
 VAR_22 |= FUNC_2(VAR_17->fdi_lanes);
 VAR_22 &= ~VAR_2;
 VAR_22 |= VAR_3;
 VAR_22 &= ~VAR_8;

 VAR_22 |= VAR_1;
 FUNC_10(VAR_21, VAR_22 | VAR_14);

 FUNC_10(FUNC_6(VAR_20),
     VAR_13 | VAR_11);

 VAR_21 = FUNC_3(VAR_20);
 VAR_22 = FUNC_9(VAR_21);
 if (FUNC_8(VAR_19)) {
  VAR_22 &= ~VAR_7;
  VAR_22 |= VAR_4;
 } else {
  VAR_22 &= ~VAR_2;
  VAR_22 |= VAR_3;
 }
 FUNC_10(VAR_21, VAR_22 | VAR_10);

 FUNC_12(VAR_21);
 FUNC_14(150);

 for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
  VAR_21 = FUNC_7(VAR_20);
  VAR_22 = FUNC_9(VAR_21);
  VAR_22 &= ~VAR_8;
  VAR_22 |= VAR_15[VAR_23];
  FUNC_10(VAR_21, VAR_22);

  FUNC_12(VAR_21);
  FUNC_14(500);

  for (VAR_24 = 0; VAR_24 < 5; VAR_24++) {
   VAR_21 = FUNC_4(VAR_20);
   VAR_22 = FUNC_9(VAR_21);
   FUNC_0("FDI_RX_IIR 0x%x\n", VAR_22);
   if (VAR_22 & VAR_9) {
    FUNC_10(VAR_21, VAR_22 | VAR_9);
    FUNC_0("FDI train 1 done.\n");
    break;
   }
   FUNC_14(50);
  }
  if (VAR_24 < 5)
   break;
 }
 if (VAR_23 == 4)
  FUNC_1("FDI train 1 fail!\n");


 VAR_21 = FUNC_7(VAR_20);
 VAR_22 = FUNC_9(VAR_21);
 VAR_22 &= ~VAR_2;
 VAR_22 |= VAR_5;
 if (FUNC_11(VAR_19, 6)) {
  VAR_22 &= ~VAR_8;

  VAR_22 |= VAR_1;
 }
 FUNC_10(VAR_21, VAR_22);

 VAR_21 = FUNC_3(VAR_20);
 VAR_22 = FUNC_9(VAR_21);
 if (FUNC_8(VAR_19)) {
  VAR_22 &= ~VAR_7;
  VAR_22 |= VAR_6;
 } else {
  VAR_22 &= ~VAR_2;
  VAR_22 |= VAR_5;
 }
 FUNC_10(VAR_21, VAR_22);

 FUNC_12(VAR_21);
 FUNC_14(150);

 for (VAR_23 = 0; VAR_23 < 4; VAR_23++) {
  VAR_21 = FUNC_7(VAR_20);
  VAR_22 = FUNC_9(VAR_21);
  VAR_22 &= ~VAR_8;
  VAR_22 |= VAR_15[VAR_23];
  FUNC_10(VAR_21, VAR_22);

  FUNC_12(VAR_21);
  FUNC_14(500);

  for (VAR_24 = 0; VAR_24 < 5; VAR_24++) {
   VAR_21 = FUNC_4(VAR_20);
   VAR_22 = FUNC_9(VAR_21);
   FUNC_0("FDI_RX_IIR 0x%x\n", VAR_22);
   if (VAR_22 & VAR_12) {
    FUNC_10(VAR_21, VAR_22 | VAR_12);
    FUNC_0("FDI train 2 done.\n");
    break;
   }
   FUNC_14(50);
  }
  if (VAR_24 < 5)
   break;
 }
 if (VAR_23 == 4)
  FUNC_1("FDI train 2 fail!\n");

 FUNC_0("FDI train done.\n");
}
