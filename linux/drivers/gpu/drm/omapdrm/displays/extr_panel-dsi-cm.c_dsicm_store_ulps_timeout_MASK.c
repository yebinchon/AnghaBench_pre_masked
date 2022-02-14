
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panel_drv_data {unsigned long ulps_timeout; int lock; scalar_t__ enabled; struct omap_dss_device* src; } ;
struct omap_dss_device {TYPE_2__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* bus_unlock ) (struct omap_dss_device*) ;int (* bus_lock ) (struct omap_dss_device*) ;} ;
struct TYPE_4__ {TYPE_1__ dsi; } ;


 struct panel_drv_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct panel_drv_data*) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct omap_dss_device*) ;
 int FUNC_6 (struct omap_dss_device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_0,
  struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct panel_drv_data *VAR_4 = FUNC_0(VAR_0);
 struct omap_dss_device *VAR_5 = VAR_4->src;
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(&VAR_4->lock);
 VAR_4->ulps_timeout = VAR_6;

 if (VAR_4->enabled) {

  VAR_5->ops->dsi.bus_lock(VAR_5);
  VAR_7 = FUNC_1(VAR_4);
  VAR_5->ops->dsi.bus_unlock(VAR_5);
 }

 FUNC_4(&VAR_4->lock);

 if (VAR_7)
  return VAR_7;

 return VAR_3;
}
