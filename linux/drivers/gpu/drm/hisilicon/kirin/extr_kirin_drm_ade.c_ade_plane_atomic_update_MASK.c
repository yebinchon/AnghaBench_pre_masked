
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_plane {int dummy; } ;
struct drm_plane_state {int src_x; int src_y; int src_w; int src_h; int crtc_h; int crtc_w; int crtc_y; int crtc_x; int fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;


 int FUNC_0 (struct kirin_plane*,int ,int ,int ,int ,int ,int,int,int,int) ;
 struct kirin_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct drm_plane_state *VAR_2 = VAR_0->state;
 struct kirin_plane *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_2->fb, VAR_2->crtc_x, VAR_2->crtc_y,
      VAR_2->crtc_w, VAR_2->crtc_h,
      VAR_2->src_x >> 16, VAR_2->src_y >> 16,
      VAR_2->src_w >> 16, VAR_2->src_h >> 16);
}
