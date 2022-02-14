
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vc4_dev {int async_modeset; } ;
struct vc4_bo {int seqno; } ;
struct vc4_async_flip_state {int cb; struct drm_framebuffer* old_fb; struct drm_pending_vblank_event* event; struct drm_crtc* crtc; struct drm_framebuffer* fb; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_gem_cma_object {int base; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {struct drm_plane* primary; struct drm_device* dev; } ;
struct TYPE_2__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,struct drm_framebuffer*) ;
 scalar_t__ FUNC_3 (struct drm_crtc*) ;
 struct drm_gem_cma_object* FUNC_4 (struct drm_framebuffer*,int ) ;
 int FUNC_5 (struct drm_framebuffer*) ;
 int FUNC_6 (struct drm_framebuffer*) ;
 int FUNC_7 (struct vc4_async_flip_state*) ;
 struct vc4_async_flip_state* FUNC_8 (int,int ) ;
 struct vc4_bo* FUNC_9 (int *) ;
 struct vc4_dev* FUNC_10 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_11 (struct vc4_bo*) ;
 int FUNC_12 (struct vc4_bo*) ;
 int FUNC_13 (struct drm_device*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct drm_crtc *VAR_3,
          struct drm_framebuffer *VAR_4,
          struct drm_pending_vblank_event *VAR_5,
          uint32_t VAR_6)
{
 struct drm_device *VAR_7 = VAR_3->dev;
 struct vc4_dev *VAR_8 = FUNC_10(VAR_7);
 struct drm_plane *VAR_9 = VAR_3->primary;
 int VAR_10 = 0;
 struct vc4_async_flip_state *VAR_11;
 struct drm_gem_cma_object *VAR_12 = FUNC_4(VAR_4, 0);
 struct vc4_bo *VAR_13 = FUNC_9(&VAR_12->base);
 VAR_10 = FUNC_12(VAR_13);
 if (VAR_10)
  return VAR_10;

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_1);
 if (!VAR_11) {
  FUNC_11(VAR_13);
  return -VAR_0;
 }

 FUNC_5(VAR_4);
 VAR_11->fb = VAR_4;
 VAR_11->crtc = VAR_3;
 VAR_11->event = VAR_5;


 VAR_10 = FUNC_1(&VAR_8->async_modeset);
 if (VAR_10) {
  FUNC_6(VAR_4);
  FUNC_11(VAR_13);
  FUNC_7(VAR_11);
  return VAR_10;
 }
 VAR_11->old_fb = VAR_9->state->fb;
 if (VAR_11->old_fb)
  FUNC_5(VAR_11->old_fb);

 FUNC_0(FUNC_3(VAR_3) != 0);





 FUNC_2(VAR_9->state, VAR_4);

 FUNC_13(VAR_7, &VAR_11->cb, VAR_13->seqno,
      VAR_2);


 return 0;
}
