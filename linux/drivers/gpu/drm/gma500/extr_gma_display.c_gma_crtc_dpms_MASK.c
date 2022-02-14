
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct psb_offset {int dpll; int conf; int base; int cntr; int status; } ;
struct gma_crtc {int pipe; int active; } ;
struct drm_psb_private {TYPE_1__* ops; struct psb_offset* regmap; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct TYPE_2__ {int (* update_wm ) (struct drm_device*,struct drm_crtc*) ;int (* disable_sr ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*,struct drm_crtc*) ;
 struct gma_crtc* FUNC_8 (struct drm_crtc*) ;
 int FUNC_9 (int) ;

void FUNC_10(struct drm_crtc *VAR_7, int VAR_8)
{
 struct drm_device *VAR_9 = VAR_7->dev;
 struct drm_psb_private *VAR_10 = VAR_9->dev_private;
 struct gma_crtc *VAR_11 = FUNC_8(VAR_7);
 int VAR_12 = VAR_11->pipe;
 const struct psb_offset *VAR_13 = &VAR_10->regmap[VAR_12];
 u32 VAR_14;





 if (FUNC_0(VAR_9))
  VAR_10->ops->disable_sr(VAR_9);

 switch (VAR_8) {
 case 130:
 case 129:
 case 128:
  if (VAR_11->active)
   break;

  VAR_11->active = 1;


  VAR_14 = FUNC_1(VAR_13->dpll);
  if ((VAR_14 & VAR_1) == 0) {
   FUNC_2(VAR_13->dpll, VAR_14);
   FUNC_1(VAR_13->dpll);

   FUNC_9(150);
   FUNC_2(VAR_13->dpll, VAR_14 | VAR_1);
   FUNC_1(VAR_13->dpll);

   FUNC_9(150);
   FUNC_2(VAR_13->dpll, VAR_14 | VAR_1);
   FUNC_1(VAR_13->dpll);

   FUNC_9(150);
  }


  VAR_14 = FUNC_1(VAR_13->cntr);
  if ((VAR_14 & VAR_0) == 0) {
   FUNC_2(VAR_13->cntr,
      VAR_14 | VAR_0);

   FUNC_2(VAR_13->base, FUNC_1(VAR_13->base));
  }

  FUNC_9(150);


  VAR_14 = FUNC_1(VAR_13->conf);
  if ((VAR_14 & VAR_3) == 0)
   FUNC_2(VAR_13->conf, VAR_14 | VAR_3);

  VAR_14 = FUNC_1(VAR_13->status);
  VAR_14 &= ~(0xFFFF);
  VAR_14 |= VAR_4;
  FUNC_2(VAR_13->status, VAR_14);
  FUNC_1(VAR_13->status);

  FUNC_4(VAR_7);




  break;
 case 131:
  if (!VAR_11->active)
   break;

  VAR_11->active = 0;






  FUNC_2(VAR_5, VAR_6);


  FUNC_3(VAR_7);


  FUNC_5(VAR_9);


  VAR_14 = FUNC_1(VAR_13->cntr);
  if ((VAR_14 & VAR_0) != 0) {
   FUNC_2(VAR_13->cntr,
      VAR_14 & ~VAR_0);

   FUNC_2(VAR_13->base, FUNC_1(VAR_13->base));
   FUNC_1(VAR_13->base);
  }


  VAR_14 = FUNC_1(VAR_13->conf);
  if ((VAR_14 & VAR_3) != 0) {
   FUNC_2(VAR_13->conf, VAR_14 & ~VAR_3);
   FUNC_1(VAR_13->conf);
  }


  FUNC_5(VAR_9);

  FUNC_9(150);


  VAR_14 = FUNC_1(VAR_13->dpll);
  if ((VAR_14 & VAR_1) != 0) {
   FUNC_2(VAR_13->dpll, VAR_14 & ~VAR_1);
   FUNC_1(VAR_13->dpll);
  }


  FUNC_9(150);
  break;
 }

 if (FUNC_0(VAR_9))
  VAR_10->ops->update_wm(VAR_9, VAR_7);


 FUNC_2(VAR_2, 0x3F3E);
}
