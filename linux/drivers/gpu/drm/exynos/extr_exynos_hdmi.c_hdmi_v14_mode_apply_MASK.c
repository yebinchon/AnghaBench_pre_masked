
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* crtc; } ;
struct hdmi_context {int * drv_data; TYPE_3__ encoder; } ;
struct drm_display_mode {int vdisplay; int hdisplay; int htotal; int vtotal; int flags; int vsync_end; int vsync_start; int hsync_start; int hsync_end; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; struct drm_display_mode mode; } ;


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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_0 (struct hdmi_context*,int ,int) ;
 int FUNC_1 (struct hdmi_context*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct hdmi_context *VAR_53)
{
 struct drm_display_mode *VAR_54 = &VAR_53->encoder.crtc->state->mode;
 struct drm_display_mode *VAR_55 =
    &VAR_53->encoder.crtc->state->adjusted_mode;
 int VAR_56 = 0;






 if ((VAR_54->vdisplay != VAR_55->vdisplay) &&
     (VAR_54->hdisplay == 1280 || VAR_54->hdisplay == 1024 || VAR_54->hdisplay == 1366))
  VAR_56 = 258;

 FUNC_1(VAR_53, VAR_4, 2, VAR_54->htotal - VAR_54->hdisplay);
 FUNC_1(VAR_53, VAR_37, 2, VAR_54->vtotal);
 FUNC_1(VAR_53, VAR_5, 2, VAR_54->htotal);
 FUNC_1(VAR_53, VAR_3, 1,
   (VAR_54->flags & VAR_1) ? 1 : 0);
 FUNC_1(VAR_53, VAR_30, 1,
   (VAR_54->flags & VAR_2) ? 1 : 0);
 FUNC_1(VAR_53, VAR_8, 1,
   (VAR_54->flags & VAR_0) ? 1 : 0);
 if (VAR_54->flags & VAR_0) {
  FUNC_1(VAR_53, VAR_51, 2,
   (VAR_54->vsync_end - VAR_54->vdisplay) / 2);
  FUNC_1(VAR_53, VAR_50, 2,
   (VAR_54->vsync_start - VAR_54->vdisplay) / 2);
  FUNC_1(VAR_53, VAR_23, 2, VAR_54->vtotal / 2);
  FUNC_1(VAR_53, VAR_22, 2,
    (VAR_54->vtotal - VAR_54->vdisplay) / 2);
  FUNC_1(VAR_53, VAR_31, 2,
    VAR_54->vtotal - VAR_54->vdisplay / 2);
  FUNC_1(VAR_53, VAR_32, 2, VAR_54->vtotal);
  FUNC_1(VAR_53, VAR_39, 2,
    (VAR_54->vtotal / 2) + 7);
  FUNC_1(VAR_53, VAR_38, 2,
    (VAR_54->vtotal / 2) + 2);
  FUNC_1(VAR_53, VAR_45, 2,
   (VAR_54->htotal / 2) + (VAR_54->hsync_start - VAR_54->hdisplay));
  FUNC_1(VAR_53, VAR_44, 2,
   (VAR_54->htotal / 2) + (VAR_54->hsync_start - VAR_54->hdisplay));
  FUNC_1(VAR_53, VAR_17, 2,
    (VAR_54->vtotal - VAR_54->vdisplay) / 2);
  FUNC_1(VAR_53, VAR_18, 2, VAR_54->vdisplay / 2);
  FUNC_1(VAR_53, VAR_14, 2,
    VAR_54->vtotal - VAR_54->vdisplay / 2);
  FUNC_1(VAR_53, VAR_19, 2,
    (VAR_54->vtotal / 2) + 1);
  FUNC_1(VAR_53, VAR_20, 2,
    (VAR_54->vtotal / 2) + 1);
  FUNC_1(VAR_53, VAR_10, 2,
    (VAR_54->vtotal / 2) + 1);
  FUNC_1(VAR_53, VAR_15, 2, 0x0);
  FUNC_1(VAR_53, VAR_16, 2, 0x0);
 } else {
  FUNC_1(VAR_53, VAR_51, 2,
   VAR_54->vsync_end - VAR_54->vdisplay);
  FUNC_1(VAR_53, VAR_50, 2,
   VAR_54->vsync_start - VAR_54->vdisplay);
  FUNC_1(VAR_53, VAR_23, 2, VAR_54->vtotal);
  FUNC_1(VAR_53, VAR_22, 2,
    VAR_54->vtotal - VAR_54->vdisplay);
  FUNC_1(VAR_53, VAR_31, 2, 0xffff);
  FUNC_1(VAR_53, VAR_32, 2, 0xffff);
  FUNC_1(VAR_53, VAR_39, 2, 0xffff);
  FUNC_1(VAR_53, VAR_38, 2, 0xffff);
  FUNC_1(VAR_53, VAR_45, 2, 0xffff);
  FUNC_1(VAR_53, VAR_44, 2, 0xffff);
  FUNC_1(VAR_53, VAR_17, 2,
    VAR_54->vtotal - VAR_54->vdisplay);
  FUNC_1(VAR_53, VAR_18, 2, VAR_54->vdisplay);
 }

 FUNC_1(VAR_53, VAR_7, 2,
   VAR_54->hsync_start - VAR_54->hdisplay - 2);
 FUNC_1(VAR_53, VAR_6, 2,
   VAR_54->hsync_end - VAR_54->hdisplay - 2);
 FUNC_1(VAR_53, VAR_24, 2, 0xffff);
 FUNC_1(VAR_53, VAR_25, 2, 0xffff);
 FUNC_1(VAR_53, VAR_26, 2, 0xffff);
 FUNC_1(VAR_53, VAR_27, 2, 0xffff);
 FUNC_1(VAR_53, VAR_28, 2, 0xffff);
 FUNC_1(VAR_53, VAR_29, 2, 0xffff);
 FUNC_1(VAR_53, VAR_33, 2, 0xffff);
 FUNC_1(VAR_53, VAR_34, 2, 0xffff);
 FUNC_1(VAR_53, VAR_35, 2, 0xffff);
 FUNC_1(VAR_53, VAR_36, 2, 0xffff);
 FUNC_1(VAR_53, VAR_40, 2, 0xffff);
 FUNC_1(VAR_53, VAR_41, 2, 0xffff);
 FUNC_1(VAR_53, VAR_42, 2, 0xffff);
 FUNC_1(VAR_53, VAR_43, 2, 0xffff);
 FUNC_1(VAR_53, VAR_46, 2, 0xffff);
 FUNC_1(VAR_53, VAR_47, 2, 0xffff);
 FUNC_1(VAR_53, VAR_48, 2, 0xffff);
 FUNC_1(VAR_53, VAR_49, 2, 0xffff);

 FUNC_1(VAR_53, VAR_13, 2, VAR_54->htotal);
 FUNC_1(VAR_53, VAR_11, 2,
     VAR_54->htotal - VAR_54->hdisplay - VAR_56);
 FUNC_1(VAR_53, VAR_12, 2, VAR_54->hdisplay + VAR_56);
 FUNC_1(VAR_53, VAR_21, 2, VAR_54->vtotal);
 if (VAR_53->drv_data == &VAR_52)
  FUNC_0(VAR_53, VAR_9, 1);
}
