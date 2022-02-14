
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_plane_state {unsigned int src_w; unsigned int src_x; unsigned int src_h; unsigned int src_y; scalar_t__ crtc_y; scalar_t__ crtc_x; scalar_t__ crtc_h; scalar_t__ crtc_w; struct drm_framebuffer* fb; struct drm_crtc* crtc; struct drm_plane* plane; } ;
struct TYPE_6__ {int id; } ;
struct drm_plane {int possible_crtcs; int name; TYPE_3__ base; } ;
struct drm_mode_rect {unsigned int x1; unsigned int x2; unsigned int y1; unsigned int y2; } ;
struct drm_framebuffer {int width; int height; int modifier; TYPE_2__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct TYPE_4__ {int id; } ;
struct drm_crtc {int name; TYPE_1__ base; } ;
typedef scalar_t__ int32_t ;
struct TYPE_5__ {int format; } ;


 int FUNC_0 (char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,struct drm_format_name_buf*) ;
 int FUNC_3 (struct drm_plane*,int ,int ) ;
 struct drm_mode_rect* FUNC_4 (struct drm_plane_state const*) ;
 scalar_t__ FUNC_5 (struct drm_plane_state const*) ;
 scalar_t__ FUNC_6 (struct drm_plane_state const*,struct drm_plane_state const*) ;

__attribute__((used)) static int FUNC_7(const struct drm_plane_state *VAR_4,
      const struct drm_plane_state *VAR_5)
{
 struct drm_plane *VAR_6 = VAR_5->plane;
 struct drm_crtc *VAR_7 = VAR_5->crtc;
 const struct drm_framebuffer *VAR_8 = VAR_5->fb;
 unsigned int VAR_9, VAR_10;
 struct drm_mode_rect *VAR_11;
 uint32_t VAR_12;
 int VAR_13;


 if (VAR_7 && !VAR_8) {
  FUNC_0("[PLANE:%d:%s] CRTC set but no FB\n",
     VAR_6->base.id, VAR_6->name);
  return -VAR_0;
 } else if (VAR_8 && !VAR_7) {
  FUNC_0("[PLANE:%d:%s] FB set but no CRTC\n",
     VAR_6->base.id, VAR_6->name);
  return -VAR_0;
 }


 if (!VAR_7)
  return 0;


 if (!(VAR_6->possible_crtcs & FUNC_1(VAR_7))) {
  FUNC_0("Invalid [CRTC:%d:%s] for [PLANE:%d:%s]\n",
     VAR_7->base.id, VAR_7->name,
     VAR_6->base.id, VAR_6->name);
  return -VAR_0;
 }


 VAR_13 = FUNC_3(VAR_6, VAR_8->format->format,
        VAR_8->modifier);
 if (VAR_13) {
  struct drm_format_name_buf VAR_14;
  FUNC_0("[PLANE:%d:%s] invalid pixel format %s, modifier 0x%llx\n",
     VAR_6->base.id, VAR_6->name,
     FUNC_2(VAR_8->format->format,
           &VAR_14),
     VAR_8->modifier);
  return VAR_13;
 }


 if (VAR_5->crtc_w > VAR_3 ||
     VAR_5->crtc_x > VAR_3 - (int32_t) VAR_5->crtc_w ||
     VAR_5->crtc_h > VAR_3 ||
     VAR_5->crtc_y > VAR_3 - (int32_t) VAR_5->crtc_h) {
  FUNC_0("[PLANE:%d:%s] invalid CRTC coordinates %ux%u+%d+%d\n",
     VAR_6->base.id, VAR_6->name,
     VAR_5->crtc_w, VAR_5->crtc_h,
     VAR_5->crtc_x, VAR_5->crtc_y);
  return -VAR_2;
 }

 VAR_9 = VAR_8->width << 16;
 VAR_10 = VAR_8->height << 16;


 if (VAR_5->src_w > VAR_9 ||
     VAR_5->src_x > VAR_9 - VAR_5->src_w ||
     VAR_5->src_h > VAR_10 ||
     VAR_5->src_y > VAR_10 - VAR_5->src_h) {
  FUNC_0("[PLANE:%d:%s] invalid source coordinates "
     "%u.%06ux%u.%06u+%u.%06u+%u.%06u (fb %ux%u)\n",
     VAR_6->base.id, VAR_6->name,
     VAR_5->src_w >> 16,
     ((VAR_5->src_w & 0xffff) * 15625) >> 10,
     VAR_5->src_h >> 16,
     ((VAR_5->src_h & 0xffff) * 15625) >> 10,
     VAR_5->src_x >> 16,
     ((VAR_5->src_x & 0xffff) * 15625) >> 10,
     VAR_5->src_y >> 16,
     ((VAR_5->src_y & 0xffff) * 15625) >> 10,
     VAR_8->width, VAR_8->height);
  return -VAR_1;
 }

 VAR_11 = FUNC_4(VAR_5);
 VAR_12 = FUNC_5(VAR_5);


 while (VAR_12 > 0) {
  if (VAR_11->x1 >= VAR_11->x2 ||
      VAR_11->y1 >= VAR_11->y2 ||
      VAR_11->x1 < 0 ||
      VAR_11->y1 < 0 ||
      VAR_11->x2 > VAR_9 ||
      VAR_11->y2 > VAR_10) {
   FUNC_0("[PLANE:%d:%s] invalid damage clip %d %d %d %d\n",
      VAR_6->base.id, VAR_6->name, VAR_11->x1,
      VAR_11->y1, VAR_11->x2, VAR_11->y2);
   return -VAR_0;
  }
  VAR_11++;
  VAR_12--;
 }

 if (FUNC_6(VAR_4, VAR_5)) {
  FUNC_0("[PLANE:%d:%s] switching CRTC directly\n",
     VAR_6->base.id, VAR_6->name);
  return -VAR_0;
 }

 return 0;
}
