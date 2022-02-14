
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sti_plane {int dummy; } ;
struct sti_mixer {scalar_t__ id; } ;
struct sti_gdp {scalar_t__ clk_pix; struct clk* clk_aux_parent; struct clk* clk_main_parent; } ;
struct drm_plane_state {int crtc_x; int crtc_y; int crtc_w; int crtc_h; int src_x; int src_y; int src_w; int src_h; int state; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct TYPE_6__ {int id; } ;
struct drm_plane {TYPE_3__ base; } ;
struct drm_framebuffer {TYPE_1__* format; } ;
struct drm_display_mode {int clock; scalar_t__ vdisplay; scalar_t__ hdisplay; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct TYPE_5__ {int id; } ;
struct drm_crtc {TYPE_2__ base; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int format; } ;


 int FUNC_0 (char*,int ,int,int,int,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int ,scalar_t__) ;
 int FUNC_3 (scalar_t__,struct clk*) ;
 int FUNC_4 (scalar_t__,int) ;
 struct drm_crtc_state* FUNC_5 (int ,struct drm_crtc*) ;
 int FUNC_6 (struct drm_framebuffer*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sti_mixer*) ;
 int FUNC_9 (struct sti_plane*) ;
 struct sti_gdp* FUNC_10 (struct sti_plane*) ;
 struct sti_mixer* FUNC_11 (struct drm_crtc*) ;
 struct sti_plane* FUNC_12 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_13(struct drm_plane *VAR_4,
    struct drm_plane_state *VAR_5)
{
 struct sti_plane *VAR_6 = FUNC_12(VAR_4);
 struct sti_gdp *VAR_7 = FUNC_10(VAR_6);
 struct drm_crtc *VAR_8 = VAR_5->crtc;
 struct drm_framebuffer *VAR_9 = VAR_5->fb;
 struct drm_crtc_state *VAR_10;
 struct sti_mixer *VAR_11;
 struct drm_display_mode *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;


 if (!VAR_8 || !VAR_9)
  return 0;

 VAR_11 = FUNC_11(VAR_8);
 VAR_10 = FUNC_5(VAR_5->state, VAR_8);
 VAR_12 = &VAR_10->mode;
 VAR_13 = VAR_5->crtc_x;
 VAR_14 = VAR_5->crtc_y;
 VAR_15 = FUNC_2(VAR_5->crtc_w, 0, VAR_12->hdisplay - VAR_13);
 VAR_16 = FUNC_2(VAR_5->crtc_h, 0, VAR_12->vdisplay - VAR_14);

 VAR_17 = VAR_5->src_x >> 16;
 VAR_18 = VAR_5->src_y >> 16;
 VAR_19 = FUNC_2(VAR_5->src_w >> 16, 0, VAR_2);
 VAR_20 = FUNC_2(VAR_5->src_h >> 16, 0, VAR_1);

 VAR_21 = FUNC_7(VAR_9->format->format);
 if (VAR_21 == -1) {
  FUNC_1("Format not supported by GDP %.4s\n",
     (char *)&VAR_9->format->format);
  return -VAR_0;
 }

 if (!FUNC_6(VAR_9, 0)) {
  FUNC_1("Can't get CMA GEM object for fb\n");
  return -VAR_0;
 }


 if (VAR_12->clock && VAR_7->clk_pix) {
  struct clk *VAR_22;
  int VAR_23 = VAR_12->clock * 1000;
  int VAR_24;





  if (VAR_11->id == VAR_3)
   VAR_22 = VAR_7->clk_main_parent;
  else
   VAR_22 = VAR_7->clk_aux_parent;

  if (VAR_22)
   FUNC_3(VAR_7->clk_pix, VAR_22);

  VAR_24 = FUNC_4(VAR_7->clk_pix, VAR_23);
  if (VAR_24 < 0) {
   FUNC_1("Cannot set rate (%dHz) for gdp\n",
      VAR_23);
   return -VAR_0;
  }
 }

 FUNC_0("CRTC:%d (%s) drm plane:%d (%s)\n",
        VAR_8->base.id, FUNC_8(VAR_11),
        VAR_4->base.id, FUNC_9(VAR_6));
 FUNC_0("%s dst=(%dx%d)@(%d,%d) - src=(%dx%d)@(%d,%d)\n",
        FUNC_9(VAR_6),
        VAR_15, VAR_16, VAR_13, VAR_14,
        VAR_19, VAR_20, VAR_17, VAR_18);

 return 0;
}
