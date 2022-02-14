
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dss_device {TYPE_2__* feat; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* dpi_select_source ) (struct dss_device*,int,int) ;} ;


 int FUNC_0 (struct dss_device*,int,int) ;

int FUNC_1(struct dss_device *VAR_0, int VAR_1,
     enum omap_channel VAR_2)
{
 return VAR_0->feat->ops->dpi_select_source(VAR_0, VAR_1, VAR_2);
}
