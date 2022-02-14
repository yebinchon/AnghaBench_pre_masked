
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_connector {int hdmi_mode; } ;
struct drm_connector {int dummy; } ;


 struct omap_connector* FUNC_0 (struct drm_connector*) ;

bool FUNC_1(struct drm_connector *VAR_0)
{
 struct omap_connector *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->hdmi_mode;
}
