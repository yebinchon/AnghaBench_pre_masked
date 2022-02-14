
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_offset {int dpll; int conf; int base; int cntr; } ;
struct gma_crtc {int pipe; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct drm_crtc*) ;
 scalar_t__ FUNC_5 (struct drm_crtc*,int ) ;
 int FUNC_6 (struct drm_device*,int) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_crtc*,int) ;
 struct gma_crtc* FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct drm_crtc *VAR_15, int VAR_16)
{
 struct drm_device *VAR_17 = VAR_15->dev;
 struct drm_psb_private *VAR_18 = VAR_17->dev_private;
 struct gma_crtc *VAR_19 = FUNC_10(VAR_15);
 int VAR_20 = VAR_19->pipe;
 const struct psb_offset *VAR_21 = &VAR_18->regmap[VAR_20];
 u32 VAR_22;
 int VAR_23;
 int VAR_24 = FUNC_5(VAR_15, VAR_11) ? 1 : 0;

 if (FUNC_5(VAR_15, VAR_10)) {
  FUNC_9(VAR_15, VAR_16);
  return;
 }

 if (!FUNC_6(VAR_17, 1))
  return;




 switch (VAR_16) {
 case 130:
 case 129:
 case 128:
  for (VAR_23 = 0; VAR_23 <= VAR_24; VAR_23++) {

   VAR_22 = FUNC_1(VAR_21->dpll, VAR_23);
   if ((VAR_22 & VAR_1) == 0) {
    FUNC_3(VAR_21->dpll, VAR_22, VAR_23);
    FUNC_1(VAR_21->dpll, VAR_23);

    FUNC_11(150);
    FUNC_3(VAR_21->dpll,
         VAR_22 | VAR_1, VAR_23);
    FUNC_1(VAR_21->dpll, VAR_23);

    FUNC_11(150);
    FUNC_3(VAR_21->dpll,
         VAR_22 | VAR_1, VAR_23);
    FUNC_1(VAR_21->dpll, VAR_23);

    FUNC_11(150);
   }


   VAR_22 = FUNC_1(VAR_21->conf, VAR_23);
   if ((VAR_22 & VAR_12) == 0) {
    FUNC_3(VAR_21->conf,
         VAR_22 | VAR_12, VAR_23);
   }


   VAR_22 = FUNC_1(VAR_21->cntr, VAR_23);
   if ((VAR_22 & VAR_0) == 0) {
    FUNC_3(VAR_21->cntr,
         VAR_22 | VAR_0,
         VAR_23);

    FUNC_3(VAR_21->base,
     FUNC_1(VAR_21->base, VAR_23), VAR_23);
   }

  }
  FUNC_4(VAR_15);




  break;
 case 131:




  for (VAR_23 = 0; VAR_23 <= VAR_24; VAR_23++) {

   FUNC_3(VAR_13, VAR_14, VAR_23);

   VAR_22 = FUNC_1(VAR_21->cntr, VAR_23);
   if ((VAR_22 & VAR_0) != 0) {
    FUNC_3(VAR_21->cntr,
     VAR_22 & ~VAR_0, VAR_23);

    FUNC_3(VAR_21->base,
         FUNC_0(VAR_21->base), VAR_23);
    FUNC_1(VAR_21->base, VAR_23);
   }


   VAR_22 = FUNC_1(VAR_21->conf, VAR_23);
   if ((VAR_22 & VAR_12) != 0) {
    FUNC_3(VAR_21->conf,
         VAR_22 & ~VAR_12, VAR_23);
    FUNC_1(VAR_21->conf, VAR_23);
   }

   FUNC_8(VAR_17);

   VAR_22 = FUNC_1(VAR_21->dpll, VAR_23);
   if ((VAR_22 & VAR_1) != 0) {
    FUNC_3(VAR_21->dpll,
         VAR_22 & ~VAR_1, VAR_23);
    FUNC_1(VAR_21->dpll, VAR_23);
   }


   FUNC_11(150);
  }
  break;
 }


 FUNC_2(VAR_2, 0x3f80);
 FUNC_2(VAR_4, 0x3f8f0404);
 FUNC_2(VAR_5, 0x04040f04);
 FUNC_2(VAR_6, 0x0);
 FUNC_2(VAR_7, 0x04040404);
 FUNC_2(VAR_8, 0x04040404);
 FUNC_2(VAR_9, 0x78);
 FUNC_2(VAR_3, FUNC_0(VAR_3) | 0xc040);

 FUNC_7(VAR_17);
}
