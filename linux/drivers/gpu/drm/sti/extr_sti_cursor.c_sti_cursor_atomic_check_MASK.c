
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sti_plane {int dummy; } ;
struct TYPE_4__ {int size; scalar_t__ base; int paddr; } ;
struct sti_cursor {int width; int height; TYPE_1__ pixmap; int dev; } ;
struct drm_plane_state {int crtc_x; int crtc_y; int src_w; int src_h; int crtc_h; int crtc_w; int state; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct TYPE_6__ {int id; } ;
struct drm_plane {TYPE_3__ base; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {scalar_t__ crtc_vdisplay; scalar_t__ crtc_hdisplay; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct TYPE_5__ {int id; } ;
struct drm_crtc {TYPE_2__ base; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int,int *,int) ;
 int FUNC_4 (int ,int,scalar_t__,int ) ;
 struct drm_crtc_state* FUNC_5 (int ,struct drm_crtc*) ;
 int FUNC_6 (struct drm_framebuffer*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sti_plane*) ;
 struct sti_cursor* FUNC_9 (struct sti_plane*) ;
 int FUNC_10 (struct drm_crtc*) ;
 struct sti_plane* FUNC_11 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_12(struct drm_plane *VAR_5,
       struct drm_plane_state *VAR_6)
{
 struct sti_plane *VAR_7 = FUNC_11(VAR_5);
 struct sti_cursor *VAR_8 = FUNC_9(VAR_7);
 struct drm_crtc *VAR_9 = VAR_6->crtc;
 struct drm_framebuffer *VAR_10 = VAR_6->fb;
 struct drm_crtc_state *VAR_11;
 struct drm_display_mode *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;


 if (!VAR_9 || !VAR_10)
  return 0;

 VAR_11 = FUNC_5(VAR_6->state, VAR_9);
 VAR_12 = &VAR_11->mode;
 VAR_13 = VAR_6->crtc_x;
 VAR_14 = VAR_6->crtc_y;
 VAR_15 = FUNC_2(VAR_6->crtc_w, 0, VAR_12->crtc_hdisplay - VAR_13);
 VAR_16 = FUNC_2(VAR_6->crtc_h, 0, VAR_12->crtc_vdisplay - VAR_14);

 VAR_17 = VAR_6->src_w >> 16;
 VAR_18 = VAR_6->src_h >> 16;

 if (VAR_17 < VAR_4 ||
     VAR_18 < VAR_4 ||
     VAR_17 > VAR_3 ||
     VAR_18 > VAR_3) {
  FUNC_1("Invalid cursor size (%dx%d)\n",
    VAR_17, VAR_18);
  return -VAR_0;
 }


 if (!VAR_8->pixmap.base ||
     (VAR_8->width != VAR_17) ||
     (VAR_8->height != VAR_18)) {
  VAR_8->width = VAR_17;
  VAR_8->height = VAR_18;

  if (VAR_8->pixmap.base)
   FUNC_4(VAR_8->dev, VAR_8->pixmap.size,
        VAR_8->pixmap.base, VAR_8->pixmap.paddr);

  VAR_8->pixmap.size = VAR_8->width * VAR_8->height;

  VAR_8->pixmap.base = FUNC_3(VAR_8->dev,
         VAR_8->pixmap.size,
         &VAR_8->pixmap.paddr,
         VAR_2 | VAR_1);
  if (!VAR_8->pixmap.base) {
   FUNC_1("Failed to allocate memory for pixmap\n");
   return -VAR_0;
  }
 }

 if (!FUNC_6(VAR_10, 0)) {
  FUNC_1("Can't get CMA GEM object for fb\n");
  return -VAR_0;
 }

 FUNC_0("CRTC:%d (%s) drm plane:%d (%s)\n",
        VAR_9->base.id, FUNC_7(FUNC_10(VAR_9)),
        VAR_5->base.id, FUNC_8(VAR_7));
 FUNC_0("(%dx%d)@(%d,%d)\n", VAR_15, VAR_16, VAR_13, VAR_14);

 return 0;
}
