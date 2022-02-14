
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


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int) ;
 int VAR_15 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int* VAR_16 ;
 struct drm_i915_private* FUNC_11 (struct drm_device*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct intel_crtc *VAR_17,
          const struct intel_crtc_state *VAR_18)
{
 struct drm_device *VAR_19 = VAR_17->base.dev;
 struct drm_i915_private *VAR_20 = FUNC_11(VAR_19);
 int VAR_21 = VAR_17->pipe;
 i915_reg_t VAR_22;
 u32 VAR_23, VAR_24, VAR_25;



 VAR_22 = FUNC_5(VAR_21);
 VAR_23 = FUNC_8(VAR_22);
 VAR_23 &= ~VAR_13;
 VAR_23 &= ~VAR_10;
 FUNC_9(VAR_22, VAR_23);

 FUNC_10(VAR_22);
 FUNC_12(150);

 FUNC_1("FDI_RX_IIR before link train 0x%x\n",
        FUNC_8(FUNC_4(VAR_21)));


 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_16) * 2; VAR_25++) {

  VAR_22 = FUNC_7(VAR_21);
  VAR_23 = FUNC_8(VAR_22);
  VAR_23 &= ~(VAR_2 | VAR_3);
  VAR_23 &= ~VAR_15;
  FUNC_9(VAR_22, VAR_23);

  VAR_22 = FUNC_3(VAR_21);
  VAR_23 = FUNC_8(VAR_22);
  VAR_23 &= ~VAR_2;
  VAR_23 &= ~VAR_8;
  VAR_23 &= ~VAR_11;
  FUNC_9(VAR_22, VAR_23);


  VAR_22 = FUNC_7(VAR_21);
  VAR_23 = FUNC_8(VAR_22);
  VAR_23 &= ~VAR_1;
  VAR_23 |= FUNC_2(VAR_18->fdi_lanes);
  VAR_23 |= VAR_5;
  VAR_23 &= ~VAR_9;
  VAR_23 |= VAR_16[VAR_25/2];
  VAR_23 |= VAR_0;
  FUNC_9(VAR_22, VAR_23 | VAR_15);

  FUNC_9(FUNC_6(VAR_21),
      VAR_14 | VAR_12);

  VAR_22 = FUNC_3(VAR_21);
  VAR_23 = FUNC_8(VAR_22);
  VAR_23 |= VAR_4;
  VAR_23 |= VAR_0;
  FUNC_9(VAR_22, VAR_23 | VAR_11);

  FUNC_10(VAR_22);
  FUNC_12(1);

  for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
   VAR_22 = FUNC_4(VAR_21);
   VAR_23 = FUNC_8(VAR_22);
   FUNC_1("FDI_RX_IIR 0x%x\n", VAR_23);

   if (VAR_23 & VAR_10 ||
       (FUNC_8(VAR_22) & VAR_10)) {
    FUNC_9(VAR_22, VAR_23 | VAR_10);
    FUNC_1("FDI train 1 done, level %i.\n",
           VAR_24);
    break;
   }
   FUNC_12(1);
  }
  if (VAR_24 == 4) {
   FUNC_1("FDI train 1 fail on vswing %d\n", VAR_25 / 2);
   continue;
  }


  VAR_22 = FUNC_7(VAR_21);
  VAR_23 = FUNC_8(VAR_22);
  VAR_23 &= ~VAR_3;
  VAR_23 |= VAR_7;
  FUNC_9(VAR_22, VAR_23);

  VAR_22 = FUNC_3(VAR_21);
  VAR_23 = FUNC_8(VAR_22);
  VAR_23 &= ~VAR_8;
  VAR_23 |= VAR_6;
  FUNC_9(VAR_22, VAR_23);

  FUNC_10(VAR_22);
  FUNC_12(2);

  for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
   VAR_22 = FUNC_4(VAR_21);
   VAR_23 = FUNC_8(VAR_22);
   FUNC_1("FDI_RX_IIR 0x%x\n", VAR_23);

   if (VAR_23 & VAR_13 ||
       (FUNC_8(VAR_22) & VAR_13)) {
    FUNC_9(VAR_22, VAR_23 | VAR_13);
    FUNC_1("FDI train 2 done, level %i.\n",
           VAR_24);
    goto train_done;
   }
   FUNC_12(2);
  }
  if (VAR_24 == 4)
   FUNC_1("FDI train 2 fail on vswing %d\n", VAR_25 / 2);
 }

train_done:
 FUNC_1("FDI train done.\n");
}
