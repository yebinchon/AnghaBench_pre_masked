
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int possible_crtcs; } ;
struct drm_connector {int base; int polled; } ;
struct qxl_output {int index; struct drm_encoder enc; struct drm_connector base; } ;
struct qxl_device {int hotplug_mode_update_property; } ;
struct TYPE_2__ {int suggested_y_property; int suggested_x_property; } ;
struct drm_device {TYPE_1__ mode_config; struct qxl_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_1 (struct drm_connector*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_3 (struct drm_encoder*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_5 (int *,int ,int ) ;
 struct qxl_output* FUNC_6 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_9, int VAR_10)
{
 struct qxl_device *VAR_11 = VAR_9->dev_private;
 struct qxl_output *VAR_12;
 struct drm_connector *VAR_13;
 struct drm_encoder *VAR_14;

 VAR_12 = FUNC_6(sizeof(struct qxl_output), VAR_4);
 if (!VAR_12)
  return -VAR_3;

 VAR_12->index = VAR_10;

 VAR_13 = &VAR_12->base;
 VAR_14 = &VAR_12->enc;
 FUNC_2(VAR_9, &VAR_12->base,
      &VAR_5, VAR_1);

 FUNC_4(VAR_9, &VAR_12->enc, &VAR_7,
    VAR_2, ((void*)0));


 VAR_13->polled = VAR_0;
 VAR_14->possible_crtcs = 1 << VAR_10;
 FUNC_0(&VAR_12->base,
       &VAR_12->enc);
 FUNC_3(VAR_14, &VAR_8);
 FUNC_1(VAR_13, &VAR_6);

 FUNC_5(&VAR_13->base,
       VAR_11->hotplug_mode_update_property, 0);
 FUNC_5(&VAR_13->base,
       VAR_9->mode_config.suggested_x_property, 0);
 FUNC_5(&VAR_13->base,
       VAR_9->mode_config.suggested_y_property, 0);
 return 0;
}
