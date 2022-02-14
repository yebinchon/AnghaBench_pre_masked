
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane {int dummy; } ;
struct drm_connector {int base; int status; } ;
struct drm_encoder {int possible_crtcs; scalar_t__ possible_clones; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {unsigned int unit; int pref_active; int is_implicit; struct drm_plane cursor; struct drm_plane primary; int pref_height; int pref_width; struct drm_connector connector; struct drm_encoder encoder; struct drm_crtc crtc; } ;
struct vmw_screen_target_display_unit {TYPE_1__ base; } ;
struct vmw_private {int hotplug_mode_update_property; int initial_height; int initial_width; struct drm_device* dev; } ;
struct TYPE_4__ {int suggested_y_property; int suggested_x_property; } ;
struct drm_device {TYPE_2__ mode_config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct drm_crtc*,int *) ;
 int FUNC_9 (struct drm_device*,struct drm_crtc*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int FUNC_10 (struct drm_encoder*) ;
 int FUNC_11 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int FUNC_12 (struct drm_crtc*,int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (struct drm_plane*) ;
 int FUNC_15 (struct drm_plane*) ;
 int FUNC_16 (struct drm_plane*,int *) ;
 int FUNC_17 (struct drm_device*,struct drm_plane*,int ,int *,int ,int ,int *,int ,int *) ;
 int FUNC_18 (struct vmw_screen_target_display_unit*) ;
 struct vmw_screen_target_display_unit* FUNC_19 (int,int ) ;
 int VAR_6 ;
 int FUNC_20 (struct drm_connector*,int) ;
 int FUNC_21 (struct drm_connector*) ;
 int FUNC_22 (struct drm_crtc*) ;
 int FUNC_23 (struct drm_plane*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_24(struct vmw_private *VAR_17, unsigned VAR_18)
{
 struct vmw_screen_target_display_unit *VAR_19;
 struct drm_device *VAR_20 = VAR_17->dev;
 struct drm_connector *VAR_21;
 struct drm_encoder *VAR_22;
 struct drm_plane *VAR_23, *VAR_24;
 struct drm_crtc *VAR_25;
 int VAR_26;


 VAR_19 = FUNC_19(sizeof(*VAR_19), VAR_5);
 if (!VAR_19)
  return -VAR_4;

 VAR_19->base.unit = VAR_18;
 VAR_25 = &VAR_19->base.crtc;
 VAR_22 = &VAR_19->base.encoder;
 VAR_21 = &VAR_19->base.connector;
 VAR_23 = &VAR_19->base.primary;
 VAR_24 = &VAR_19->base.cursor;

 VAR_19->base.pref_active = (VAR_18 == 0);
 VAR_19->base.pref_width = VAR_17->initial_width;
 VAR_19->base.pref_height = VAR_17->initial_height;
 VAR_19->base.is_implicit = 0;


 FUNC_23(VAR_23);

 VAR_26 = FUNC_17(VAR_20, VAR_23,
           0, &VAR_15,
           VAR_7,
           FUNC_0(VAR_7),
           ((void*)0), VAR_3, ((void*)0));
 if (VAR_26) {
  FUNC_1("Failed to initialize primary plane");
  goto err_free;
 }

 FUNC_16(VAR_23, &VAR_16);
 FUNC_15(VAR_23);


 FUNC_23(VAR_24);

 VAR_26 = FUNC_17(VAR_20, VAR_24,
   0, &VAR_12,
   VAR_6,
   FUNC_0(VAR_6),
   ((void*)0), VAR_2, ((void*)0));
 if (VAR_26) {
  FUNC_1("Failed to initialize cursor plane");
  FUNC_14(&VAR_19->base.primary);
  goto err_free;
 }

 FUNC_16(VAR_24, &VAR_13);

 FUNC_21(VAR_21);

 VAR_26 = FUNC_5(VAR_20, VAR_21, &VAR_8,
     VAR_0);
 if (VAR_26) {
  FUNC_1("Failed to initialize connector\n");
  goto err_free;
 }

 FUNC_4(VAR_21, &VAR_9);
 VAR_21->status = FUNC_20(VAR_21, 0);

 VAR_26 = FUNC_11(VAR_20, VAR_22, &VAR_14,
          VAR_1, ((void*)0));
 if (VAR_26) {
  FUNC_1("Failed to initialize encoder\n");
  goto err_free_connector;
 }

 (void) FUNC_2(VAR_21, VAR_22);
 VAR_22->possible_crtcs = (1 << VAR_18);
 VAR_22->possible_clones = 0;

 VAR_26 = FUNC_6(VAR_21);
 if (VAR_26) {
  FUNC_1("Failed to register connector\n");
  goto err_free_encoder;
 }

 FUNC_22(VAR_25);
 VAR_26 = FUNC_9(VAR_20, VAR_25, &VAR_19->base.primary,
     &VAR_19->base.cursor,
     &VAR_10, ((void*)0));
 if (VAR_26) {
  FUNC_1("Failed to initialize CRTC\n");
  goto err_free_unregister;
 }

 FUNC_8(VAR_25, &VAR_11);

 FUNC_12(VAR_25, 256);

 FUNC_13(&VAR_21->base,
       VAR_17->hotplug_mode_update_property, 1);
 FUNC_13(&VAR_21->base,
       VAR_20->mode_config.suggested_x_property, 0);
 FUNC_13(&VAR_21->base,
       VAR_20->mode_config.suggested_y_property, 0);
 return 0;

err_free_unregister:
 FUNC_7(VAR_21);
err_free_encoder:
 FUNC_10(VAR_22);
err_free_connector:
 FUNC_3(VAR_21);
err_free:
 FUNC_18(VAR_19);
 return VAR_26;
}
