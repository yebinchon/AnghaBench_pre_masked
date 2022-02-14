
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct msm_drm_private {TYPE_1__* mdss; } ;
struct TYPE_8__ {int * funcs; struct drm_device* dev; } ;
struct mdp5_mdss {void* vdd; TYPE_1__ base; void* vbif; void* mmio; } ;
struct drm_device {TYPE_2__* dev; struct msm_drm_private* dev_private; } ;
struct TYPE_9__ {int of_node; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 struct mdp5_mdss* FUNC_4 (TYPE_2__*,int,int ) ;
 void* FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,char*,struct mdp5_mdss*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct mdp5_mdss*) ;
 void* FUNC_8 (struct platform_device*,char*,char*) ;
 int FUNC_9 (struct mdp5_mdss*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 struct platform_device* FUNC_15 (TYPE_2__*) ;

int FUNC_16(struct drm_device *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_15(VAR_4->dev);
 struct msm_drm_private *VAR_6 = VAR_4->dev_private;
 struct mdp5_mdss *VAR_7;
 int VAR_8;

 FUNC_0("");

 if (!FUNC_10(VAR_4->dev->of_node, "qcom,mdss"))
  return 0;

 VAR_7 = FUNC_4(VAR_4->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_7->base.dev = VAR_4;

 VAR_7->mmio = FUNC_8(VAR_5, "mdss_phys", "MDSS");
 if (FUNC_2(VAR_7->mmio)) {
  VAR_8 = FUNC_3(VAR_7->mmio);
  goto fail;
 }

 VAR_7->vbif = FUNC_8(VAR_5, "vbif_phys", "VBIF");
 if (FUNC_2(VAR_7->vbif)) {
  VAR_8 = FUNC_3(VAR_7->vbif);
  goto fail;
 }

 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4->dev, "failed to get clocks: %d\n", VAR_8);
  goto fail;
 }


 VAR_7->vdd = FUNC_5(VAR_4->dev, "vdd");
 if (FUNC_2(VAR_7->vdd)) {
  VAR_8 = FUNC_3(VAR_7->vdd);
  goto fail;
 }

 VAR_8 = FUNC_14(VAR_7->vdd);
 if (VAR_8) {
  FUNC_1(VAR_4->dev, "failed to enable regulator vdd: %d\n",
   VAR_8);
  goto fail;
 }

 VAR_8 = FUNC_6(VAR_4->dev, FUNC_11(VAR_5, 0),
          VAR_3, 0, "mdss_isr", VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4->dev, "failed to init irq: %d\n", VAR_8);
  goto fail_irq;
 }

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4->dev, "failed to init sub-block irqs: %d\n", VAR_8);
  goto fail_irq;
 }

 VAR_7->base.funcs = &VAR_2;
 VAR_6->mdss = &VAR_7->base;

 FUNC_12(VAR_4->dev);

 return 0;
fail_irq:
 FUNC_13(VAR_7->vdd);
fail:
 return VAR_8;
}
