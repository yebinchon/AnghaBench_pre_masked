
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_engine {int id; } ;
struct sun4i_tcon {struct sunxi_engine* lcd_rst; TYPE_1__* quirks; int list; int id; int regs; struct sunxi_engine* crtc; struct sunxi_engine* lvds_pll; struct sunxi_engine* lvds_rst; struct device* dev; struct drm_device* drm; } ;
struct sun4i_drv {int tcon_list; } ;
struct reset_control {int id; } ;
struct drm_device {struct sun4i_drv* dev_private; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_2__ {scalar_t__ has_channel_0; scalar_t__ needs_de_be_mux; scalar_t__ has_lvds_alt; scalar_t__ supports_lvds; scalar_t__ needs_edp_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sunxi_engine*) ;
 int FUNC_1 (struct sunxi_engine*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct sun4i_tcon*) ;
 int FUNC_4 (struct device*,char*) ;
 struct sunxi_engine* FUNC_5 (struct device*,char*) ;
 struct sun4i_tcon* FUNC_6 (struct device*,int,int ) ;
 struct sunxi_engine* FUNC_7 (struct device*,char*) ;
 struct sunxi_engine* FUNC_8 (struct device*,char*) ;
 struct sunxi_engine* FUNC_9 (struct device*,char*) ;
 int FUNC_10 (int *,int *) ;
 TYPE_1__* FUNC_11 (struct device*) ;
 scalar_t__ FUNC_12 (struct device_node*,char*) ;
 struct device_node* FUNC_13 (int ,int,int ) ;
 int FUNC_14 (struct device_node*) ;
 int FUNC_15 (int ,int ,int ,int ) ;
 int FUNC_16 (struct sunxi_engine*) ;
 int FUNC_17 (struct sunxi_engine*) ;
 int FUNC_18 (struct sunxi_engine*) ;
 struct sunxi_engine* FUNC_19 (struct drm_device*,struct sunxi_engine*,struct sun4i_tcon*) ;
 int FUNC_20 (struct device*,struct sun4i_tcon*) ;
 int FUNC_21 (struct sun4i_tcon*) ;
 int FUNC_22 (struct drm_device*,struct sun4i_tcon*) ;
 int FUNC_23 (struct drm_device*,struct sun4i_tcon*) ;
 struct sunxi_engine* FUNC_24 (struct sun4i_drv*,int ) ;
 int FUNC_25 (struct sun4i_tcon*) ;
 int FUNC_26 (struct device*,struct sun4i_tcon*) ;
 int FUNC_27 (struct device*,struct sun4i_tcon*) ;
 int FUNC_28 (struct device*,struct sun4i_tcon*) ;

__attribute__((used)) static int FUNC_29(struct device *VAR_9, struct device *VAR_10,
      void *VAR_11)
{
 struct drm_device *VAR_12 = VAR_11;
 struct sun4i_drv *VAR_13 = VAR_12->dev_private;
 struct sunxi_engine *VAR_14;
 struct device_node *VAR_15;
 struct sun4i_tcon *VAR_16;
 struct reset_control *VAR_17;
 bool VAR_18, VAR_19, VAR_20;
 int VAR_21;

 VAR_14 = FUNC_24(VAR_13, VAR_9->of_node);
 if (FUNC_0(VAR_14)) {
  FUNC_2(VAR_9, "Couldn't find matching engine\n");
  return -VAR_3;
 }

 VAR_16 = FUNC_6(VAR_9, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;
 FUNC_3(VAR_9, VAR_16);
 VAR_16->drm = VAR_12;
 VAR_16->dev = VAR_9;
 VAR_16->id = VAR_14->id;
 VAR_16->quirks = FUNC_11(VAR_9);

 VAR_16->lcd_rst = FUNC_7(VAR_9, "lcd");
 if (FUNC_0(VAR_16->lcd_rst)) {
  FUNC_2(VAR_9, "Couldn't get our reset line\n");
  return FUNC_1(VAR_16->lcd_rst);
 }

 if (VAR_16->quirks->needs_edp_reset) {
  VAR_17 = FUNC_9(VAR_9, "edp");
  if (FUNC_0(VAR_17)) {
   FUNC_2(VAR_9, "Couldn't get edp reset line\n");
   return FUNC_1(VAR_17);
  }

  VAR_21 = FUNC_17(VAR_17);
  if (VAR_21) {
   FUNC_2(VAR_9, "Couldn't deassert edp reset line\n");
   return VAR_21;
  }
 }


 VAR_21 = FUNC_18(VAR_16->lcd_rst);
 if (VAR_21) {
  FUNC_2(VAR_9, "Couldn't deassert our reset line\n");
  return VAR_21;
 }

 if (VAR_16->quirks->supports_lvds) {







  VAR_16->lvds_rst = FUNC_8(VAR_9, "lvds");
  if (FUNC_0(VAR_16->lvds_rst)) {
   FUNC_2(VAR_9, "Couldn't get our reset line\n");
   return FUNC_1(VAR_16->lvds_rst);
  } else if (VAR_16->lvds_rst) {
   VAR_18 = 1;
   FUNC_18(VAR_16->lvds_rst);
  } else {
   VAR_18 = 0;
  }
  if (VAR_16->quirks->has_lvds_alt) {
   VAR_16->lvds_pll = FUNC_5(VAR_9, "lvds-alt");
   if (FUNC_0(VAR_16->lvds_pll)) {
    if (FUNC_1(VAR_16->lvds_pll) == -VAR_1) {
     VAR_19 = 0;
    } else {
     FUNC_2(VAR_9, "Couldn't get the LVDS PLL\n");
     return FUNC_1(VAR_16->lvds_pll);
    }
   } else {
    VAR_19 = 1;
   }
  }

  if (!VAR_18 ||
      (VAR_16->quirks->has_lvds_alt && !VAR_19)) {
   FUNC_4(VAR_9, "Missing LVDS properties, Please upgrade your DT\n");
   FUNC_4(VAR_9, "LVDS output disabled\n");
   VAR_20 = 0;
  } else {
   VAR_20 = 1;
  }
 } else {
  VAR_20 = 0;
 }

 VAR_21 = FUNC_26(VAR_9, VAR_16);
 if (VAR_21) {
  FUNC_2(VAR_9, "Couldn't init our TCON clocks\n");
  goto err_assert_reset;
 }

 VAR_21 = FUNC_28(VAR_9, VAR_16);
 if (VAR_21) {
  FUNC_2(VAR_9, "Couldn't init our TCON regmap\n");
  goto err_free_clocks;
 }

 if (VAR_16->quirks->has_channel_0) {
  VAR_21 = FUNC_20(VAR_9, VAR_16);
  if (VAR_21) {
   FUNC_2(VAR_9, "Couldn't create our TCON dot clock\n");
   goto err_free_clocks;
  }
 }

 VAR_21 = FUNC_27(VAR_9, VAR_16);
 if (VAR_21) {
  FUNC_2(VAR_9, "Couldn't init our TCON interrupts\n");
  goto err_free_dotclock;
 }

 VAR_16->crtc = FUNC_19(VAR_12, VAR_14, VAR_16);
 if (FUNC_0(VAR_16->crtc)) {
  FUNC_2(VAR_9, "Couldn't create our CRTC\n");
  VAR_21 = FUNC_1(VAR_16->crtc);
  goto err_free_dotclock;
 }

 if (VAR_16->quirks->has_channel_0) {





  VAR_15 = FUNC_13(VAR_9->of_node, 1, 0);
  if (FUNC_12(VAR_15, "panel-lvds"))
   if (VAR_20)
    VAR_21 = FUNC_22(VAR_12, VAR_16);
   else
    VAR_21 = -VAR_0;
  else
   VAR_21 = FUNC_23(VAR_12, VAR_16);
  FUNC_14(VAR_15);

  if (VAR_21 < 0)
   goto err_free_dotclock;
 }

 if (VAR_16->quirks->needs_de_be_mux) {
  FUNC_15(VAR_16->regs, VAR_5,
       VAR_6,
       VAR_16->id);
  FUNC_15(VAR_16->regs, VAR_7,
       VAR_8,
       VAR_16->id);
 }

 FUNC_10(&VAR_16->list, &VAR_13->tcon_list);

 return 0;

err_free_dotclock:
 if (VAR_16->quirks->has_channel_0)
  FUNC_21(VAR_16);
err_free_clocks:
 FUNC_25(VAR_16);
err_assert_reset:
 FUNC_16(VAR_16->lcd_rst);
 return VAR_21;
}
