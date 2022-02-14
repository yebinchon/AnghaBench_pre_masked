
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {int crtc_x; int crtc_y; unsigned int crtc_w; unsigned int crtc_h; } ;



__attribute__((used)) static void FUNC_0(struct drm_plane_state *VAR_0,
       int VAR_1, int VAR_2,
       unsigned VAR_3, unsigned VAR_4)
{
 VAR_0->crtc_x = VAR_1;
 VAR_0->crtc_y = VAR_2;
 VAR_0->crtc_w = VAR_3;
 VAR_0->crtc_h = VAR_4;
}
