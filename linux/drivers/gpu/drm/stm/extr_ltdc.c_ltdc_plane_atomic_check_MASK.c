
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_plane_state {int src_w; int src_h; int crtc_w; int crtc_h; struct drm_framebuffer* fb; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct drm_plane *VAR_1,
       struct drm_plane_state *VAR_2)
{
 struct drm_framebuffer *VAR_3 = VAR_2->fb;
 u32 VAR_4, VAR_5;

 FUNC_0("\n");

 if (!VAR_3)
  return 0;


 VAR_4 = VAR_2->src_w >> 16;
 VAR_5 = VAR_2->src_h >> 16;


 if (VAR_4 != VAR_2->crtc_w || VAR_5 != VAR_2->crtc_h) {
  FUNC_1("Scaling is not supported");
  return -VAR_0;
 }

 return 0;
}
