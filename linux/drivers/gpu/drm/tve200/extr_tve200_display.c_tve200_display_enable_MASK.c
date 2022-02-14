
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tve200_drm_dev_private {scalar_t__ regs; int clk; struct drm_connector* connector; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_plane plane; struct drm_crtc crtc; } ;
struct drm_plane_state {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_device {int dev; struct tve200_drm_dev_private* dev_private; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct TYPE_5__ {int bus_flags; } ;
struct drm_connector {TYPE_2__ display_info; } ;
struct TYPE_6__ {int format; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_simple_display_pipe *VAR_26,
     struct drm_crtc_state *VAR_27,
     struct drm_plane_state *VAR_28)
{
 struct drm_crtc *VAR_29 = &VAR_26->crtc;
 struct drm_plane *VAR_30 = &VAR_26->plane;
 struct drm_device *VAR_31 = VAR_29->dev;
 struct tve200_drm_dev_private *VAR_32 = VAR_31->dev_private;
 const struct drm_display_mode *VAR_33 = &VAR_27->mode;
 struct drm_framebuffer *VAR_34 = VAR_30->state->fb;
 struct drm_connector *VAR_35 = VAR_32->connector;
 u32 VAR_36 = VAR_34->format->format;
 u32 VAR_37 = 0;

 FUNC_0(VAR_32->clk);


 VAR_37 |= VAR_6;

 VAR_37 |= VAR_10;

 VAR_37 |= VAR_5;

 VAR_37 |= VAR_12;

 VAR_37 |= VAR_11;


 VAR_37 |= VAR_25;

 if (VAR_35->display_info.bus_flags &
     VAR_0)
  VAR_37 |= VAR_13;

 if ((VAR_33->hdisplay == 352 && VAR_33->vdisplay == 240) ||
     (VAR_33->hdisplay == 352 && VAR_33->vdisplay == 288)) {
  VAR_37 |= VAR_7;
  FUNC_2(VAR_31->dev, "CIF mode\n");
 } else if (VAR_33->hdisplay == 640 && VAR_33->vdisplay == 480) {
  VAR_37 |= VAR_9;
  FUNC_2(VAR_31->dev, "VGA mode\n");
 } else if ((VAR_33->hdisplay == 720 && VAR_33->vdisplay == 480) ||
     (VAR_33->hdisplay == 720 && VAR_33->vdisplay == 576)) {
  VAR_37 |= VAR_8;
  FUNC_2(VAR_31->dev, "D1 mode\n");
 }

 if (VAR_36 & VAR_1) {
  VAR_37 |= VAR_4;
  VAR_36 &= ~VAR_1;
 }

 switch (VAR_36) {
 case 131:
  VAR_37 |= VAR_21;
  break;
 case 137:
  VAR_37 |= VAR_20;
  break;
 case 132:
  VAR_37 |= VAR_19;
  break;
 case 133:
  VAR_37 |= VAR_21 | VAR_2;
  break;
 case 138:
  VAR_37 |= VAR_20 | VAR_2;
  break;
 case 134:
  VAR_37 |= VAR_19 | VAR_2;
  break;
 case 129:
  VAR_37 |= VAR_23;
  VAR_37 |= VAR_15;
  break;
 case 128:
  VAR_37 |= VAR_23;
  VAR_37 |= VAR_14;
  break;
 case 136:
  VAR_37 |= VAR_23;
  VAR_37 |= VAR_17;
  break;
 case 135:
  VAR_37 |= VAR_23;
  VAR_37 |= VAR_16;
  break;
 case 130:
  VAR_37 |= VAR_18;
  VAR_37 |= VAR_22;
  break;
 default:
  FUNC_1(VAR_31->dev, "Unknown FB format 0x%08x\n",
   VAR_34->format->format);
  break;
 }

 VAR_37 |= VAR_24;


 FUNC_4(VAR_37, VAR_32->regs + VAR_3);

 FUNC_3(VAR_29);
}
