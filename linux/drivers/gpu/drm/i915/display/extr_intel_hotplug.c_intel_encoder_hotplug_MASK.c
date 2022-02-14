
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {int status; int name; TYPE_2__ base; struct drm_device* dev; } ;
struct intel_connector {TYPE_3__ base; } ;
struct TYPE_4__ {int mutex; } ;
struct drm_device {TYPE_1__ mode_config; } ;
typedef enum intel_hotplug_state { ____Placeholder_intel_hotplug_state } intel_hotplug_state ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int *,int) ;
 int FUNC_4 (int *) ;

enum intel_hotplug_state
FUNC_5(struct intel_encoder *VAR_2,
        struct intel_connector *VAR_3,
        bool VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->base.dev;
 enum drm_connector_status VAR_6;

 FUNC_1(!FUNC_4(&VAR_5->mode_config.mutex));
 VAR_6 = VAR_3->base.status;

 VAR_3->base.status =
  FUNC_3(&VAR_3->base, ((void*)0), 0);

 if (VAR_6 == VAR_3->base.status)
  return VAR_1;

 FUNC_0("[CONNECTOR:%d:%s] status updated from %s to %s\n",
        VAR_3->base.base.id,
        VAR_3->base.name,
        FUNC_2(VAR_6),
        FUNC_2(VAR_3->base.status));

 return VAR_0;
}
