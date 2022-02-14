
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct nv17_tv_norm_params {scalar_t__ kind; } ;
struct nv17_tv_encoder {void* select_subconnector; void* tv_norm; void* flicker; void* hue; void* saturation; void* overscan; } ;
struct drm_property {int dummy; } ;
struct drm_mode_config {struct drm_property* tv_select_subconnector_property; struct drm_property* tv_mode_property; struct drm_property* tv_flicker_reduction_property; struct drm_property* tv_hue_property; struct drm_property* tv_saturation_property; struct drm_property* tv_overscan_property; } ;
struct drm_encoder {struct drm_crtc* crtc; TYPE_1__* dev; } ;
struct drm_crtc {TYPE_2__* primary; int y; int x; int mode; } ;
struct drm_connector {scalar_t__ dpms; } ;
struct TYPE_4__ {int fb; } ;
struct TYPE_3__ {struct drm_mode_config mode_config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct drm_crtc*,int *,int ,int ,int ) ;
 int FUNC_1 (struct drm_connector*,int ,int ) ;
 struct nv17_tv_norm_params* FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*) ;
 struct nv17_tv_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_7(struct drm_encoder *VAR_4,
    struct drm_connector *VAR_5,
    struct drm_property *VAR_6,
    uint64_t VAR_7)
{
 struct drm_mode_config *VAR_8 = &VAR_4->dev->mode_config;
 struct drm_crtc *VAR_9 = VAR_4->crtc;
 struct nv17_tv_encoder *VAR_10 = FUNC_6(VAR_4);
 struct nv17_tv_norm_params *VAR_11 = FUNC_2(VAR_4);
 bool VAR_12 = 0;

 if (VAR_6 == VAR_8->tv_overscan_property) {
  VAR_10->overscan = VAR_7;
  if (VAR_4->crtc) {
   if (VAR_11->kind == VAR_0)
    FUNC_3(VAR_4);
   else
    FUNC_5(VAR_4);
  }

 } else if (VAR_6 == VAR_8->tv_saturation_property) {
  if (VAR_11->kind != VAR_3)
   return -VAR_2;

  VAR_10->saturation = VAR_7;
  FUNC_4(VAR_4);

 } else if (VAR_6 == VAR_8->tv_hue_property) {
  if (VAR_11->kind != VAR_3)
   return -VAR_2;

  VAR_10->hue = VAR_7;
  FUNC_4(VAR_4);

 } else if (VAR_6 == VAR_8->tv_flicker_reduction_property) {
  if (VAR_11->kind != VAR_3)
   return -VAR_2;

  VAR_10->flicker = VAR_7;
  if (VAR_4->crtc)
   FUNC_5(VAR_4);

 } else if (VAR_6 == VAR_8->tv_mode_property) {
  if (VAR_5->dpms != VAR_1)
   return -VAR_2;

  VAR_10->tv_norm = VAR_7;

  VAR_12 = 1;

 } else if (VAR_6 == VAR_8->tv_select_subconnector_property) {
  if (VAR_11->kind != VAR_3)
   return -VAR_2;

  VAR_10->select_subconnector = VAR_7;
  FUNC_4(VAR_4);

 } else {
  return -VAR_2;
 }

 if (VAR_12) {
  FUNC_1(VAR_5, 0, 0);



  if (VAR_9)
   FUNC_0(VAR_9, &VAR_9->mode,
       VAR_9->x, VAR_9->y,
       VAR_9->primary->fb);
 }

 return 0;
}
