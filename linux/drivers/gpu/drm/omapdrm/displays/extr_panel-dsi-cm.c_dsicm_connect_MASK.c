
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct panel_drv_data {struct omap_dss_device* src; int channel; TYPE_1__* pdev; } ;
struct omap_dss_device {TYPE_3__* ops; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int (* request_vc ) (struct omap_dss_device*,int *) ;int (* set_vc_id ) (struct omap_dss_device*,int ,int ) ;int (* release_vc ) (struct omap_dss_device*,int ) ;} ;
struct TYPE_6__ {TYPE_2__ dsi; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct omap_dss_device*,int *) ;
 int FUNC_2 (struct omap_dss_device*,int ,int ) ;
 int FUNC_3 (struct omap_dss_device*,int ) ;
 struct panel_drv_data* FUNC_4 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_5(struct omap_dss_device *VAR_1,
    struct omap_dss_device *VAR_2)
{
 struct panel_drv_data *VAR_3 = FUNC_4(VAR_2);
 struct device *VAR_4 = &VAR_3->pdev->dev;
 int VAR_5;

 VAR_5 = VAR_1->ops->dsi.request_vc(VAR_1, &VAR_3->channel);
 if (VAR_5) {
  FUNC_0(VAR_4, "failed to get virtual channel\n");
  return VAR_5;
 }

 VAR_5 = VAR_1->ops->dsi.set_vc_id(VAR_1, VAR_3->channel, VAR_0);
 if (VAR_5) {
  FUNC_0(VAR_4, "failed to set VC_ID\n");
  VAR_1->ops->dsi.release_vc(VAR_1, VAR_3->channel);
  return VAR_5;
 }

 VAR_3->src = VAR_1;
 return 0;
}
