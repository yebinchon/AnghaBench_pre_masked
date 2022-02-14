
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {TYPE_1__* pdev; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_3__* ops; } ;
struct TYPE_5__ {int (* bus_unlock ) (struct omap_dss_device*) ;} ;
struct TYPE_6__ {TYPE_2__ dsi; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(int VAR_0, void *VAR_1)
{
 struct panel_drv_data *VAR_2 = VAR_1;
 struct omap_dss_device *VAR_3 = VAR_2->src;

 FUNC_0(&VAR_2->pdev->dev, "framedone, err %d\n", VAR_0);
 VAR_3->ops->dsi.bus_unlock(VAR_3);
}
