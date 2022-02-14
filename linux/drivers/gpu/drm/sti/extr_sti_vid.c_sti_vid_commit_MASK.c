
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_vid {scalar_t__ regs; } ;
struct drm_plane_state {int crtc_x; int crtc_y; int src_h; int crtc_h; int crtc_w; struct drm_crtc* crtc; } ;
struct drm_display_mode {scalar_t__ vdisplay; scalar_t__ hdisplay; } ;
struct drm_crtc {struct drm_display_mode mode; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct drm_display_mode,int) ;
 int FUNC_4 (struct drm_display_mode,int) ;
 int FUNC_5 (int,scalar_t__) ;

void FUNC_6(struct sti_vid *VAR_17,
      struct drm_plane_state *VAR_18)
{
 struct drm_crtc *VAR_19 = VAR_18->crtc;
 struct drm_display_mode *VAR_20 = &VAR_19->mode;
 int VAR_21 = VAR_18->crtc_x;
 int VAR_22 = VAR_18->crtc_y;
 int VAR_23 = FUNC_1(VAR_18->crtc_w, 0, VAR_20->hdisplay - VAR_21);
 int VAR_24 = FUNC_1(VAR_18->crtc_h, 0, VAR_20->vdisplay - VAR_22);
 int VAR_25 = VAR_18->src_h >> 16;
 u32 VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;



 VAR_23 = FUNC_0(VAR_23, 2);
 VAR_24 = FUNC_0(VAR_24, 2);


 VAR_26 = FUNC_2(VAR_17->regs + VAR_0);
 VAR_26 &= ~VAR_1;
 FUNC_5(VAR_26, VAR_17->regs + VAR_0);

 VAR_27 = FUNC_3(*VAR_20, VAR_22);
 VAR_29 = FUNC_3(*VAR_20, VAR_22 + VAR_24 - 1);
 VAR_28 = FUNC_4(*VAR_20, VAR_21);
 VAR_30 = FUNC_4(*VAR_20, VAR_21 + VAR_23 - 1);

 FUNC_5((VAR_27 << 16) | VAR_28, VAR_17->regs + VAR_15);
 FUNC_5((VAR_29 << 16) | VAR_30, VAR_17->regs + VAR_16);


 if (VAR_25 >= VAR_2) {
  FUNC_5(VAR_5, VAR_17->regs + VAR_3);
  FUNC_5(VAR_8, VAR_17->regs + VAR_6);
  FUNC_5(VAR_11, VAR_17->regs + VAR_9);
  FUNC_5(VAR_14, VAR_17->regs + VAR_12);
 } else {
  FUNC_5(VAR_4, VAR_17->regs + VAR_3);
  FUNC_5(VAR_7, VAR_17->regs + VAR_6);
  FUNC_5(VAR_10, VAR_17->regs + VAR_9);
  FUNC_5(VAR_13, VAR_17->regs + VAR_12);
 }
}
