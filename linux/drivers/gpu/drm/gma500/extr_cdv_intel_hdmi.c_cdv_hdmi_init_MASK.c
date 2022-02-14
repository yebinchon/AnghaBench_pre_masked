
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct psb_intel_mode_device {int dummy; } ;
struct mid_intel_hdmi_priv {int hdmi_reg; int has_hdmi_sink; struct drm_device* dev; int * hdmi_i2c_adapter; } ;
struct TYPE_4__ {int subpixel_order; } ;
struct drm_encoder {int interlace_allowed; int doublescan_allowed; int base; TYPE_1__ display_info; int polled; } ;
struct gma_encoder {TYPE_3__* i2c_bus; int ddi_select; struct mid_intel_hdmi_priv* dev_priv; int type; struct drm_encoder base; int restore; int save; } ;
struct gma_connector {TYPE_3__* i2c_bus; int ddi_select; struct mid_intel_hdmi_priv* dev_priv; int type; struct drm_encoder base; int restore; int save; } ;
struct TYPE_5__ {int scaling_mode_property; } ;
struct drm_device {int dev; TYPE_2__ mode_config; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; int base; TYPE_1__ display_info; int polled; } ;
struct TYPE_6__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int ) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,int *) ;
 int FUNC_8 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct gma_encoder*,struct gma_encoder*) ;
 int FUNC_11 (struct gma_encoder*) ;
 void* FUNC_12 (int,int ) ;
 TYPE_3__* FUNC_13 (struct drm_device*,int,char*) ;
 int VAR_16 ;

void FUNC_14(struct drm_device *VAR_17,
   struct psb_intel_mode_device *VAR_18, int VAR_19)
{
 struct gma_encoder *VAR_20;
 struct gma_connector *VAR_21;
 struct drm_connector *VAR_22;
 struct drm_encoder *VAR_23;
 struct mid_intel_hdmi_priv *VAR_24;
 int VAR_25;

 VAR_20 = FUNC_12(sizeof(struct gma_encoder), VAR_6);

 if (!VAR_20)
  return;

 VAR_21 = FUNC_12(sizeof(struct gma_connector),
          VAR_6);

 if (!VAR_21)
  goto err_connector;

 VAR_24 = FUNC_12(sizeof(struct mid_intel_hdmi_priv), VAR_6);

 if (!VAR_24)
  goto err_priv;

 VAR_22 = &VAR_21->base;
 VAR_22->polled = VAR_2;
 VAR_21->save = VAR_15;
 VAR_21->restore = VAR_14;

 VAR_23 = &VAR_20->base;
 FUNC_4(VAR_17, VAR_22,
      &VAR_11,
      VAR_3);

 FUNC_8(VAR_17, VAR_23, &VAR_16,
    VAR_4, ((void*)0));

 FUNC_10(VAR_21, VAR_20);
 VAR_20->type = VAR_9;
 VAR_24->hdmi_reg = VAR_19;
 VAR_24->has_hdmi_sink = 0;
 VAR_20->dev_priv = VAR_24;

 FUNC_7(VAR_23, &VAR_13);
 FUNC_3(VAR_22,
     &VAR_12);
 VAR_22->display_info.subpixel_order = VAR_10;
 VAR_22->interlace_allowed = 0;
 VAR_22->doublescan_allowed = 0;

 FUNC_9(&VAR_22->base,
          VAR_17->mode_config.scaling_mode_property,
          VAR_5);

 switch (VAR_19) {
 case 129:
  VAR_25 = VAR_8;
  VAR_20->ddi_select = VAR_0;
  break;
 case 128:
  VAR_25 = VAR_7;
  VAR_20->ddi_select = VAR_1;
  break;
 default:
  FUNC_0("unknown reg 0x%x for HDMI\n", VAR_19);
  goto failed_ddc;
  break;
 }

 VAR_20->i2c_bus = FUNC_13(VAR_17,
    VAR_25, (VAR_19 == 129) ? "HDMIB" : "HDMIC");

 if (!VAR_20->i2c_bus) {
  FUNC_1(VAR_17->dev, "No ddc adapter available!\n");
  goto failed_ddc;
 }

 VAR_24->hdmi_i2c_adapter = &(VAR_20->i2c_bus->adapter);
 VAR_24->dev = VAR_17;
 FUNC_5(VAR_22);
 return;

failed_ddc:
 FUNC_6(VAR_23);
 FUNC_2(VAR_22);
err_priv:
 FUNC_11(VAR_21);
err_connector:
 FUNC_11(VAR_20);
}
