
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sti_plane {int dummy; } ;
struct sti_hqvdp {int vtg_registered; int clk_pix_main; int vtg_nb; int vtg; int xp70_initialized; } ;
struct drm_plane_state {int crtc_x; int crtc_y; int src_x; int src_y; int src_w; int src_h; int crtc_h; int crtc_w; int state; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct TYPE_4__ {int id; } ;
struct drm_plane {TYPE_2__ base; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {scalar_t__ clock; scalar_t__ vdisplay; scalar_t__ hdisplay; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct TYPE_3__ {int id; } ;
struct drm_crtc {TYPE_1__ base; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int ,int,int,int,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct drm_crtc_state* FUNC_6 (int ,struct drm_crtc*) ;
 int FUNC_7 (struct drm_framebuffer*,int ) ;
 int FUNC_8 (struct sti_hqvdp*,struct drm_display_mode*,int,int,int,int) ;
 int FUNC_9 (struct sti_hqvdp*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sti_plane*) ;
 scalar_t__ FUNC_12 (int ,int *,struct drm_crtc*) ;
 struct sti_hqvdp* FUNC_13 (struct sti_plane*) ;
 int FUNC_14 (struct drm_crtc*) ;
 struct sti_plane* FUNC_15 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_16(struct drm_plane *VAR_5,
      struct drm_plane_state *VAR_6)
{
 struct sti_plane *VAR_7 = FUNC_15(VAR_5);
 struct sti_hqvdp *VAR_8 = FUNC_13(VAR_7);
 struct drm_crtc *VAR_9 = VAR_6->crtc;
 struct drm_framebuffer *VAR_10 = VAR_6->fb;
 struct drm_crtc_state *VAR_11;
 struct drm_display_mode *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;


 if (!VAR_9 || !VAR_10)
  return 0;

 VAR_11 = FUNC_6(VAR_6->state, VAR_9);
 VAR_12 = &VAR_11->mode;
 VAR_13 = VAR_6->crtc_x;
 VAR_14 = VAR_6->crtc_y;
 VAR_15 = FUNC_3(VAR_6->crtc_w, 0, VAR_12->hdisplay - VAR_13);
 VAR_16 = FUNC_3(VAR_6->crtc_h, 0, VAR_12->vdisplay - VAR_14);

 VAR_17 = VAR_6->src_x >> 16;
 VAR_18 = VAR_6->src_y >> 16;
 VAR_19 = VAR_6->src_w >> 16;
 VAR_20 = VAR_6->src_h >> 16;

 if (VAR_12->clock && !FUNC_8(VAR_8, VAR_12,
             VAR_19, VAR_20,
             VAR_15, VAR_16)) {
  FUNC_2("Scaling beyond HW capabilities\n");
  return -VAR_0;
 }

 if (!FUNC_7(VAR_10, 0)) {
  FUNC_2("Can't get CMA GEM object for fb\n");
  return -VAR_0;
 }





 VAR_15 = FUNC_0(VAR_15, 2);
 VAR_16 = FUNC_0(VAR_16, 2);

 if ((VAR_19 > VAR_2) || (VAR_19 < VAR_4) ||
     (VAR_20 > VAR_1) || (VAR_20 < VAR_3) ||
     (VAR_15 > VAR_2) || (VAR_15 < VAR_4) ||
     (VAR_16 > VAR_1) || (VAR_16 < VAR_3)) {
  FUNC_2("Invalid in/out size %dx%d -> %dx%d\n",
     VAR_19, VAR_20,
     VAR_15, VAR_16);
  return -VAR_0;
 }

 if (!VAR_8->xp70_initialized)

  FUNC_9(VAR_8);

 if (!VAR_8->vtg_registered) {

  if (FUNC_5(VAR_8->clk_pix_main)) {
   FUNC_2("Failed to prepare/enable pix main clk\n");
   return -VAR_0;
  }


  if (FUNC_12(VAR_8->vtg,
         &VAR_8->vtg_nb,
         VAR_9)) {
   FUNC_2("Cannot register VTG notifier\n");
   FUNC_4(VAR_8->clk_pix_main);
   return -VAR_0;
  }
  VAR_8->vtg_registered = 1;
 }

 FUNC_1("CRTC:%d (%s) drm plane:%d (%s)\n",
        VAR_9->base.id, FUNC_10(FUNC_14(VAR_9)),
        VAR_5->base.id, FUNC_11(VAR_7));
 FUNC_1("%s dst=(%dx%d)@(%d,%d) - src=(%dx%d)@(%d,%d)\n",
        FUNC_11(VAR_7),
        VAR_15, VAR_16, VAR_13, VAR_14,
        VAR_19, VAR_20, VAR_17, VAR_18);

 return 0;
}
