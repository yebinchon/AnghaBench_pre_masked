
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {int y1; int x1; } ;
struct drm_plane_state {unsigned int rotation; int visible; struct drm_rect dst; struct drm_rect src; int crtc_h; int crtc_w; int crtc_y; int crtc_x; int src_h; int src_w; int src_y; int src_x; struct drm_framebuffer* fb; struct drm_crtc* crtc; struct drm_plane* plane; } ;
struct drm_plane {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc_state {int mode; int enable; struct drm_crtc* crtc; } ;
struct drm_crtc {int mode; int enabled; } ;


 int FUNC_0 (struct drm_plane_state*,struct drm_crtc_state*,int,int,int,int) ;
 int FUNC_1 (struct drm_rect*) ;
 int FUNC_2 (struct drm_rect*) ;

__attribute__((used)) static int FUNC_3(struct drm_plane *VAR_0,
      struct drm_crtc *VAR_1,
      struct drm_framebuffer *VAR_2,
      struct drm_rect *VAR_3,
      struct drm_rect *VAR_4,
      unsigned int VAR_5,
      int VAR_6,
      int VAR_7,
      bool VAR_8,
      bool VAR_9,
      bool *VAR_10)
{
 struct drm_plane_state VAR_11 = {
  .plane = VAR_0,
  .crtc = VAR_1,
  .fb = VAR_2,
  .src_x = VAR_3->x1,
  .src_y = VAR_3->y1,
  .src_w = FUNC_2(VAR_3),
  .src_h = FUNC_1(VAR_3),
  .crtc_x = VAR_4->x1,
  .crtc_y = VAR_4->y1,
  .crtc_w = FUNC_2(VAR_4),
  .crtc_h = FUNC_1(VAR_4),
  .rotation = VAR_5,
  .visible = *VAR_10,
 };
 struct drm_crtc_state VAR_12 = {
  .crtc = VAR_1,
  .enable = VAR_1->enabled,
  .mode = VAR_1->mode,
 };
 int VAR_13;

 VAR_13 = FUNC_0(&VAR_11, &VAR_12,
        VAR_6, VAR_7,
        VAR_8,
        VAR_9);
 if (VAR_13)
  return VAR_13;

 *VAR_3 = VAR_11.src;
 *VAR_4 = VAR_11.dst;
 *VAR_10 = VAR_11.visible;

 return 0;
}
