
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ili9322 {scalar_t__ vreg1out; scalar_t__ vcom_amplitude; scalar_t__ vcom_high; int* gamma; int input; int dev; TYPE_1__* conf; int regmap; } ;
struct drm_panel {int dummy; } ;
struct TYPE_2__ {int syncmode; int flip_vertical; int flip_horizontal; scalar_t__ vsync_active_high; scalar_t__ hsync_active_high; scalar_t__ de_active_high; scalar_t__ dclk_active_high; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,...) ;
 int * VAR_18 ;
 int FUNC_3 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct drm_panel *VAR_19, struct ili9322 *VAR_20)
{
 u8 VAR_21;
 int VAR_22;
 int VAR_23;


 VAR_22 = FUNC_3(VAR_20->regmap, VAR_5,
      VAR_6);
 if (VAR_22) {
  FUNC_1(VAR_20->dev, "can't issue GRESET (%d)\n", VAR_22);
  return VAR_22;
 }


 if (VAR_20->vreg1out != VAR_17) {
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_16,
       VAR_20->vreg1out);
  if (VAR_22) {
   FUNC_1(VAR_20->dev, "can't set up VREG1OUT (%d)\n", VAR_22);
   return VAR_22;
  }
 }

 if (VAR_20->vcom_amplitude != VAR_17) {
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_14,
       VAR_20->vcom_amplitude);
  if (VAR_22) {
   FUNC_1(VAR_20->dev,
    "can't set up VCOM amplitude (%d)\n", VAR_22);
   return VAR_22;
  }
 };

 if (VAR_20->vcom_high != VAR_17) {
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_15,
       VAR_20->vcom_high);
  if (VAR_22) {
   FUNC_1(VAR_20->dev, "can't set up VCOM high (%d)\n", VAR_22);
   return VAR_22;
  }
 };


 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_20->gamma); VAR_23++) {
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_4 + VAR_23,
       VAR_20->gamma[VAR_23]);
  if (VAR_22) {
   FUNC_1(VAR_20->dev,
    "can't write gamma V%d to 0x%02x (%d)\n",
    VAR_23 + 1, VAR_4 + VAR_23, VAR_22);
   return VAR_22;
  }
 }





 VAR_21 = 0;
 if (VAR_20->conf->dclk_active_high)
  VAR_21 = VAR_10;
 if (VAR_20->conf->de_active_high)
  VAR_21 |= VAR_11;
 if (VAR_20->conf->hsync_active_high)
  VAR_21 |= VAR_12;
 if (VAR_20->conf->vsync_active_high)
  VAR_21 |= VAR_13;
 VAR_22 = FUNC_3(VAR_20->regmap, VAR_9, VAR_21);
 if (VAR_22) {
  FUNC_1(VAR_20->dev, "can't write POL register (%d)\n", VAR_22);
  return VAR_22;
 }





 VAR_21 = VAR_20->conf->syncmode;
 VAR_21 |= VAR_8;
 VAR_22 = FUNC_3(VAR_20->regmap, VAR_7, VAR_21);
 if (VAR_22) {
  FUNC_1(VAR_20->dev, "can't write IF CTRL register (%d)\n", VAR_22);
  return VAR_22;
 }


 VAR_21 = (VAR_20->input << 4);

 if (!VAR_20->conf->flip_horizontal)
  VAR_21 |= VAR_2;
 if (!VAR_20->conf->flip_vertical)
  VAR_21 |= VAR_3;
 VAR_21 |= VAR_1;
 VAR_22 = FUNC_3(VAR_20->regmap, VAR_0, VAR_21);
 if (VAR_22) {
  FUNC_1(VAR_20->dev, "can't write ENTRY reg (%d)\n", VAR_22);
  return VAR_22;
 }
 FUNC_2(VAR_20->dev, "display is in %s mode, syncmode %02x\n",
   VAR_18[VAR_20->input],
   VAR_20->conf->syncmode);

 FUNC_2(VAR_20->dev, "initialized display\n");

 return 0;
}
