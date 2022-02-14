
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_encoder {scalar_t__ type; int clock_select; } ;
struct vc4_crtc {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int flags; int htotal; int hsync_end; int hsync_start; int hdisplay; int crtc_vtotal; int crtc_vsync_end; int crtc_vsync_start; int crtc_vdisplay; } ;
struct drm_crtc_state {struct drm_display_mode adjusted_mode; } ;
struct drm_crtc {struct drm_crtc_state* state; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_1 (int,int ) ;
 struct vc4_crtc* FUNC_2 (struct drm_crtc*) ;
 struct vc4_encoder* FUNC_3 (struct drm_encoder*) ;
 struct drm_encoder* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_37)
{
 struct drm_encoder *VAR_38 = FUNC_4(VAR_37);
 struct vc4_encoder *VAR_39 = FUNC_3(VAR_38);
 struct vc4_crtc *VAR_40 = FUNC_2(VAR_37);
 struct drm_crtc_state *VAR_41 = VAR_37->state;
 struct drm_display_mode *VAR_42 = &VAR_41->adjusted_mode;
 bool VAR_43 = VAR_42->flags & VAR_1;
 u32 VAR_44 = (VAR_42->flags & VAR_0) ? 2 : 1;
 bool VAR_45 = (VAR_39->type == VAR_35 ||
         VAR_39->type == VAR_36);
 u32 VAR_46 = VAR_45 ? VAR_10 : VAR_9;


 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_2, VAR_6 | VAR_5);
 FUNC_0(VAR_2, 0);

 FUNC_0(VAR_15,
     FUNC_1((VAR_42->htotal -
      VAR_42->hsync_end) * VAR_44,
     VAR_16) |
     FUNC_1((VAR_42->hsync_end -
      VAR_42->hsync_start) * VAR_44,
     VAR_17));
 FUNC_0(VAR_18,
     FUNC_1((VAR_42->hsync_start -
      VAR_42->hdisplay) * VAR_44,
     VAR_20) |
     FUNC_1(VAR_42->hdisplay * VAR_44, VAR_19));

 FUNC_0(VAR_25,
     FUNC_1(VAR_42->crtc_vtotal - VAR_42->crtc_vsync_end,
     VAR_27) |
     FUNC_1(VAR_42->crtc_vsync_end - VAR_42->crtc_vsync_start,
     VAR_28));
 FUNC_0(VAR_29,
     FUNC_1(VAR_42->crtc_vsync_start - VAR_42->crtc_vdisplay,
     VAR_32) |
     FUNC_1(VAR_42->crtc_vdisplay, VAR_31));

 if (VAR_43) {
  FUNC_0(VAR_26,
      FUNC_1(VAR_42->crtc_vtotal -
      VAR_42->crtc_vsync_end - 1,
      VAR_27) |
      FUNC_1(VAR_42->crtc_vsync_end -
      VAR_42->crtc_vsync_start,
      VAR_28));
  FUNC_0(VAR_30,
      FUNC_1(VAR_42->crtc_vsync_start -
      VAR_42->crtc_vdisplay,
      VAR_32) |
      FUNC_1(VAR_42->crtc_vdisplay, VAR_31));






  FUNC_0(VAR_34,
      VAR_21 |
      (VAR_45 ? VAR_22 : 0) |
      VAR_23 |
      FUNC_1(VAR_42->htotal * VAR_44 / 2,
      VAR_24));
  FUNC_0(VAR_33, 0);
 } else {
  FUNC_0(VAR_34,
      VAR_21 |
      (VAR_45 ? VAR_22 : 0));
 }

 FUNC_0(VAR_14, VAR_42->hdisplay * VAR_44);

 FUNC_0(VAR_2,
     FUNC_1(VAR_46, VAR_8) |
     FUNC_1(FUNC_5(VAR_46),
     VAR_7) |
     FUNC_1(VAR_44 - 1, VAR_11) |
     VAR_4 |
     VAR_12 |
     VAR_13 |
     FUNC_1(VAR_39->clock_select,
     VAR_3) |
     VAR_6 |
     VAR_5);
}
