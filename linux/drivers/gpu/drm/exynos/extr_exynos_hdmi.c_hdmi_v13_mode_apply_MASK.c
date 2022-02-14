
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* crtc; } ;
struct hdmi_context {TYPE_3__ encoder; } ;
struct drm_display_mode {int htotal; int hdisplay; int vtotal; int flags; int hsync_start; int hsync_end; int vsync_end; int vdisplay; int vsync_start; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {struct drm_display_mode mode; } ;


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
 int FUNC_0 (struct hdmi_context*,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct hdmi_context *VAR_20)
{
 struct drm_display_mode *VAR_21 = &VAR_20->encoder.crtc->state->mode;
 unsigned int VAR_22;

 FUNC_0(VAR_20, VAR_3, 2, VAR_21->htotal - VAR_21->hdisplay);
 FUNC_0(VAR_20, VAR_13, 3,
   (VAR_21->htotal << 12) | VAR_21->vtotal);

 VAR_22 = (VAR_21->flags & VAR_2) ? 1 : 0;
 FUNC_0(VAR_20, VAR_19, 1, VAR_22);

 VAR_22 = (VAR_21->flags & VAR_0) ? 1 : 0;
 FUNC_0(VAR_20, VAR_4, 1, VAR_22);

 VAR_22 = (VAR_21->hsync_start - VAR_21->hdisplay - 2);
 VAR_22 |= ((VAR_21->hsync_end - VAR_21->hdisplay - 2) << 10);
 VAR_22 |= ((VAR_21->flags & VAR_1) ? 1 : 0)<<20;
 FUNC_0(VAR_20, VAR_12, 3, VAR_22);
 if (VAR_21->flags & VAR_0) {
  VAR_22 = ((VAR_21->vsync_end - VAR_21->vdisplay) / 2);
  VAR_22 |= ((VAR_21->vsync_start - VAR_21->vdisplay) / 2) << 12;
  FUNC_0(VAR_20, VAR_16, 3, VAR_22);

  VAR_22 = VAR_21->vtotal / 2;
  VAR_22 |= ((VAR_21->vtotal - VAR_21->vdisplay) / 2) << 11;
  FUNC_0(VAR_20, VAR_14, 3, VAR_22);

  VAR_22 = (VAR_21->vtotal +
   ((VAR_21->vsync_end - VAR_21->vsync_start) * 4) + 5) / 2;
  VAR_22 |= VAR_21->vtotal << 11;
  FUNC_0(VAR_20, VAR_15, 3, VAR_22);

  VAR_22 = ((VAR_21->vtotal / 2) + 7);
  VAR_22 |= ((VAR_21->vtotal / 2) + 2) << 12;
  FUNC_0(VAR_20, VAR_17, 3, VAR_22);

  VAR_22 = ((VAR_21->htotal / 2) + (VAR_21->hsync_start - VAR_21->hdisplay));
  VAR_22 |= ((VAR_21->htotal / 2) +
   (VAR_21->hsync_start - VAR_21->hdisplay)) << 12;
  FUNC_0(VAR_20, VAR_18, 3, VAR_22);

  FUNC_0(VAR_20, VAR_9, 2,
    (VAR_21->vtotal - VAR_21->vdisplay) / 2);
  FUNC_0(VAR_20, VAR_10, 2, VAR_21->vdisplay / 2);

  FUNC_0(VAR_20, VAR_8, 2, 0x249);
 } else {
  VAR_22 = VAR_21->vtotal;
  VAR_22 |= (VAR_21->vtotal - VAR_21->vdisplay) << 11;
  FUNC_0(VAR_20, VAR_14, 3, VAR_22);

  FUNC_0(VAR_20, VAR_15, 3, 0);

  VAR_22 = (VAR_21->vsync_end - VAR_21->vdisplay);
  VAR_22 |= ((VAR_21->vsync_start - VAR_21->vdisplay) << 12);
  FUNC_0(VAR_20, VAR_16, 3, VAR_22);

  FUNC_0(VAR_20, VAR_17, 3, 0x1001);
  FUNC_0(VAR_20, VAR_18, 3, 0x1001);
  FUNC_0(VAR_20, VAR_9, 2,
    VAR_21->vtotal - VAR_21->vdisplay);
  FUNC_0(VAR_20, VAR_10, 2, VAR_21->vdisplay);
 }

 FUNC_0(VAR_20, VAR_7, 2, VAR_21->htotal);
 FUNC_0(VAR_20, VAR_5, 2, VAR_21->htotal - VAR_21->hdisplay);
 FUNC_0(VAR_20, VAR_6, 2, VAR_21->hdisplay);
 FUNC_0(VAR_20, VAR_11, 2, VAR_21->vtotal);
}
