
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct panel_drv_data {int channel; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_3__ {int (* dcs_write ) (struct omap_dss_device*,int ,int *,int) ;} ;
struct TYPE_4__ {TYPE_1__ dsi; } ;


 int FUNC_0 (struct omap_dss_device*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct panel_drv_data *VAR_0, u8 VAR_1)
{
 struct omap_dss_device *VAR_2 = VAR_0->src;

 return VAR_2->ops->dsi.dcs_write(VAR_2, VAR_0->channel, &VAR_1, 1);
}
