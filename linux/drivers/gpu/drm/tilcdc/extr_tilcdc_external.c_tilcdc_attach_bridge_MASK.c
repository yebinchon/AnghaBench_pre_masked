
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tilcdc_drm_private {int external_connector; TYPE_1__* external_encoder; int crtc; } ;
struct drm_device {int dev; struct tilcdc_drm_private* dev_private; } ;
struct drm_bridge {int dummy; } ;
struct TYPE_3__ {int possible_crtcs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,struct drm_bridge*,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct drm_device*,TYPE_1__*) ;

__attribute__((used)) static
int FUNC_5(struct drm_device *VAR_2, struct drm_bridge *VAR_3)
{
 struct tilcdc_drm_private *VAR_4 = VAR_2->dev_private;
 int VAR_5;

 VAR_4->external_encoder->possible_crtcs = FUNC_0(0);

 VAR_5 = FUNC_2(VAR_4->external_encoder, VAR_3, ((void*)0));
 if (VAR_5) {
  FUNC_1(VAR_2->dev, "drm_bridge_attach() failed %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_3(VAR_4->crtc, &VAR_1);

 VAR_4->external_connector =
  FUNC_4(VAR_2, VAR_4->external_encoder);
 if (!VAR_4->external_connector)
  return -VAR_0;

 return 0;
}
