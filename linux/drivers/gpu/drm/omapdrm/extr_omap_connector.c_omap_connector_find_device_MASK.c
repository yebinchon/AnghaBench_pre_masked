
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dss_device {int ops_flags; struct omap_dss_device* next; } ;
struct omap_connector {struct omap_dss_device* output; } ;
struct drm_connector {int dummy; } ;
typedef enum omap_dss_device_ops_flag { ____Placeholder_omap_dss_device_ops_flag } omap_dss_device_ops_flag ;


 struct omap_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static struct omap_dss_device *
FUNC_1(struct drm_connector *VAR_0,
      enum omap_dss_device_ops_flag VAR_1)
{
 struct omap_connector *VAR_2 = FUNC_0(VAR_0);
 struct omap_dss_device *VAR_3 = ((void*)0);
 struct omap_dss_device *VAR_4;

 for (VAR_4 = VAR_2->output; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->ops_flags & VAR_1)
   VAR_3 = VAR_4;
 }

 return VAR_3;
}
