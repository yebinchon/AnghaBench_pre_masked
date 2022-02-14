
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_offset {int dpll; int conf; int cntr; int base; int status; } ;
struct gma_crtc {int pipe; } ;
struct drm_psb_private {int* pipeconf; struct psb_offset* regmap; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_device*,int) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*,int) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct drm_device*,int ,int) ;
 int FUNC_11 (int) ;
 struct gma_crtc* FUNC_12 (struct drm_crtc*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct drm_crtc *VAR_14, int VAR_15)
{
 struct drm_device *VAR_16 = VAR_14->dev;
 struct drm_psb_private *VAR_17 = VAR_16->dev_private;
 struct gma_crtc *VAR_18 = FUNC_12(VAR_14);
 int VAR_19 = VAR_18->pipe;
 const struct psb_offset *VAR_20 = &VAR_17->regmap[VAR_19];
 u32 VAR_21 = VAR_17->pipeconf[VAR_19];
 u32 VAR_22;
 int VAR_23 = 0;

 FUNC_4(VAR_16->dev, "mode = %d, pipe = %d\n", VAR_15, VAR_19);




 if (!FUNC_6(VAR_16, 1))
  return;




 switch (VAR_15) {
 case 130:
 case 129:
 case 128:

  VAR_22 = FUNC_2(VAR_20->dpll);

  if ((VAR_22 & VAR_1) == 0) {


   if (VAR_22 & VAR_4) {
    VAR_22 &= ~VAR_4;
    FUNC_3(VAR_20->dpll, VAR_22);

    FUNC_13(500);
   }

   FUNC_3(VAR_20->dpll, VAR_22);
   FUNC_2(VAR_20->dpll);

   FUNC_13(500);

   FUNC_3(VAR_20->dpll, VAR_22 | VAR_1);
   FUNC_2(VAR_20->dpll);






   while ((VAR_19 != 2) && (VAR_23 < 20000) &&
     !(FUNC_2(VAR_20->conf) & VAR_9)) {
    FUNC_13(150);
    VAR_23++;
   }
  }


  VAR_22 = FUNC_2(VAR_20->cntr);
  if ((VAR_22 & VAR_0) == 0) {
   FUNC_3(VAR_20->cntr,
    VAR_22 | VAR_0);

   FUNC_3(VAR_20->base, FUNC_2(VAR_20->base));
  }


  VAR_22 = FUNC_2(VAR_20->conf);
  if ((VAR_22 & VAR_6) == 0) {
   FUNC_3(VAR_20->conf, VAR_21);


   FUNC_9(VAR_16, VAR_19);
  }



  if (VAR_19 == 0 || VAR_19 == 2) {
   FUNC_3(VAR_20->status, FUNC_2(VAR_20->status));
   FUNC_11(100);
   if (VAR_11 & FUNC_2(VAR_20->status))
    FUNC_4(VAR_16->dev, "OK");
   else {
    FUNC_4(VAR_16->dev, "STUCK!!!!");

    VAR_22 = FUNC_2(VAR_20->cntr);
    FUNC_3(VAR_20->cntr,
      VAR_22 & ~VAR_0);
    FUNC_3(VAR_20->base, FUNC_2(VAR_20->base));

    FUNC_3(0xb048, 1);
    FUNC_11(100);
    VAR_22 = FUNC_2(VAR_20->conf);
    VAR_22 &= ~VAR_6;
    FUNC_3(VAR_20->conf, VAR_22);
    FUNC_11(100);
    FUNC_3(FUNC_0(VAR_19), 0);
    FUNC_11(100);
    FUNC_3(0xb004, FUNC_2(0xb004));

    FUNC_3(FUNC_0(VAR_19), 1);
    VAR_22 = FUNC_2(VAR_20->cntr);
    FUNC_3(VAR_20->cntr,
      VAR_22 | VAR_0);
    FUNC_3(VAR_20->base, FUNC_2(VAR_20->base));

    FUNC_3(0xb048, 2);
    FUNC_11(100);
    VAR_22 = FUNC_2(VAR_20->conf);
    VAR_22 |= VAR_6;
    FUNC_3(VAR_20->conf, VAR_22);
   }
  }

  FUNC_5(VAR_14);





  break;
 case 131:



  if (VAR_19 != 1)
   FUNC_10(VAR_16,
    FUNC_1(VAR_19),
    VAR_2 | VAR_3);


  FUNC_3(VAR_12, VAR_13);


  VAR_22 = FUNC_2(VAR_20->cntr);
  if ((VAR_22 & VAR_0) != 0) {
   FUNC_3(VAR_20->cntr,
      VAR_22 & ~VAR_0);

   FUNC_3(VAR_20->base, FUNC_2(VAR_20->base));
   FUNC_2(VAR_20->base);
  }


  VAR_22 = FUNC_2(VAR_20->conf);
  if ((VAR_22 & VAR_6) != 0) {
   VAR_22 &= ~VAR_6;
   VAR_22 |= VAR_10 | VAR_8;
   FUNC_3(VAR_20->conf, VAR_22);
   FUNC_2(VAR_20->conf);


   FUNC_8(VAR_16, VAR_19);
  }

  VAR_22 = FUNC_2(VAR_20->dpll);
  if (VAR_22 & VAR_1) {
   if ((VAR_19 != 1 && !((FUNC_2(VAR_5)
    | FUNC_2(VAR_7)) & VAR_6))
     || VAR_19 == 1) {
    VAR_22 &= ~(VAR_1);
    FUNC_3(VAR_20->dpll, VAR_22);
    FUNC_2(VAR_20->dpll);


    FUNC_13(500);
   }
  }
  break;
 }
 FUNC_7(VAR_16);
}
