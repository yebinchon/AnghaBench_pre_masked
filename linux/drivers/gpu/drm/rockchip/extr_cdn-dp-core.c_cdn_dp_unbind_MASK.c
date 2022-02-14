
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_encoder {TYPE_1__* funcs; } ;
struct drm_connector {TYPE_2__* funcs; } ;
struct device {int dummy; } ;
struct cdn_dp_device {int * edid; int fw; scalar_t__ fw_loaded; int event_work; struct drm_connector connector; struct drm_encoder encoder; } ;
struct TYPE_4__ {int (* destroy ) (struct drm_connector*) ;} ;
struct TYPE_3__ {int (* destroy ) (struct drm_encoder*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_encoder*) ;
 struct cdn_dp_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct cdn_dp_device *VAR_3 = FUNC_2(VAR_0);
 struct drm_encoder *VAR_4 = &VAR_3->encoder;
 struct drm_connector *VAR_5 = &VAR_3->connector;

 FUNC_0(&VAR_3->event_work);
 FUNC_1(VAR_4);
 VAR_4->funcs->destroy(VAR_4);
 VAR_5->funcs->destroy(VAR_5);

 FUNC_4(VAR_0);
 if (VAR_3->fw_loaded)
  FUNC_5(VAR_3->fw);
 FUNC_3(VAR_3->edid);
 VAR_3->edid = ((void*)0);
}
