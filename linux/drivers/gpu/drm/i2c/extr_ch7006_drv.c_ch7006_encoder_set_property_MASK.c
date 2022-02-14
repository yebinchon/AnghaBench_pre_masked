
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct i2c_client {int dummy; } ;
struct drm_property {int dummy; } ;
struct drm_mode_config {struct drm_property* tv_flicker_reduction_property; struct drm_property* tv_contrast_property; struct drm_property* tv_brightness_property; struct drm_property* tv_mode_property; struct drm_property* tv_bottom_margin_property; struct drm_property* tv_left_margin_property; struct drm_property* tv_select_subconnector_property; } ;
struct drm_encoder {struct drm_crtc* crtc; TYPE_1__* dev; } ;
struct drm_crtc {TYPE_2__* primary; int y; int x; int mode; } ;
struct drm_connector {scalar_t__ dpms; } ;
struct ch7006_state {int dummy; } ;
struct ch7006_priv {void* scale; struct drm_property* scale_property; void* flicker; void* contrast; void* brightness; void* norm; void* vmargin; void* hmargin; void* select_subconnector; struct ch7006_state state; } ;
struct TYPE_4__ {int fb; } ;
struct TYPE_3__ {struct drm_mode_config mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_client*,char*) ;
 int FUNC_1 (struct i2c_client*,struct ch7006_state*,int ) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_crtc*,int *,int ,int ,int ) ;
 int FUNC_6 (struct drm_connector*,int ,int ) ;
 struct i2c_client* FUNC_7 (struct drm_encoder*) ;
 struct ch7006_priv* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_9(struct drm_encoder *VAR_9,
           struct drm_connector *VAR_10,
           struct drm_property *VAR_11,
           uint64_t VAR_12)
{
 struct i2c_client *VAR_13 = FUNC_7(VAR_9);
 struct ch7006_priv *VAR_14 = FUNC_8(VAR_9);
 struct ch7006_state *VAR_15 = &VAR_14->state;
 struct drm_mode_config *VAR_16 = &VAR_9->dev->mode_config;
 struct drm_crtc *VAR_17 = VAR_9->crtc;
 bool VAR_18 = 0;

 FUNC_0(VAR_13, "\n");

 if (VAR_11 == VAR_16->tv_select_subconnector_property) {
  VAR_14->select_subconnector = VAR_12;

  FUNC_3(VAR_9);

  FUNC_1(VAR_13, VAR_15, VAR_5);

 } else if (VAR_11 == VAR_16->tv_left_margin_property) {
  VAR_14->hmargin = VAR_12;

  FUNC_4(VAR_9);

  FUNC_1(VAR_13, VAR_15, VAR_4);
  FUNC_1(VAR_13, VAR_15, VAR_3);

 } else if (VAR_11 == VAR_16->tv_bottom_margin_property) {
  VAR_14->vmargin = VAR_12;

  FUNC_4(VAR_9);

  FUNC_1(VAR_13, VAR_15, VAR_4);
  FUNC_1(VAR_13, VAR_15, VAR_6);

 } else if (VAR_11 == VAR_16->tv_mode_property) {
  if (VAR_10->dpms != VAR_7)
   return -VAR_8;

  VAR_14->norm = VAR_12;

  VAR_18 = 1;

 } else if (VAR_11 == VAR_16->tv_brightness_property) {
  VAR_14->brightness = VAR_12;

  FUNC_2(VAR_9);

  FUNC_1(VAR_13, VAR_15, VAR_0);

 } else if (VAR_11 == VAR_16->tv_contrast_property) {
  VAR_14->contrast = VAR_12;

  FUNC_4(VAR_9);

  FUNC_1(VAR_13, VAR_15, VAR_1);

 } else if (VAR_11 == VAR_16->tv_flicker_reduction_property) {
  VAR_14->flicker = VAR_12;

  FUNC_4(VAR_9);

  FUNC_1(VAR_13, VAR_15, VAR_2);

 } else if (VAR_11 == VAR_14->scale_property) {
  if (VAR_10->dpms != VAR_7)
   return -VAR_8;

  VAR_14->scale = VAR_12;

  VAR_18 = 1;

 } else {
  return -VAR_8;
 }

 if (VAR_18) {
  FUNC_6(VAR_10, 0, 0);

  if (VAR_17)
   FUNC_5(VAR_17, &VAR_17->mode,
       VAR_17->x, VAR_17->y,
       VAR_17->primary->fb);
 }

 return 0;
}
