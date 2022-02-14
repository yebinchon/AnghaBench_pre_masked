
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_hdmi {int vdda_reg; int core; int phy; int wp; int audio_playing_lock; int lock; struct platform_device* pdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct omap_hdmi*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int,int *,int ,int ,char*,struct omap_hdmi*) ;
 int VAR_5 ;
 int FUNC_7 (struct platform_device*,int *) ;
 int FUNC_8 (struct omap_hdmi*) ;
 int FUNC_9 (struct omap_hdmi*) ;
 int FUNC_10 (struct omap_hdmi*) ;
 int VAR_6 ;
 int FUNC_11 (struct platform_device*,int *,int) ;
 int FUNC_12 (struct platform_device*,int *,int) ;
 int FUNC_13 (struct omap_hdmi*) ;
 struct omap_hdmi* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_7)
{
 struct omap_hdmi *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = FUNC_14(sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->pdev = VAR_7;

 FUNC_4(&VAR_7->dev, VAR_8);

 FUNC_15(&VAR_8->lock);
 FUNC_19(&VAR_8->audio_playing_lock);

 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10)
  goto err_free;

 VAR_10 = FUNC_12(VAR_7, &VAR_8->wp, 4);
 if (VAR_10)
  goto err_free;

 VAR_10 = FUNC_11(VAR_7, &VAR_8->phy, 4);
 if (VAR_10)
  goto err_free;

 VAR_10 = FUNC_7(VAR_7, &VAR_8->core);
 if (VAR_10)
  goto err_free;

 VAR_9 = FUNC_16(VAR_7, 0);
 if (VAR_9 < 0) {
  FUNC_0("platform_get_irq failed\n");
  VAR_10 = -VAR_0;
  goto err_free;
 }

 VAR_10 = FUNC_6(&VAR_7->dev, VAR_9,
   ((void*)0), VAR_6,
   VAR_4, "OMAP HDMI", VAR_8);
 if (VAR_10) {
  FUNC_0("HDMI IRQ request failed\n");
  goto err_free;
 }

 VAR_8->vdda_reg = FUNC_5(&VAR_7->dev, "vdda");
 if (FUNC_1(VAR_8->vdda_reg)) {
  VAR_10 = FUNC_2(VAR_8->vdda_reg);
  if (VAR_10 != -VAR_2)
   FUNC_0("can't get VDDA regulator\n");
  goto err_free;
 }

 FUNC_18(&VAR_7->dev);

 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10)
  goto err_pm_disable;

 VAR_10 = FUNC_3(&VAR_7->dev, &VAR_5);
 if (VAR_10)
  goto err_uninit_output;

 return 0;

err_uninit_output:
 FUNC_10(VAR_8);
err_pm_disable:
 FUNC_17(&VAR_7->dev);
err_free:
 FUNC_13(VAR_8);
 return VAR_10;
}
