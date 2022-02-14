
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int src_x; int src_y; int fb; struct drm_crtc* crtc; } ;
struct drm_plane {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct drm_crtc*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct drm_plane *VAR_0,
     struct drm_plane_state *VAR_1)
{
 struct drm_crtc *VAR_2 = VAR_1->crtc;


 FUNC_0(VAR_2, VAR_1->fb,
        VAR_1->src_x >> 16,
        VAR_1->src_y >> 16);
}
