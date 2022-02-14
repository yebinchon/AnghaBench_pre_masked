
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane_state {scalar_t__ src_h; scalar_t__ src_w; scalar_t__ src_y; scalar_t__ src_x; scalar_t__ crtc_h; scalar_t__ crtc_w; scalar_t__ crtc_y; scalar_t__ crtc_x; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (struct drm_plane_state*,int *) ;
 int FUNC_1 (struct drm_plane_state*,int *) ;

int FUNC_2(struct drm_plane *VAR_0,
          struct drm_plane_state *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, ((void*)0));
 if (VAR_2 != 0)
  return VAR_2;

 FUNC_1(VAR_1, ((void*)0));
 VAR_1->crtc_x = 0;
 VAR_1->crtc_y = 0;
 VAR_1->crtc_w = 0;
 VAR_1->crtc_h = 0;
 VAR_1->src_x = 0;
 VAR_1->src_y = 0;
 VAR_1->src_w = 0;
 VAR_1->src_h = 0;

 return 0;
}
