
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tilcdc_module {int dummy; } ;
struct tilcdc_drm_private {int crtc; int num_connectors; struct drm_connector** connectors; int num_encoders; struct drm_encoder** encoders; } ;
struct panel_module {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct tilcdc_drm_private* dev_private; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mod; } ;
struct TYPE_3__ {int info; } ;


 int VAR_0 ;
 struct drm_connector* FUNC_0 (struct drm_device*,struct panel_module*,struct drm_encoder*) ;
 struct drm_encoder* FUNC_1 (struct drm_device*,struct panel_module*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (struct drm_encoder*) ;
 struct panel_module* FUNC_4 (struct tilcdc_module*) ;

__attribute__((used)) static int FUNC_5(struct tilcdc_module *VAR_1, struct drm_device *VAR_2)
{
 struct panel_module *VAR_3 = FUNC_4(VAR_1);
 struct tilcdc_drm_private *VAR_4 = VAR_2->dev_private;
 struct drm_encoder *VAR_5;
 struct drm_connector *VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->encoders[VAR_4->num_encoders++] = VAR_5;
 VAR_4->connectors[VAR_4->num_connectors++] = VAR_6;

 FUNC_2(VAR_4->crtc,
       FUNC_3(VAR_5)->mod->info);

 return 0;
}
