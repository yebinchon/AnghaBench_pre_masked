
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct panel_info {void* height_mm; void* width_mm; } ;
struct panel_funcs {scalar_t__ (* get_panel_info ) (struct drm_device*,int,struct panel_info*) ;struct mdfld_dsi_connector* (* get_config_mode ) (struct drm_device*) ;} ;
struct TYPE_8__ {int type; } ;
struct mdfld_dsi_encoder {TYPE_4__ base; struct mdfld_dsi_connector* private; } ;
struct TYPE_6__ {void* height_mm; void* width_mm; int subpixel_order; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; int base; TYPE_2__ display_info; } ;
struct TYPE_5__ {int restore; int save; struct drm_connector base; } ;
struct mdfld_dsi_connector {int pipe; int changed; int dvr_ic_inited; struct mdfld_dsi_connector* fixed_mode; int pkg_sender; struct mdfld_dsi_encoder* encoder; TYPE_1__ base; struct mdfld_dsi_connector* connector; struct mdfld_dsi_connector* mode; struct drm_device* dev; struct mdfld_dsi_connector* private; } ;
struct mdfld_dsi_config {int pipe; int changed; int dvr_ic_inited; struct mdfld_dsi_config* fixed_mode; int pkg_sender; struct mdfld_dsi_encoder* encoder; TYPE_1__ base; struct mdfld_dsi_config* connector; struct mdfld_dsi_config* mode; struct drm_device* dev; struct mdfld_dsi_config* private; } ;
struct drm_psb_private {int backlight_property; struct mdfld_dsi_connector** dsi_configs; } ;
struct TYPE_7__ {int scaling_mode_property; } ;
struct drm_device {TYPE_3__ mode_config; int dev; struct drm_psb_private* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct mdfld_dsi_connector*) ;
 struct mdfld_dsi_connector* FUNC_8 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct mdfld_dsi_encoder* FUNC_9 (struct drm_device*,struct mdfld_dsi_connector*,struct panel_funcs const*) ;
 int FUNC_10 (struct drm_device*,struct mdfld_dsi_connector*,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct mdfld_dsi_connector*,int) ;
 struct mdfld_dsi_connector* FUNC_13 (struct drm_device*) ;
 scalar_t__ FUNC_14 (struct drm_device*,int,struct panel_info*) ;

void FUNC_15(struct drm_device *VAR_11,
      int VAR_12,
      const struct panel_funcs *VAR_13)
{
 struct mdfld_dsi_config *VAR_14;
 struct mdfld_dsi_connector *VAR_15;
 struct drm_connector *VAR_16;
 struct mdfld_dsi_encoder *VAR_17;
 struct drm_psb_private *VAR_18 = VAR_11->dev_private;
 struct panel_info VAR_19;
 u32 VAR_20, VAR_21;

 FUNC_1(VAR_11->dev, "init DSI output on pipe %d\n", VAR_12);

 if (VAR_12 != 0 && VAR_12 != 2) {
  FUNC_0("Invalid parameter\n");
  return;
 }


 VAR_15 = FUNC_8(sizeof(struct mdfld_dsi_connector), VAR_2);
 if (!VAR_15) {
  FUNC_0("No memory");
  return;
 }

 VAR_15->pipe = VAR_12;

 VAR_14 = FUNC_8(sizeof(struct mdfld_dsi_config),
   VAR_2);
 if (!VAR_14) {
  FUNC_0("cannot allocate memory for DSI config\n");
  goto dsi_init_err0;
 }
 FUNC_10(VAR_11, VAR_14, VAR_12);

 VAR_15->private = VAR_14;

 VAR_14->changed = 1;
 VAR_14->dev = VAR_11;

 VAR_14->fixed_mode = VAR_13->get_config_mode(VAR_11);
 if (VAR_13->get_panel_info(VAR_11, VAR_12, &VAR_19))
   goto dsi_init_err0;

 VAR_20 = VAR_19.width_mm;
 VAR_21 = VAR_19.height_mm;

 VAR_14->mode = VAR_14->fixed_mode;
 VAR_14->connector = VAR_15;

 if (!VAR_14->fixed_mode) {
  FUNC_0("No pannel fixed mode was found\n");
  goto dsi_init_err0;
 }

 if (VAR_12 && VAR_18->dsi_configs[0]) {
  VAR_14->dvr_ic_inited = 0;
  VAR_18->dsi_configs[1] = VAR_14;
 } else if (VAR_12 == 0) {
  VAR_14->dvr_ic_inited = 1;
  VAR_18->dsi_configs[0] = VAR_14;
 } else {
  FUNC_0("Trying to init MIPI1 before MIPI0\n");
  goto dsi_init_err0;
 }


 VAR_16 = &VAR_15->base.base;
 VAR_15->base.save = VAR_10;
 VAR_15->base.restore = VAR_9;

 FUNC_4(VAR_11, VAR_16, &VAR_7,
      VAR_0);
 FUNC_3(VAR_16, &VAR_8);

 VAR_16->display_info.subpixel_order = VAR_6;
 VAR_16->display_info.width_mm = VAR_20;
 VAR_16->display_info.height_mm = VAR_21;
 VAR_16->interlace_allowed = 0;
 VAR_16->doublescan_allowed = 0;


 FUNC_6(&VAR_16->base,
    VAR_11->mode_config.scaling_mode_property,
    VAR_1);
 FUNC_6(&VAR_16->base,
    VAR_18->backlight_property,
    VAR_5);


 if (FUNC_12(VAR_15, VAR_12)) {
  FUNC_0("Package Sender initialization failed on pipe %d\n",
         VAR_12);
  goto dsi_init_err0;
 }

 VAR_17 = FUNC_9(VAR_11, VAR_15, VAR_13);
 if (!VAR_17) {
  FUNC_0("Create DPI encoder failed\n");
  goto dsi_init_err1;
 }
 VAR_17->private = VAR_14;
 VAR_14->encoder = VAR_17;
 VAR_17->base.type = (VAR_12 == 0) ? VAR_3 :
  VAR_4;
 FUNC_5(VAR_16);
 return;


dsi_init_err1:

 FUNC_11(VAR_15->pkg_sender);

 FUNC_2(VAR_16);

 FUNC_7(VAR_14->fixed_mode);
 FUNC_7(VAR_14);
dsi_init_err0:
 FUNC_7(VAR_15);
}
