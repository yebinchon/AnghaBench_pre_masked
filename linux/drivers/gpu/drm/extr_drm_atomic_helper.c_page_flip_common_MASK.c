
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_plane_state {int async_flip; int active; struct drm_pending_vblank_event* event; } ;
struct drm_plane {int dummy; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc_state {int async_flip; int active; struct drm_pending_vblank_event* event; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {int name; TYPE_1__ base; struct drm_plane* primary; } ;
struct drm_atomic_state {int allow_modeset; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_plane_state*) ;
 int FUNC_2 (struct drm_plane_state*) ;
 struct drm_plane_state* FUNC_3 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_plane_state* FUNC_4 (struct drm_atomic_state*,struct drm_plane*) ;
 int FUNC_5 (struct drm_plane_state*,struct drm_crtc*) ;
 int FUNC_6 (struct drm_plane_state*,struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_7(struct drm_atomic_state *VAR_2,
       struct drm_crtc *VAR_3,
       struct drm_framebuffer *VAR_4,
       struct drm_pending_vblank_event *VAR_5,
       uint32_t VAR_6)
{
 struct drm_plane *VAR_7 = VAR_3->primary;
 struct drm_plane_state *VAR_8;
 struct drm_crtc_state *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_3(VAR_2, VAR_3);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 VAR_9->event = VAR_5;
 VAR_9->async_flip = VAR_6 & VAR_0;

 VAR_8 = FUNC_4(VAR_2, VAR_7);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_10 = FUNC_5(VAR_8, VAR_3);
 if (VAR_10 != 0)
  return VAR_10;
 FUNC_6(VAR_8, VAR_4);


 VAR_2->allow_modeset = 0;
 if (!VAR_9->active) {
  FUNC_0("[CRTC:%d:%s] disabled, rejecting legacy flip\n",
     VAR_3->base.id, VAR_3->name);
  return -VAR_1;
 }

 return VAR_10;
}
