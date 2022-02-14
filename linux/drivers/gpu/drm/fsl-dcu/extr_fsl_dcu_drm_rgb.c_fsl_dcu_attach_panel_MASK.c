
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct TYPE_2__ {struct drm_encoder* encoder; struct drm_connector base; } ;
struct drm_encoder {int dummy; } ;
struct fsl_dcu_drm_device {int dev; int drm; TYPE_1__ connector; struct drm_encoder encoder; } ;
struct drm_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int *) ;
 int FUNC_4 (int ,struct drm_connector*,int *,int ) ;
 int FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_panel*,struct drm_connector*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct fsl_dcu_drm_device *VAR_3,
     struct drm_panel *VAR_4)
{
 struct drm_encoder *VAR_5 = &VAR_3->encoder;
 struct drm_connector *VAR_6 = &VAR_3->connector.base;
 int VAR_7;

 VAR_3->connector.encoder = VAR_5;

 VAR_7 = FUNC_4(VAR_3->drm, VAR_6,
     &VAR_2,
     VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_6, &VAR_1);
 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 < 0)
  goto err_cleanup;

 VAR_7 = FUNC_1(VAR_6, VAR_5);
 if (VAR_7 < 0)
  goto err_sysfs;

 VAR_7 = FUNC_7(VAR_4, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3->dev, "failed to attach panel\n");
  goto err_sysfs;
 }

 return 0;

err_sysfs:
 FUNC_6(VAR_6);
err_cleanup:
 FUNC_2(VAR_6);
 return VAR_7;
}
