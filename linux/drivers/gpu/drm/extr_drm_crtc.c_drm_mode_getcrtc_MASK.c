
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct drm_plane {int mutex; TYPE_5__* state; TYPE_4__* fb; } ;
struct TYPE_14__ {int flags; } ;
struct drm_mode_crtc {int x; int y; int mode_valid; TYPE_7__ mode; scalar_t__ fb_id; int gamma_size; int crtc_id; } ;
struct drm_file {int aspect_ratio_allowed; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int x; int y; int mutex; int mode; scalar_t__ enabled; TYPE_6__* state; int gamma_size; struct drm_plane* primary; } ;
struct TYPE_13__ {int mode; scalar_t__ enable; } ;
struct TYPE_12__ {int src_x; int src_y; TYPE_2__* fb; } ;
struct TYPE_10__ {scalar_t__ id; } ;
struct TYPE_11__ {TYPE_3__ base; } ;
struct TYPE_8__ {scalar_t__ id; } ;
struct TYPE_9__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 struct drm_crtc* FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (TYPE_7__*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_4,
       void *VAR_5, struct drm_file *VAR_6)
{
 struct drm_mode_crtc *VAR_7 = VAR_5;
 struct drm_crtc *VAR_8;
 struct drm_plane *VAR_9;

 if (!FUNC_0(VAR_4, VAR_0))
  return -VAR_3;

 VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_7->crtc_id);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = VAR_8->primary;

 VAR_7->gamma_size = VAR_8->gamma_size;

 FUNC_3(&VAR_9->mutex, ((void*)0));
 if (VAR_9->state && VAR_9->state->fb)
  VAR_7->fb_id = VAR_9->state->fb->base.id;
 else if (!VAR_9->state && VAR_9->fb)
  VAR_7->fb_id = VAR_9->fb->base.id;
 else
  VAR_7->fb_id = 0;

 if (VAR_9->state) {
  VAR_7->x = VAR_9->state->src_x >> 16;
  VAR_7->y = VAR_9->state->src_y >> 16;
 }
 FUNC_4(&VAR_9->mutex);

 FUNC_3(&VAR_8->mutex, ((void*)0));
 if (VAR_8->state) {
  if (VAR_8->state->enable) {
   FUNC_2(&VAR_7->mode, &VAR_8->state->mode);
   VAR_7->mode_valid = 1;
  } else {
   VAR_7->mode_valid = 0;
  }
 } else {
  VAR_7->x = VAR_8->x;
  VAR_7->y = VAR_8->y;

  if (VAR_8->enabled) {
   FUNC_2(&VAR_7->mode, &VAR_8->mode);
   VAR_7->mode_valid = 1;

  } else {
   VAR_7->mode_valid = 0;
  }
 }
 if (!VAR_6->aspect_ratio_allowed)
  VAR_7->mode.flags &= ~VAR_1;
 FUNC_4(&VAR_8->mutex);

 return 0;
}
