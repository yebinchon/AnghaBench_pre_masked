
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int status; struct drm_device* dev; } ;
struct omap_connector {struct drm_connector base; } ;
struct TYPE_2__ {int mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_connector*,int) ;

__attribute__((used)) static void FUNC_4(void *VAR_0,
      enum drm_connector_status VAR_1)
{
 struct omap_connector *VAR_2 = VAR_0;
 struct drm_connector *VAR_3 = &VAR_2->base;
 struct drm_device *VAR_4 = VAR_3->dev;
 enum drm_connector_status VAR_5;

 FUNC_1(&VAR_4->mode_config.mutex);
 VAR_5 = VAR_3->status;
 VAR_3->status = VAR_1;
 FUNC_2(&VAR_4->mode_config.mutex);

 if (VAR_5 == VAR_1)
  return;

 FUNC_3(VAR_3, VAR_1);

 FUNC_0(VAR_4);
}
