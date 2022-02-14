
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; } ;
struct omap_connector {struct omap_dss_device* hpd; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int (* register_hpd_cb ) (struct omap_dss_device*,int ,struct omap_connector*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct omap_dss_device*,int ,struct omap_connector*) ;
 struct omap_connector* FUNC_1 (struct drm_connector*) ;

void FUNC_2(struct drm_connector *VAR_1)
{
 struct omap_connector *VAR_2 = FUNC_1(VAR_1);
 struct omap_dss_device *VAR_3 = VAR_2->hpd;

 if (VAR_3)
  VAR_3->ops->register_hpd_cb(VAR_3, VAR_0,
       VAR_2);
}
