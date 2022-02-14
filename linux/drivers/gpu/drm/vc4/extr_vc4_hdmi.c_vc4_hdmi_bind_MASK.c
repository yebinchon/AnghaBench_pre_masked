
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int base; int type; } ;
struct vc4_hdmi_encoder {TYPE_1__ base; } ;
struct TYPE_7__ {void* nregs; void* regs; void* base; } ;
struct TYPE_6__ {void* nregs; void* regs; void* base; } ;
struct vc4_hdmi {int hpd_gpio; int hpd_active_low; TYPE_4__* ddc; void* hsm_clock; int * encoder; void* connector; int cec_adap; void* pixel_clock; TYPE_3__ hd_regset; void* hd_regs; TYPE_2__ hdmi_regset; void* hdmicore_regs; struct platform_device* pdev; } ;
struct vc4_dev {struct vc4_hdmi* hdmi; } ;
struct platform_device {int dummy; } ;
struct drm_device {struct vc4_dev* dev_private; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
typedef enum of_gpio_flags { ____Placeholder_of_gpio_flags } of_gpio_flags ;
struct TYPE_8__ {int dev; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (void*) ;
 int VAR_10 ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (int *,struct vc4_dev*,char*,int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,struct device*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (void*,int ) ;
 struct drm_device* FUNC_16 (struct device*) ;
 void* FUNC_17 (struct device*,char*) ;
 void* FUNC_18 (struct device*,int,int ) ;
 int FUNC_19 (struct device*,int ,int ,int ,int ,char*,struct vc4_dev*) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (struct drm_device*,int *,int *,int ,int *) ;
 void* VAR_20 ;
 void* VAR_21 ;
 TYPE_4__* FUNC_22 (struct device_node*) ;
 scalar_t__ FUNC_23 (int ,char*,int*) ;
 int FUNC_24 (int ,char*,int ,int*) ;
 int FUNC_25 (struct device_node*) ;
 struct device_node* FUNC_26 (int ,char*,int ) ;
 int FUNC_27 (struct platform_device*,int ) ;
 int FUNC_28 (struct device*) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (int *) ;
 struct platform_device* FUNC_31 (struct device*) ;
 int FUNC_32 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_33 (struct drm_device*,char*,int ,struct vc4_hdmi*) ;
 int FUNC_34 (struct vc4_hdmi*) ;
 int VAR_24 ;
 int FUNC_35 (void*) ;
 void* FUNC_36 (struct drm_device*,int *) ;
 int VAR_25 ;
 int FUNC_37 (int *) ;
 int VAR_26 ;
 int VAR_27 ;
 void* FUNC_38 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_39(struct device *VAR_28, struct device *VAR_29, void *VAR_30)
{
 struct platform_device *VAR_31 = FUNC_31(VAR_28);
 struct drm_device *VAR_32 = FUNC_16(VAR_29);
 struct vc4_dev *VAR_33 = VAR_32->dev_private;
 struct vc4_hdmi *VAR_34;
 struct vc4_hdmi_encoder *VAR_35;
 struct device_node *VAR_36;
 u32 VAR_37;
 int VAR_38;

 VAR_34 = FUNC_18(VAR_28, sizeof(*VAR_34), VAR_8);
 if (!VAR_34)
  return -VAR_6;

 VAR_35 = FUNC_18(VAR_28, sizeof(*VAR_35),
     VAR_8);
 if (!VAR_35)
  return -VAR_6;
 VAR_35->base.type = VAR_11;
 VAR_34->encoder = &VAR_35->base.base;

 VAR_34->pdev = VAR_31;
 VAR_34->hdmicore_regs = FUNC_38(VAR_31, 0);
 if (FUNC_7(VAR_34->hdmicore_regs))
  return FUNC_8(VAR_34->hdmicore_regs);

 VAR_34->hd_regs = FUNC_38(VAR_31, 1);
 if (FUNC_7(VAR_34->hd_regs))
  return FUNC_8(VAR_34->hd_regs);

 VAR_34->hdmi_regset.base = VAR_34->hdmicore_regs;
 VAR_34->hdmi_regset.regs = VAR_21;
 VAR_34->hdmi_regset.nregs = FUNC_0(VAR_21);
 VAR_34->hd_regset.base = VAR_34->hd_regs;
 VAR_34->hd_regset.regs = VAR_20;
 VAR_34->hd_regset.nregs = FUNC_0(VAR_20);

 VAR_34->pixel_clock = FUNC_17(VAR_28, "pixel");
 if (FUNC_7(VAR_34->pixel_clock)) {
  FUNC_2("Failed to get pixel clock\n");
  return FUNC_8(VAR_34->pixel_clock);
 }
 VAR_34->hsm_clock = FUNC_17(VAR_28, "hdmi");
 if (FUNC_7(VAR_34->hsm_clock)) {
  FUNC_2("Failed to get HDMI state machine clock\n");
  return FUNC_8(VAR_34->hsm_clock);
 }

 VAR_36 = FUNC_26(VAR_28->of_node, "ddc", 0);
 if (!VAR_36) {
  FUNC_2("Failed to find ddc node in device tree\n");
  return -VAR_5;
 }

 VAR_34->ddc = FUNC_22(VAR_36);
 FUNC_25(VAR_36);
 if (!VAR_34->ddc) {
  FUNC_1("Failed to get ddc i2c adapter by node\n");
  return -VAR_7;
 }





 VAR_38 = FUNC_15(VAR_34->hsm_clock, VAR_9);
 if (VAR_38) {
  FUNC_2("Failed to set HSM clock rate: %d\n", VAR_38);
  goto err_put_i2c;
 }

 VAR_38 = FUNC_14(VAR_34->hsm_clock);
 if (VAR_38) {
  FUNC_2("Failed to turn on HDMI state machine clock: %d\n",
     VAR_38);
  goto err_put_i2c;
 }




 if (FUNC_23(VAR_28->of_node, "hpd-gpios", &VAR_37)) {
  enum of_gpio_flags VAR_39;

  VAR_34->hpd_gpio = FUNC_24(VAR_28->of_node,
        "hpd-gpios", 0,
        &VAR_39);
  if (VAR_34->hpd_gpio < 0) {
   VAR_38 = VAR_34->hpd_gpio;
   goto err_unprepare_hsm;
  }

  VAR_34->hpd_active_low = VAR_39 & VAR_10;
 }

 VAR_33->hdmi = VAR_34;


 if (!(FUNC_5(VAR_17) & VAR_18)) {
  FUNC_6(VAR_17, VAR_19);
  FUNC_32(1);
  FUNC_6(VAR_17, 0);

  FUNC_6(VAR_17, VAR_18);
 }
 FUNC_29(VAR_28);

 FUNC_21(VAR_32, VAR_34->encoder, &VAR_26,
    VAR_4, ((void*)0));
 FUNC_20(VAR_34->encoder, &VAR_27);

 VAR_34->connector = FUNC_36(VAR_32, VAR_34->encoder);
 if (FUNC_7(VAR_34->connector)) {
  VAR_38 = FUNC_8(VAR_34->connector);
  goto err_destroy_encoder;
 }
 VAR_38 = FUNC_34(VAR_34);
 if (VAR_38)
  goto err_destroy_encoder;

 FUNC_33(VAR_32, "hdmi_regs", VAR_25, VAR_34);

 return 0;







err_destroy_encoder:
 FUNC_37(VAR_34->encoder);
err_unprepare_hsm:
 FUNC_13(VAR_34->hsm_clock);
 FUNC_28(VAR_28);
err_put_i2c:
 FUNC_30(&VAR_34->ddc->dev);

 return VAR_38;
}
