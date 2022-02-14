
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vkms_plane_state {struct vkms_composer* composer; } ;
struct vkms_composer {int cpp; int pitch; int offset; int fb; int dst; int src; } ;
struct drm_rect {int dummy; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_2__* state; } ;
struct drm_framebuffer {TYPE_1__* format; int * pitches; int * offsets; } ;
struct TYPE_4__ {struct drm_framebuffer dst; struct drm_framebuffer src; int crtc; struct drm_framebuffer* fb; } ;
struct TYPE_3__ {int * cpp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct drm_framebuffer*,int) ;
 struct vkms_plane_state* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct vkms_plane_state *VAR_2;
 struct drm_framebuffer *VAR_3 = VAR_0->state->fb;
 struct vkms_composer *VAR_4;

 if (!VAR_0->state->crtc || !VAR_3)
  return;

 VAR_2 = FUNC_2(VAR_0->state);

 VAR_4 = VAR_2->composer;
 FUNC_1(&VAR_4->src, &VAR_0->state->src, sizeof(struct drm_rect));
 FUNC_1(&VAR_4->dst, &VAR_0->state->dst, sizeof(struct drm_rect));
 FUNC_1(&VAR_4->fb, VAR_3, sizeof(struct drm_framebuffer));
 FUNC_0(&VAR_4->fb);
 VAR_4->offset = VAR_3->offsets[0];
 VAR_4->pitch = VAR_3->pitches[0];
 VAR_4->cpp = VAR_3->format->cpp[0];
}
