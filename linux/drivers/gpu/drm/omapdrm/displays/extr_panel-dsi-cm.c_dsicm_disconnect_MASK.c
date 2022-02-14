
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {int * src; int channel; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct TYPE_3__ {int (* release_vc ) (struct omap_dss_device*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ dsi; } ;


 int FUNC_0 (struct omap_dss_device*,int ) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(struct omap_dss_device *VAR_0,
        struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_1(VAR_1);

 VAR_0->ops->dsi.release_vc(VAR_0, VAR_2->channel);
 VAR_2->src = ((void*)0);
}
