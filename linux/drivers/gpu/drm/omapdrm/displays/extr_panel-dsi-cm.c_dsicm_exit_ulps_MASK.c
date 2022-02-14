
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {int ulps_enabled; scalar_t__ ext_te_gpio; TYPE_3__* pdev; int channel; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int (* enable_hs ) (struct omap_dss_device*,int ,int) ;} ;
struct TYPE_5__ {TYPE_1__ dsi; int (* enable ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (struct panel_drv_data*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct panel_drv_data*) ;
 int FUNC_3 (struct panel_drv_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct omap_dss_device*) ;
 int FUNC_7 (struct omap_dss_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct panel_drv_data *VAR_0)
{
 struct omap_dss_device *VAR_1 = VAR_0->src;
 int VAR_2;

 if (!VAR_0->ulps_enabled)
  return 0;

 VAR_1->ops->enable(VAR_1);
 VAR_1->ops->dsi.enable_hs(VAR_1, VAR_0->channel, 1);

 VAR_2 = FUNC_0(VAR_0, 1);
 if (VAR_2) {
  FUNC_1(&VAR_0->pdev->dev, "failed to re-enable TE");
  goto err2;
 }

 if (VAR_0->ext_te_gpio)
  FUNC_4(FUNC_5(VAR_0->ext_te_gpio));

 FUNC_3(VAR_0);

 VAR_0->ulps_enabled = 0;

 return 0;

err2:
 FUNC_1(&VAR_0->pdev->dev, "failed to exit ULPS");

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2) {
  if (VAR_0->ext_te_gpio)
   FUNC_4(FUNC_5(VAR_0->ext_te_gpio));
  VAR_0->ulps_enabled = 0;
 }

 FUNC_3(VAR_0);

 return VAR_2;
}
