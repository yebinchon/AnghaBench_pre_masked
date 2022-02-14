
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_dss_device {TYPE_2__* ops; struct omap_dss_device* next; } ;
struct omap_connector {struct omap_dss_device* output; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_3__ {int (* lost_hotplug ) (struct omap_dss_device*) ;} ;
struct TYPE_4__ {TYPE_1__ hdmi; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_dss_device*) ;
 struct omap_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_2(struct drm_connector *VAR_1,
          enum drm_connector_status VAR_2)
{
 struct omap_connector *VAR_3 = FUNC_1(VAR_1);
 struct omap_dss_device *VAR_4;

 if (VAR_2 != VAR_0)
  return;






 for (VAR_4 = VAR_3->output; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->ops && VAR_4->ops->hdmi.lost_hotplug)
   VAR_4->ops->hdmi.lost_hotplug(VAR_4);
 }
}
