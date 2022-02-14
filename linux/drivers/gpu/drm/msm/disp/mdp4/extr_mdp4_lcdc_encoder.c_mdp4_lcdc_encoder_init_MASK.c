
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct mdp4_lcdc_encoder {struct regulator** regs; struct regulator* lcdc_clk; struct drm_encoder base; struct device_node* panel_node; } ;
struct drm_device {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_encoder* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct regulator*) ;
 int FUNC_3 (struct regulator*) ;
 int FUNC_4 (struct mdp4_lcdc_encoder*) ;
 struct regulator* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct drm_encoder*,int *) ;
 int FUNC_7 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct mdp4_lcdc_encoder* FUNC_8 (int,int ) ;
 int FUNC_9 (struct drm_encoder*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct regulator* FUNC_10 (struct drm_device*) ;

struct drm_encoder *FUNC_11(struct drm_device *VAR_5,
  struct device_node *VAR_6)
{
 struct drm_encoder *VAR_7 = ((void*)0);
 struct mdp4_lcdc_encoder *VAR_8;
 struct regulator *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 VAR_8->panel_node = VAR_6;

 VAR_7 = &VAR_8->base;

 FUNC_7(VAR_5, VAR_7, &VAR_3,
    VAR_0, ((void*)0));
 FUNC_6(VAR_7, &VAR_4);


 VAR_8->lcdc_clk = FUNC_10(VAR_5);
 if (FUNC_2(VAR_8->lcdc_clk)) {
  FUNC_0(VAR_5->dev, "failed to get lvds_clk\n");
  VAR_10 = FUNC_3(VAR_8->lcdc_clk);
  goto fail;
 }


 VAR_9 = FUNC_5(VAR_5->dev, "lvds-vccs-3p3v");
 if (FUNC_2(VAR_9)) {
  VAR_10 = FUNC_3(VAR_9);
  FUNC_0(VAR_5->dev, "failed to get lvds-vccs-3p3v: %d\n", VAR_10);
  goto fail;
 }
 VAR_8->regs[0] = VAR_9;

 VAR_9 = FUNC_5(VAR_5->dev, "lvds-pll-vdda");
 if (FUNC_2(VAR_9)) {
  VAR_10 = FUNC_3(VAR_9);
  FUNC_0(VAR_5->dev, "failed to get lvds-pll-vdda: %d\n", VAR_10);
  goto fail;
 }
 VAR_8->regs[1] = VAR_9;

 VAR_9 = FUNC_5(VAR_5->dev, "lvds-vdda");
 if (FUNC_2(VAR_9)) {
  VAR_10 = FUNC_3(VAR_9);
  FUNC_0(VAR_5->dev, "failed to get lvds-vdda: %d\n", VAR_10);
  goto fail;
 }
 VAR_8->regs[2] = VAR_9;

 FUNC_4(VAR_8);

 return VAR_7;

fail:
 if (VAR_7)
  FUNC_9(VAR_7);

 return FUNC_1(VAR_10);
}
