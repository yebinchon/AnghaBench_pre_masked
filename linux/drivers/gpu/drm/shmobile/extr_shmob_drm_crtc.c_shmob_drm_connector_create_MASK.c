
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int height_mm; int width_mm; } ;
struct drm_connector {int base; TYPE_1__ display_info; } ;
struct TYPE_12__ {struct drm_encoder* encoder; struct drm_connector connector; } ;
struct shmob_drm_device {TYPE_5__ connector; TYPE_7__* ddev; TYPE_3__* pdata; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_11__ {int dpms_property; } ;
struct TYPE_13__ {TYPE_4__ mode_config; } ;
struct TYPE_9__ {int height_mm; int width_mm; } ;
struct TYPE_10__ {TYPE_2__ panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,int *) ;
 int FUNC_3 (TYPE_7__*,struct drm_connector*,int *,int ) ;
 int FUNC_4 (struct drm_connector*,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;

int FUNC_8(struct shmob_drm_device *VAR_4,
          struct drm_encoder *VAR_5)
{
 struct drm_connector *VAR_6 = &VAR_4->connector.connector;
 int VAR_7;

 VAR_4->connector.encoder = VAR_5;

 VAR_6->display_info.width_mm = VAR_4->pdata->panel.width_mm;
 VAR_6->display_info.height_mm = VAR_4->pdata->panel.height_mm;

 VAR_7 = FUNC_3(VAR_4->ddev, VAR_6, &VAR_2,
     VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2(VAR_6, &VAR_3);

 VAR_7 = FUNC_7(&VAR_4->connector);
 if (VAR_7 < 0)
  goto err_cleanup;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (VAR_7 < 0)
  goto err_backlight;

 FUNC_4(VAR_6, VAR_1);
 FUNC_5(&VAR_6->base,
  VAR_4->ddev->mode_config.dpms_property, VAR_1);

 return 0;

err_backlight:
 FUNC_6(&VAR_4->connector);
err_cleanup:
 FUNC_1(VAR_6);
 return VAR_7;
}
