
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {TYPE_1__* id_entry; int dev; } ;
struct mxsfb_drm_private {int panel; int connector; int pipe; int * clk_disp_axi; int * clk_axi; int * clk; int * base; int * devdata; } ;
struct TYPE_4__ {int * helper_private; int * funcs; int max_height; int max_width; int min_height; int min_width; int num_crtc; } ;
struct drm_device {int dev; TYPE_2__ mode_config; struct mxsfb_drm_private* dev_private; } ;
struct TYPE_3__ {size_t driver_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 void* FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ,struct resource*) ;
 struct mxsfb_drm_private* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*,int ) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct drm_device*,int *,int *,int ,int ,int *,int *) ;
 int FUNC_17 (struct drm_device*,int ) ;
 int FUNC_18 (struct drm_device*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct drm_device*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 struct platform_device* FUNC_26 (int ) ;

__attribute__((used)) static int FUNC_27(struct drm_device *VAR_12, unsigned long VAR_13)
{
 struct platform_device *VAR_14 = FUNC_26(VAR_12->dev);
 struct mxsfb_drm_private *VAR_15;
 struct resource *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_7(&VAR_14->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_12->dev_private = VAR_15;
 VAR_15->devdata = &VAR_7[VAR_14->id_entry->driver_data];

 VAR_16 = FUNC_20(VAR_14, VAR_2, 0);
 VAR_15->base = FUNC_6(VAR_12->dev, VAR_16);
 if (FUNC_2(VAR_15->base))
  return FUNC_3(VAR_15->base);

 VAR_15->clk = FUNC_5(VAR_12->dev, ((void*)0));
 if (FUNC_2(VAR_15->clk))
  return FUNC_3(VAR_15->clk);

 VAR_15->clk_axi = FUNC_5(VAR_12->dev, "axi");
 if (FUNC_2(VAR_15->clk_axi))
  VAR_15->clk_axi = ((void*)0);

 VAR_15->clk_disp_axi = FUNC_5(VAR_12->dev, "disp_axi");
 if (FUNC_2(VAR_15->clk_disp_axi))
  VAR_15->clk_disp_axi = ((void*)0);

 VAR_17 = FUNC_8(VAR_12->dev, FUNC_1(32));
 if (VAR_17)
  return VAR_17;

 FUNC_23(VAR_12->dev);

 VAR_17 = FUNC_17(VAR_12, VAR_12->mode_config.num_crtc);
 if (VAR_17 < 0) {
  FUNC_4(VAR_12->dev, "Failed to initialise vblank\n");
  goto err_vblank;
 }


 FUNC_12(VAR_12);

 VAR_17 = FUNC_18(VAR_12);
 if (VAR_17 < 0) {
  FUNC_4(VAR_12->dev, "Failed to create outputs\n");
  goto err_vblank;
 }

 VAR_17 = FUNC_16(VAR_12, &VAR_15->pipe, &VAR_9,
   VAR_8, FUNC_0(VAR_8), ((void*)0),
   &VAR_15->connector);
 if (VAR_17 < 0) {
  FUNC_4(VAR_12->dev, "Cannot setup simple display pipe\n");
  goto err_vblank;
 }

 VAR_17 = FUNC_14(VAR_15->panel, &VAR_15->connector);
 if (VAR_17) {
  FUNC_4(VAR_12->dev, "Cannot connect panel\n");
  goto err_vblank;
 }

 VAR_12->mode_config.min_width = VAR_5;
 VAR_12->mode_config.min_height = VAR_6;
 VAR_12->mode_config.max_width = VAR_3;
 VAR_12->mode_config.max_height = VAR_4;
 VAR_12->mode_config.funcs = &VAR_10;
 VAR_12->mode_config.helper_private = &VAR_11;

 FUNC_13(VAR_12);

 FUNC_24(VAR_12->dev);
 VAR_17 = FUNC_10(VAR_12, FUNC_19(VAR_14, 0));
 FUNC_25(VAR_12->dev);

 if (VAR_17 < 0) {
  FUNC_4(VAR_12->dev, "Failed to install IRQ handler\n");
  goto err_irq;
 }

 FUNC_11(VAR_12);

 FUNC_21(VAR_14, VAR_12);

 FUNC_9(VAR_12);

 return 0;

err_irq:
 FUNC_15(VAR_15->panel);
err_vblank:
 FUNC_22(VAR_12->dev);

 return VAR_17;
}
