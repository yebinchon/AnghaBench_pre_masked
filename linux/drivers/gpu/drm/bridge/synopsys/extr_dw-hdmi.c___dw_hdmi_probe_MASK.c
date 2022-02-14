
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct resource {int start; } ;
struct regmap_config {int dummy; } ;
struct platform_device_info {char* name; int size_data; void* dma_mask; struct dw_hdmi_i2s_audio_data* data; int id; struct device* parent; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dw_hdmi_plat_data {int * regm; } ;
struct dw_hdmi_i2s_audio_data {int irq; int (* read ) (struct dw_hdmi*,int ) ;int * ops; struct dw_hdmi* hdmi; int write; int eld; int * base; int phys; } ;
struct dw_hdmi_cec_data {int irq; int (* read ) (struct dw_hdmi*,int ) ;int * ops; struct dw_hdmi* hdmi; int write; int eld; int * base; int phys; } ;
struct dw_hdmi_audio_data {int irq; int (* read ) (struct dw_hdmi*,int ) ;int * ops; struct dw_hdmi* hdmi; int write; int eld; int * base; int phys; } ;
struct TYPE_7__ {int eld; } ;
struct TYPE_6__ {struct device_node* of_node; int * funcs; struct dw_hdmi* driver_private; } ;
struct TYPE_5__ {int name; } ;
struct dw_hdmi {int sample_rate; int disabled; int rxsense; int phy_mask; int mc_clkdis; int reg_shift; int version; int * ddc; int * isfr_clk; int * cec_clk; int * iahb_clk; TYPE_4__* i2c; void* cec; void* audio; int disable_audio; int enable_audio; TYPE_3__ connector; int * regs; TYPE_2__ bridge; int * unwedge_state; int * default_state; int * pinctrl; TYPE_1__ phy; struct device* dev; int * regm; int audio_lock; int cec_notifier_mutex; int audio_mutex; int mutex; struct dw_hdmi_plat_data const* plat_data; } ;
struct device_node {int dummy; } ;
typedef int pdevinfo ;
typedef int cec ;
typedef int audio ;
struct TYPE_8__ {int adap; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dw_hdmi* FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_22 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (struct device*,char*,int,int,char*,int ) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*,char*) ;
 void* FUNC_11 (struct device*,char*) ;
 int * FUNC_12 (struct device*,struct resource*) ;
 struct dw_hdmi* FUNC_13 (struct device*,int,int ) ;
 int * FUNC_14 (struct device*) ;
 int * FUNC_15 (struct device*,int *,struct regmap_config const*) ;
 int FUNC_16 (struct device*,int,int ,int ,int ,int ,struct dw_hdmi*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_17 (struct dw_hdmi*) ;
 int VAR_27 ;
 int * FUNC_18 (struct dw_hdmi*) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_19 (struct dw_hdmi*) ;
 int VAR_30 ;
 int FUNC_20 (struct dw_hdmi*) ;
 int FUNC_21 (struct dw_hdmi*,int ) ;
 struct regmap_config VAR_31 ;
 struct regmap_config VAR_32 ;
 int VAR_33 ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct platform_device_info*,int ,int) ;
 int FUNC_25 (int *) ;
 int * FUNC_26 (struct device_node*) ;
 int FUNC_27 (struct device_node*) ;
 struct device_node* FUNC_28 (struct device_node*,char*,int ) ;
 int FUNC_29 (struct device_node*,char*,int*) ;
 void* FUNC_30 (int *,char*) ;
 void* FUNC_31 (struct platform_device_info*) ;
 int FUNC_32 (struct platform_device*,int ) ;
 struct resource* FUNC_33 (struct platform_device*,int ,int ) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static struct dw_hdmi *
FUNC_35(struct platform_device *VAR_34,
  const struct dw_hdmi_plat_data *VAR_35)
{
 struct device *VAR_36 = &VAR_34->dev;
 struct device_node *VAR_37 = VAR_36->of_node;
 struct platform_device_info VAR_38;
 struct device_node *VAR_39;
 struct dw_hdmi_cec_data VAR_40;
 struct dw_hdmi *VAR_41;
 struct resource *VAR_42 = ((void*)0);
 int VAR_43;
 int VAR_44;
 u32 VAR_45 = 1;
 u8 VAR_46;
 u8 VAR_47;
 u8 VAR_48;
 u8 VAR_49;

 VAR_41 = FUNC_13(VAR_36, sizeof(*VAR_41), VAR_5);
 if (!VAR_41)
  return FUNC_1(-VAR_3);

 VAR_41->plat_data = VAR_35;
 VAR_41->dev = VAR_36;
 VAR_41->sample_rate = 48000;
 VAR_41->disabled = 1;
 VAR_41->rxsense = 1;
 VAR_41->phy_mask = (u8)~(VAR_12 | VAR_13);
 VAR_41->mc_clkdis = 0x7f;

 FUNC_25(&VAR_41->mutex);
 FUNC_25(&VAR_41->audio_mutex);
 FUNC_25(&VAR_41->cec_notifier_mutex);
 FUNC_34(&VAR_41->audio_lock);

 VAR_39 = FUNC_28(VAR_37, "ddc-i2c-bus", 0);
 if (VAR_39) {
  VAR_41->ddc = FUNC_26(VAR_39);
  FUNC_27(VAR_39);
  if (!VAR_41->ddc) {
   FUNC_6(VAR_41->dev, "failed to read ddc node\n");
   return FUNC_1(-VAR_4);
  }

 } else {
  FUNC_6(VAR_41->dev, "no ddc property found\n");
 }

 if (!VAR_35->regm) {
  const struct regmap_config *VAR_50;

  FUNC_29(VAR_37, "reg-io-width", &VAR_45);
  switch (VAR_45) {
  case 4:
   VAR_50 = &VAR_31;
   VAR_41->reg_shift = 2;
   break;
  case 1:
   VAR_50 = &VAR_32;
   break;
  default:
   FUNC_7(VAR_36, "reg-io-width must be 1 or 4\n");
   return FUNC_1(-VAR_0);
  }

  VAR_42 = FUNC_33(VAR_34, VAR_20, 0);
  VAR_41->regs = FUNC_12(VAR_36, VAR_42);
  if (FUNC_2(VAR_41->regs)) {
   VAR_44 = FUNC_3(VAR_41->regs);
   goto err_res;
  }

  VAR_41->regm = FUNC_15(VAR_36, VAR_41->regs, VAR_50);
  if (FUNC_2(VAR_41->regm)) {
   FUNC_7(VAR_36, "Failed to configure regmap\n");
   VAR_44 = FUNC_3(VAR_41->regm);
   goto err_res;
  }
 } else {
  VAR_41->regm = VAR_35->regm;
 }

 VAR_41->isfr_clk = FUNC_11(VAR_41->dev, "isfr");
 if (FUNC_2(VAR_41->isfr_clk)) {
  VAR_44 = FUNC_3(VAR_41->isfr_clk);
  FUNC_7(VAR_41->dev, "Unable to get HDMI isfr clk: %d\n", VAR_44);
  goto err_res;
 }

 VAR_44 = FUNC_5(VAR_41->isfr_clk);
 if (VAR_44) {
  FUNC_7(VAR_41->dev, "Cannot enable HDMI isfr clock: %d\n", VAR_44);
  goto err_res;
 }

 VAR_41->iahb_clk = FUNC_11(VAR_41->dev, "iahb");
 if (FUNC_2(VAR_41->iahb_clk)) {
  VAR_44 = FUNC_3(VAR_41->iahb_clk);
  FUNC_7(VAR_41->dev, "Unable to get HDMI iahb clk: %d\n", VAR_44);
  goto err_isfr;
 }

 VAR_44 = FUNC_5(VAR_41->iahb_clk);
 if (VAR_44) {
  FUNC_7(VAR_41->dev, "Cannot enable HDMI iahb clock: %d\n", VAR_44);
  goto err_isfr;
 }

 VAR_41->cec_clk = FUNC_11(VAR_41->dev, "cec");
 if (FUNC_3(VAR_41->cec_clk) == -VAR_2) {
  VAR_41->cec_clk = ((void*)0);
 } else if (FUNC_2(VAR_41->cec_clk)) {
  VAR_44 = FUNC_3(VAR_41->cec_clk);
  if (VAR_44 != -VAR_4)
   FUNC_7(VAR_41->dev, "Cannot get HDMI cec clock: %d\n",
    VAR_44);

  VAR_41->cec_clk = ((void*)0);
  goto err_iahb;
 } else {
  VAR_44 = FUNC_5(VAR_41->cec_clk);
  if (VAR_44) {
   FUNC_7(VAR_41->dev, "Cannot enable HDMI cec clock: %d\n",
    VAR_44);
   goto err_iahb;
  }
 }


 VAR_41->version = (FUNC_21(VAR_41, VAR_11) << 8)
        | (FUNC_21(VAR_41, VAR_19) << 0);
 VAR_46 = FUNC_21(VAR_41, VAR_14);
 VAR_47 = FUNC_21(VAR_41, VAR_16);

 if (VAR_46 != VAR_15 ||
     (VAR_47 & ~VAR_17) != VAR_18) {
  FUNC_7(VAR_36, "Unsupported HDMI controller (%04x:%02x:%02x)\n",
   VAR_41->version, VAR_46, VAR_47);
  VAR_44 = -VAR_1;
  goto err_iahb;
 }

 VAR_44 = FUNC_17(VAR_41);
 if (VAR_44 < 0)
  goto err_iahb;

 FUNC_8(VAR_36, "Detected HDMI TX controller v%x.%03x %s HDCP (%s)\n",
   VAR_41->version >> 12, VAR_41->version & 0xfff,
   VAR_47 & VAR_17 ? "with" : "without",
   VAR_41->phy.name);

 FUNC_19(VAR_41);

 VAR_43 = FUNC_32(VAR_34, 0);
 if (VAR_43 < 0) {
  VAR_44 = VAR_43;
  goto err_iahb;
 }

 VAR_44 = FUNC_16(VAR_36, VAR_43, VAR_27,
     VAR_30, VAR_21,
     FUNC_9(VAR_36), VAR_41);
 if (VAR_44)
  goto err_iahb;





 FUNC_20(VAR_41);


 if (!VAR_41->ddc) {

  VAR_41->pinctrl = FUNC_14(VAR_36);
  if (!FUNC_2(VAR_41->pinctrl)) {
   VAR_41->unwedge_state =
    FUNC_30(VAR_41->pinctrl, "unwedge");
   VAR_41->default_state =
    FUNC_30(VAR_41->pinctrl, "default");

   if (FUNC_2(VAR_41->default_state) ||
       FUNC_2(VAR_41->unwedge_state)) {
    if (!FUNC_2(VAR_41->unwedge_state))
     FUNC_10(VAR_36,
       "Unwedge requires default pinctrl\n");
    VAR_41->default_state = ((void*)0);
    VAR_41->unwedge_state = ((void*)0);
   }
  }

  VAR_41->ddc = FUNC_18(VAR_41);
  if (FUNC_2(VAR_41->ddc))
   VAR_41->ddc = ((void*)0);
 }

 VAR_41->bridge.driver_private = VAR_41;
 VAR_41->bridge.funcs = &VAR_25;




 FUNC_24(&VAR_38, 0, sizeof(VAR_38));
 VAR_38.parent = VAR_36;
 VAR_38.id = VAR_22;

 VAR_48 = FUNC_21(VAR_41, VAR_8);
 VAR_49 = FUNC_21(VAR_41, VAR_10);

 if (VAR_42 && VAR_49 & VAR_9) {
  struct dw_hdmi_audio_data VAR_51;

  VAR_51.phys = VAR_42->start;
  VAR_51.base = VAR_41->regs;
  VAR_51.irq = VAR_43;
  VAR_51.hdmi = VAR_41;
  VAR_51.eld = VAR_41->connector.eld;
  VAR_41->enable_audio = VAR_24;
  VAR_41->disable_audio = VAR_23;

  VAR_38.name = "dw-hdmi-ahb-audio";
  VAR_38.data = &VAR_51;
  VAR_38.size_data = sizeof(VAR_51);
  VAR_38.dma_mask = FUNC_0(32);
  VAR_41->audio = FUNC_31(&VAR_38);
 } else if (VAR_48 & VAR_7) {
  struct dw_hdmi_i2s_audio_data VAR_52;

  VAR_52.hdmi = VAR_41;
  VAR_52.eld = VAR_41->connector.eld;
  VAR_52.write = VAR_33;
  VAR_52.read = FUNC_21;
  VAR_41->enable_audio = VAR_29;
  VAR_41->disable_audio = VAR_28;

  VAR_38.name = "dw-hdmi-i2s-audio";
  VAR_38.data = &VAR_52;
  VAR_38.size_data = sizeof(VAR_52);
  VAR_38.dma_mask = FUNC_0(32);
  VAR_41->audio = FUNC_31(&VAR_38);
 }

 if (VAR_48 & VAR_6) {
  VAR_40.hdmi = VAR_41;
  VAR_40.ops = &VAR_26;
  VAR_40.irq = VAR_43;

  VAR_38.name = "dw-hdmi-cec";
  VAR_38.data = &VAR_40;
  VAR_38.size_data = sizeof(VAR_40);
  VAR_38.dma_mask = 0;

  VAR_41->cec = FUNC_31(&VAR_38);
 }

 return VAR_41;

err_iahb:
 if (VAR_41->i2c) {
  FUNC_22(&VAR_41->i2c->adap);
  VAR_41->ddc = ((void*)0);
 }

 FUNC_4(VAR_41->iahb_clk);
 if (VAR_41->cec_clk)
  FUNC_4(VAR_41->cec_clk);
err_isfr:
 FUNC_4(VAR_41->isfr_clk);
err_res:
 FUNC_23(VAR_41->ddc);

 return FUNC_1(VAR_44);
}
