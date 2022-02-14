
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_dss_device {int display; int of_ports; int owner; int type; int * dev; int * ops; } ;
struct panel_drv_data {struct omap_dss_device dssdev; int * dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct panel_drv_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct omap_dss_device*) ;
 int FUNC_3 (struct omap_dss_device*) ;
 int FUNC_4 (struct platform_device*,struct panel_drv_data*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct panel_drv_data *VAR_6;
 struct omap_dss_device *VAR_7;

 VAR_6 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_6);
 VAR_6->dev = &VAR_5->dev;

 VAR_7 = &VAR_6->dssdev;
 VAR_7->ops = &VAR_4;
 VAR_7->dev = &VAR_5->dev;
 VAR_7->type = VAR_2;
 VAR_7->display = 1;
 VAR_7->owner = VAR_3;
 VAR_7->of_ports = FUNC_0(0);

 FUNC_3(VAR_7);
 FUNC_2(VAR_7);

 return 0;
}
