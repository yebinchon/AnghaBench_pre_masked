
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psb_intel_lvds_priv {int savePP_ON; int savePP_OFF; int saveLVDS; int savePP_CONTROL; int savePP_CYCLE; int saveBLC_PWM_CTL; int savePFIT_CONTROL; int savePFIT_PGM_RATIOS; } ;
struct gma_encoder {scalar_t__ dev_priv; } ;
struct drm_device {int dev; } ;
struct drm_connector {struct drm_device* dev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,int,int,int,int,int) ;
 struct gma_encoder* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_4(struct drm_connector *VAR_11)
{
 struct drm_device *VAR_12 = VAR_11->dev;
 u32 VAR_13;
 struct gma_encoder *VAR_14 = FUNC_3(VAR_11);
 struct psb_intel_lvds_priv *VAR_15 =
  (struct psb_intel_lvds_priv *)VAR_14->dev_priv;

 FUNC_2(VAR_12->dev, "(0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x)\n",
   VAR_15->savePP_ON,
   VAR_15->savePP_OFF,
   VAR_15->saveLVDS,
   VAR_15->savePP_CONTROL,
   VAR_15->savePP_CYCLE,
   VAR_15->saveBLC_PWM_CTL);

 FUNC_1(VAR_0, VAR_15->saveBLC_PWM_CTL);
 FUNC_1(VAR_4, VAR_15->savePFIT_CONTROL);
 FUNC_1(VAR_5, VAR_15->savePFIT_PGM_RATIOS);
 FUNC_1(VAR_3, VAR_15->savePP_ON);
 FUNC_1(VAR_2, VAR_15->savePP_OFF);

 FUNC_1(VAR_8, VAR_15->savePP_CYCLE);
 FUNC_1(VAR_7, VAR_15->savePP_CONTROL);
 FUNC_1(VAR_1, VAR_15->saveLVDS);

 if (VAR_15->savePP_CONTROL & VAR_6) {
  FUNC_1(VAR_7, FUNC_0(VAR_7) |
   VAR_6);
  do {
   VAR_13 = FUNC_0(VAR_10);
  } while ((VAR_13 & VAR_9) == 0);
 } else {
  FUNC_1(VAR_7, FUNC_0(VAR_7) &
   ~VAR_6);
  do {
   VAR_13 = FUNC_0(VAR_10);
  } while (VAR_13 & VAR_9);
 }
}
