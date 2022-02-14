
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; } ;
struct omap_connector {struct omap_dss_device* hpd; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int (* unregister_hpd_cb ) (struct omap_dss_device*) ;} ;


 int FUNC_0 (struct omap_dss_device*) ;
 struct omap_connector* FUNC_1 (struct drm_connector*) ;

void FUNC_2(struct drm_connector *VAR_0)
{
 struct omap_connector *VAR_1 = FUNC_1(VAR_0);
 struct omap_dss_device *VAR_2 = VAR_1->hpd;

 if (VAR_2)
  VAR_2->ops->unregister_hpd_cb(VAR_2);
}
