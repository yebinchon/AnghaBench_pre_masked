
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
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int) ;
 int VAR_9 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_12 (struct drm_device*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct intel_crtc *VAR_10,
        const struct intel_crtc_state *VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->base.dev;
 struct drm_i915_private *VAR_13 = FUNC_12(VAR_12);
 int VAR_14 = VAR_10->pipe;
 i915_reg_t VAR_15;
 u32 VAR_16, VAR_17;


 FUNC_11(VAR_13, VAR_14);



 VAR_15 = FUNC_6(VAR_14);
 VAR_16 = FUNC_8(VAR_15);
 VAR_16 &= ~VAR_8;
 VAR_16 &= ~VAR_4;
 FUNC_9(VAR_15, VAR_16);
 FUNC_8(VAR_15);
 FUNC_13(150);


 VAR_15 = FUNC_7(VAR_14);
 VAR_16 = FUNC_8(VAR_15);
 VAR_16 &= ~VAR_0;
 VAR_16 |= FUNC_2(VAR_11->fdi_lanes);
 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_2;
 FUNC_9(VAR_15, VAR_16 | VAR_9);

 VAR_15 = FUNC_4(VAR_14);
 VAR_16 = FUNC_8(VAR_15);
 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_2;
 FUNC_9(VAR_15, VAR_16 | VAR_5);

 FUNC_10(VAR_15);
 FUNC_13(150);


 FUNC_9(FUNC_3(VAR_14), VAR_7);
 FUNC_9(FUNC_3(VAR_14), VAR_7 |
     VAR_6);

 VAR_15 = FUNC_5(VAR_14);
 for (VAR_17 = 0; VAR_17 < 5; VAR_17++) {
  VAR_16 = FUNC_8(VAR_15);
  FUNC_0("FDI_RX_IIR 0x%x\n", VAR_16);

  if ((VAR_16 & VAR_4)) {
   FUNC_0("FDI train 1 done.\n");
   FUNC_9(VAR_15, VAR_16 | VAR_4);
   break;
  }
 }
 if (VAR_17 == 5)
  FUNC_1("FDI train 1 fail!\n");


 VAR_15 = FUNC_7(VAR_14);
 VAR_16 = FUNC_8(VAR_15);
 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_3;
 FUNC_9(VAR_15, VAR_16);

 VAR_15 = FUNC_4(VAR_14);
 VAR_16 = FUNC_8(VAR_15);
 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_3;
 FUNC_9(VAR_15, VAR_16);

 FUNC_10(VAR_15);
 FUNC_13(150);

 VAR_15 = FUNC_5(VAR_14);
 for (VAR_17 = 0; VAR_17 < 5; VAR_17++) {
  VAR_16 = FUNC_8(VAR_15);
  FUNC_0("FDI_RX_IIR 0x%x\n", VAR_16);

  if (VAR_16 & VAR_8) {
   FUNC_9(VAR_15, VAR_16 | VAR_8);
   FUNC_0("FDI train 2 done.\n");
   break;
  }
 }
 if (VAR_17 == 5)
  FUNC_1("FDI train 2 fail!\n");

 FUNC_0("FDI train done\n");

}
