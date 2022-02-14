
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sti_plane {int status; } ;
struct TYPE_2__ {int paddr; } ;
struct sti_cursor {int width; int height; int clut_paddr; scalar_t__ regs; TYPE_1__ pixmap; } ;
struct drm_plane_state {int crtc_x; int crtc_y; struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_gem_cma_object {scalar_t__ vaddr; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_crtc {struct drm_display_mode mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct drm_gem_cma_object* FUNC_0 (struct drm_framebuffer*,int ) ;
 int FUNC_1 (struct sti_cursor*,int*) ;
 int FUNC_2 (struct sti_plane*,int,int) ;
 int FUNC_3 (struct drm_display_mode,int) ;
 int FUNC_4 (struct drm_display_mode,int) ;
 struct sti_cursor* FUNC_5 (struct sti_plane*) ;
 struct sti_plane* FUNC_6 (struct drm_plane*) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct drm_plane *VAR_10,
         struct drm_plane_state *VAR_11)
{
 struct drm_plane_state *VAR_12 = VAR_10->state;
 struct sti_plane *VAR_13 = FUNC_6(VAR_10);
 struct sti_cursor *VAR_14 = FUNC_5(VAR_13);
 struct drm_crtc *VAR_15 = VAR_12->crtc;
 struct drm_framebuffer *VAR_16 = VAR_12->fb;
 struct drm_display_mode *VAR_17;
 int VAR_18, VAR_19;
 struct drm_gem_cma_object *VAR_20;
 u32 VAR_21, VAR_22;
 u32 VAR_23;

 if (!VAR_15 || !VAR_16)
  return;

 VAR_17 = &VAR_15->mode;
 VAR_18 = VAR_12->crtc_x;
 VAR_19 = VAR_12->crtc_y;

 VAR_20 = FUNC_0(VAR_16, 0);


 FUNC_1(VAR_14, (u32 *)VAR_20->vaddr);


 VAR_21 = FUNC_3(*VAR_17, 0);
 VAR_22 = FUNC_4(*VAR_17, 0);
 VAR_23 = VAR_21 << 16 | VAR_22;
 FUNC_7(VAR_23, VAR_14->regs + VAR_1);
 VAR_21 = FUNC_3(*VAR_17, VAR_17->vdisplay - 1);
 VAR_22 = FUNC_4(*VAR_17, VAR_17->hdisplay - 1);
 VAR_23 = VAR_21 << 16 | VAR_22;
 FUNC_7(VAR_23, VAR_14->regs + VAR_0);


 FUNC_7(VAR_14->pixmap.paddr, VAR_14->regs + VAR_5);
 FUNC_7(VAR_14->width, VAR_14->regs + VAR_6);
 FUNC_7(VAR_14->height << 16 | VAR_14->width, VAR_14->regs + VAR_7);

 VAR_21 = FUNC_3(*VAR_17, VAR_19);
 VAR_22 = FUNC_4(*VAR_17, VAR_18);
 FUNC_7((VAR_21 << 16) | VAR_22, VAR_14->regs + VAR_8);


 FUNC_7(VAR_14->clut_paddr, VAR_14->regs + VAR_2);
 FUNC_7(VAR_4, VAR_14->regs + VAR_3);

 FUNC_2(VAR_13, 1, 0);

 VAR_13->status = VAR_9;
}
