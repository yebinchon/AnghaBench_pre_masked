
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_module {int dummy; } ;
struct tilcdc_drm_private {int crtc; int num_connectors; struct drm_connector** connectors; int num_encoders; struct drm_encoder** encoders; } ;
struct tfp410_module {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
struct drm_connector {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_connector* FUNC_0 (struct drm_device*,struct tfp410_module*,struct drm_encoder*) ;
 struct drm_encoder* FUNC_1 (struct drm_device*,struct tfp410_module*) ;
 int FUNC_2 (int ,int *) ;
 struct tfp410_module* FUNC_3 (struct tilcdc_module*) ;

__attribute__((used)) static int FUNC_4(struct tilcdc_module *VAR_2, struct drm_device *VAR_3)
{
 struct tfp410_module *VAR_4 = FUNC_3(VAR_2);
 struct tilcdc_drm_private *VAR_5 = VAR_3->dev_private;
 struct drm_encoder *VAR_6;
 struct drm_connector *VAR_7;

 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_6);
 if (!VAR_7)
  return -VAR_0;

 VAR_5->encoders[VAR_5->num_encoders++] = VAR_6;
 VAR_5->connectors[VAR_5->num_connectors++] = VAR_7;

 FUNC_2(VAR_5->crtc, &VAR_1);
 return 0;
}
