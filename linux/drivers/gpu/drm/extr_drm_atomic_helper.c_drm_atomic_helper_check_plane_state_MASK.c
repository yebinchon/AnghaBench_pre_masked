
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {int y2; int x2; } ;
struct drm_plane_state {unsigned int rotation; scalar_t__ crtc; int visible; struct drm_rect dst; struct drm_rect src; struct drm_framebuffer* fb; } ;
struct drm_framebuffer {int width; int height; } ;
struct drm_crtc_state {scalar_t__ crtc; int mode; scalar_t__ enable; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *) ;
 struct drm_rect FUNC_3 (struct drm_plane_state*) ;
 struct drm_rect FUNC_4 (struct drm_plane_state*) ;
 int FUNC_5 (struct drm_rect*,struct drm_rect*,int,int) ;
 int FUNC_6 (struct drm_rect*,struct drm_rect*,int,int) ;
 int FUNC_7 (struct drm_rect*,struct drm_rect*,struct drm_rect*) ;
 int FUNC_8 (char*,struct drm_rect*,int) ;
 int FUNC_9 (struct drm_rect*,struct drm_rect*) ;
 int FUNC_10 (struct drm_rect*,int,int,unsigned int) ;
 int FUNC_11 (struct drm_rect*,int,int,unsigned int) ;

int FUNC_12(struct drm_plane_state *VAR_2,
     const struct drm_crtc_state *VAR_3,
     int VAR_4,
     int VAR_5,
     bool VAR_6,
     bool VAR_7)
{
 struct drm_framebuffer *VAR_8 = VAR_2->fb;
 struct drm_rect *VAR_9 = &VAR_2->src;
 struct drm_rect *VAR_10 = &VAR_2->dst;
 unsigned int VAR_11 = VAR_2->rotation;
 struct drm_rect VAR_12 = {};
 int VAR_13, VAR_14;

 FUNC_1(VAR_2->crtc && VAR_2->crtc != VAR_3->crtc);

 *VAR_9 = FUNC_4(VAR_2);
 *VAR_10 = FUNC_3(VAR_2);

 if (!VAR_8) {
  VAR_2->visible = 0;
  return 0;
 }


 if (FUNC_1(!VAR_2->crtc)) {
  VAR_2->visible = 0;
  return 0;
 }

 if (!VAR_3->enable && !VAR_7) {
  FUNC_0("Cannot update plane of a disabled CRTC.\n");
  return -VAR_0;
 }

 FUNC_10(VAR_9, VAR_8->width << 16, VAR_8->height << 16, VAR_11);


 VAR_13 = FUNC_5(VAR_9, VAR_10, VAR_4, VAR_5);
 VAR_14 = FUNC_6(VAR_9, VAR_10, VAR_4, VAR_5);
 if (VAR_13 < 0 || VAR_14 < 0) {
  FUNC_0("Invalid scaling of plane\n");
  FUNC_8("src: ", &VAR_2->src, 1);
  FUNC_8("dst: ", &VAR_2->dst, 0);
  return -VAR_1;
 }

 if (VAR_3->enable)
  FUNC_2(&VAR_3->mode, &VAR_12.x2, &VAR_12.y2);

 VAR_2->visible = FUNC_7(VAR_9, VAR_10, &VAR_12);

 FUNC_11(VAR_9, VAR_8->width << 16, VAR_8->height << 16, VAR_11);

 if (!VAR_2->visible)







  return 0;

 if (!VAR_6 && !FUNC_9(VAR_10, &VAR_12)) {
  FUNC_0("Plane must cover entire CRTC\n");
  FUNC_8("dst: ", VAR_10, 0);
  FUNC_8("clip: ", &VAR_12, 0);
  return -VAR_0;
 }

 return 0;
}
