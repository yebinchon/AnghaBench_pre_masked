
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_tv {int type; } ;
struct intel_load_detect_pipe {int dummy; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct drm_connector {int status; int name; TYPE_1__ base; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_tv* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*,int *,struct intel_load_detect_pipe*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_3 (struct drm_connector*,struct intel_load_detect_pipe*,struct drm_modeset_acquire_ctx*) ;
 int FUNC_4 (struct intel_tv*,struct drm_connector*) ;
 int FUNC_5 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_6(struct drm_connector *VAR_3,
  struct drm_modeset_acquire_ctx *VAR_4,
  bool VAR_5)
{
 struct intel_tv *VAR_6 = FUNC_1(VAR_3);
 enum drm_connector_status VAR_7;
 int VAR_8;

 FUNC_0("[CONNECTOR:%d:%s] force=%d\n",
        VAR_3->base.id, VAR_3->name,
        VAR_5);

 if (VAR_5) {
  struct intel_load_detect_pipe VAR_9;
  int VAR_10;

  VAR_10 = FUNC_2(VAR_3, ((void*)0), &VAR_9, VAR_4);
  if (VAR_10 < 0)
   return VAR_10;

  if (VAR_10 > 0) {
   VAR_8 = FUNC_4(VAR_6, VAR_3);
   FUNC_3(VAR_3, &VAR_9, VAR_4);
   VAR_7 = VAR_8 < 0 ?
    VAR_1 :
    VAR_0;
  } else
   VAR_7 = VAR_2;

  if (VAR_7 == VAR_0) {
   VAR_6->type = VAR_8;
   FUNC_5(VAR_3);
  }

  return VAR_7;
 } else
  return VAR_3->status;
}
