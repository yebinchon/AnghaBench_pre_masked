
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int src_x; int src_y; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_framebuffer*,int,int) ;

__attribute__((used)) static void FUNC_1(struct drm_plane *VAR_0,
           struct drm_plane_state *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_0->state->crtc;
 struct drm_framebuffer *VAR_3 = VAR_0->state->fb;

 FUNC_0(VAR_2, VAR_3,
        VAR_0->state->src_x >> 16,
        VAR_0->state->src_y >> 16);
}
