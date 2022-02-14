
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_offset {int dpll; int conf; int base; int cntr; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_device {int dev; struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (struct drm_device*,int ,int) ;
 int FUNC_6 (int) ;

void FUNC_7(struct drm_device *VAR_10, int VAR_11)
{
 struct drm_psb_private *VAR_12 = VAR_10->dev_private;
 const struct psb_offset *VAR_13 = &VAR_12->regmap[VAR_11];
 u32 VAR_14;

 FUNC_3(VAR_10->dev, "pipe = %d\n", VAR_11);


 if (VAR_11 != 1)
  FUNC_5(VAR_10, FUNC_0(VAR_11),
    VAR_2 | VAR_3);


 VAR_14 = FUNC_1(VAR_13->cntr);
 if ((VAR_14 & VAR_0) != 0) {
  FUNC_2(VAR_13->cntr,
     VAR_14 & ~VAR_0);

  FUNC_2(VAR_13->base, FUNC_1(VAR_13->base));
  FUNC_1(VAR_13->base);
 }




 VAR_14 = FUNC_1(VAR_13->conf);
 if ((VAR_14 & VAR_6) != 0) {
  VAR_14 &= ~VAR_6;
  VAR_14 |= VAR_9 | VAR_8;
  FUNC_2(VAR_13->conf, VAR_14);
  FUNC_1(VAR_13->conf);


  FUNC_4(VAR_10, VAR_11);
 }

 VAR_14 = FUNC_1(VAR_13->dpll);
 if (VAR_14 & VAR_1) {
  if ((VAR_11 != 1 &&
   !((FUNC_1(VAR_5) | FUNC_1(VAR_7))
    & VAR_6)) || VAR_11 == 1) {
   VAR_14 &= ~(VAR_1);
   FUNC_2(VAR_13->dpll, VAR_14);
   FUNC_1(VAR_13->dpll);


   FUNC_6(500);

   if (!(VAR_14 & VAR_4)) {

    FUNC_2(VAR_13->dpll, VAR_14 | VAR_4);

    FUNC_6(5000);
   }
  }
 }

}
