
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {int ulps_enabled; TYPE_3__* pdev; scalar_t__ ext_te_gpio; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int (* disable ) (struct omap_dss_device*,int,int) ;} ;
struct TYPE_5__ {TYPE_1__ dsi; } ;


 int FUNC_0 (struct panel_drv_data*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct panel_drv_data*) ;
 int FUNC_4 (struct panel_drv_data*) ;
 int FUNC_5 (struct panel_drv_data*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct omap_dss_device*,int,int) ;

__attribute__((used)) static int FUNC_8(struct panel_drv_data *VAR_0)
{
 struct omap_dss_device *VAR_1 = VAR_0->src;
 int VAR_2;

 if (VAR_0->ulps_enabled)
  return 0;

 FUNC_3(VAR_0);

 VAR_2 = FUNC_0(VAR_0, 0);
 if (VAR_2)
  goto err;

 if (VAR_0->ext_te_gpio)
  FUNC_2(FUNC_6(VAR_0->ext_te_gpio));

 VAR_1->ops->dsi.disable(VAR_1, 0, 1);

 VAR_0->ulps_enabled = 1;

 return 0;

err:
 FUNC_1(&VAR_0->pdev->dev, "enter ULPS failed");
 FUNC_4(VAR_0);

 VAR_0->ulps_enabled = 0;

 FUNC_5(VAR_0);

 return VAR_2;
}
