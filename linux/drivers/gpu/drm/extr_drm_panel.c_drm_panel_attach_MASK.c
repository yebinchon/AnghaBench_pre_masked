
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_panel {int drm; struct drm_connector* connector; } ;
struct drm_connector {int dev; } ;


 int VAR_0 ;

int FUNC_0(struct drm_panel *VAR_1, struct drm_connector *VAR_2)
{
 if (VAR_1->connector)
  return -VAR_0;

 VAR_1->connector = VAR_2;
 VAR_1->drm = VAR_2->dev;

 return 0;
}
