
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_plane {int dummy; } ;
struct drm_mode_set_plane {int src_h; int src_w; int src_y; int src_x; int crtc_h; int crtc_w; int crtc_y; int crtc_x; scalar_t__ crtc_id; scalar_t__ fb_id; scalar_t__ plane_id; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int ) ;
 struct drm_crtc* FUNC_2 (struct drm_device*,struct drm_file*,scalar_t__) ;
 struct drm_framebuffer* FUNC_3 (struct drm_device*,struct drm_file*,scalar_t__) ;
 int FUNC_4 (struct drm_framebuffer*) ;
 struct drm_plane* FUNC_5 (struct drm_device*,struct drm_file*,scalar_t__) ;
 int FUNC_6 (struct drm_plane*,struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ,int ,int ,int ,int ,int ) ;

int FUNC_7(struct drm_device *VAR_3, void *VAR_4,
        struct drm_file *VAR_5)
{
 struct drm_mode_set_plane *VAR_6 = VAR_4;
 struct drm_plane *VAR_7;
 struct drm_crtc *VAR_8 = ((void*)0);
 struct drm_framebuffer *VAR_9 = ((void*)0);
 int VAR_10;

 if (!FUNC_1(VAR_3, VAR_0))
  return -VAR_2;





 VAR_7 = FUNC_5(VAR_3, VAR_5, VAR_6->plane_id);
 if (!VAR_7) {
  FUNC_0("Unknown plane ID %d\n",
         VAR_6->plane_id);
  return -VAR_1;
 }

 if (VAR_6->fb_id) {
  VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_6->fb_id);
  if (!VAR_9) {
   FUNC_0("Unknown framebuffer ID %d\n",
          VAR_6->fb_id);
   return -VAR_1;
  }

  VAR_8 = FUNC_2(VAR_3, VAR_5, VAR_6->crtc_id);
  if (!VAR_8) {
   FUNC_4(VAR_9);
   FUNC_0("Unknown crtc ID %d\n",
          VAR_6->crtc_id);
   return -VAR_1;
  }
 }

 VAR_10 = FUNC_6(VAR_7, VAR_8, VAR_9,
    VAR_6->crtc_x, VAR_6->crtc_y,
    VAR_6->crtc_w, VAR_6->crtc_h,
    VAR_6->src_x, VAR_6->src_y,
    VAR_6->src_w, VAR_6->src_h);

 if (VAR_9)
  FUNC_4(VAR_9);

 return VAR_10;
}
