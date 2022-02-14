
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mcde {int stride; scalar_t__ regs; scalar_t__ te_sync; TYPE_3__* mdsi; } ;
struct drm_plane {TYPE_1__* state; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct drm_simple_display_pipe {struct drm_plane plane; struct drm_crtc crtc; } ;
struct drm_plane_state {int dummy; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int flags; } ;
struct drm_device {int dev; struct mcde* dev_private; } ;
struct drm_crtc_state {struct drm_display_mode mode; } ;
struct TYPE_6__ {int mode_flags; int format; } ;
struct TYPE_5__ {int format; int* cpp; } ;
struct TYPE_4__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int,struct drm_format_name_buf*) ;
 int FUNC_5 (struct mcde*,int ,int ,struct drm_display_mode const*) ;
 int FUNC_6 (struct mcde*,int ,int,int) ;
 int FUNC_7 (struct mcde*,int ,int) ;
 int FUNC_8 (struct mcde*,int ,int ,int) ;
 int FUNC_9 (struct mcde*,int ,int ,int ,struct drm_display_mode const*,int) ;
 int FUNC_10 (struct mcde*,int ,int ) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_16(struct drm_simple_display_pipe *VAR_11,
    struct drm_crtc_state *VAR_12,
    struct drm_plane_state *VAR_13)
{
 struct drm_crtc *VAR_14 = &VAR_11->crtc;
 struct drm_plane *VAR_15 = &VAR_11->plane;
 struct drm_device *VAR_16 = VAR_14->dev;
 struct mcde *VAR_17 = VAR_16->dev_private;
 const struct drm_display_mode *VAR_18 = &VAR_12->mode;
 struct drm_framebuffer *VAR_19 = VAR_15->state->fb;
 u32 VAR_20 = VAR_19->format->format;
 u32 VAR_21 = VAR_18->hdisplay;
 u32 VAR_22 = VAR_18->vdisplay;
 int VAR_23, VAR_24;
 int VAR_25 = VAR_19->format->cpp[0];
 int VAR_26;
 struct drm_format_name_buf VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;

 FUNC_2(VAR_16->dev, "enable MCDE, %d x %d format %s\n",
   VAR_18->hdisplay, VAR_18->vdisplay,
   FUNC_4(VAR_20, &VAR_27));
 if (!VAR_17->mdsi) {

  FUNC_1(VAR_16->dev, "no DSI master attached!\n");
  return;
 }

 FUNC_2(VAR_16->dev, "output in %s mode, format %dbpp\n",
   (VAR_17->mdsi->mode_flags & VAR_10) ?
   "VIDEO" : "CMD",
   FUNC_13(VAR_17->mdsi->format));
 VAR_26 =
  FUNC_13(VAR_17->mdsi->format) / 8;
 FUNC_2(VAR_16->dev, "overlay CPP %d bytes, DSI CPP %d bytes\n",
   VAR_25,
   VAR_26);
 VAR_24 = VAR_18->hdisplay;
 if (VAR_17->mdsi->mode_flags & VAR_10) {
  VAR_24 = FUNC_12(VAR_24, 128);
  VAR_29 = 1;
 } else {
  VAR_24 = FUNC_12(VAR_24, 48);

  VAR_29 = FUNC_11(VAR_18->hdisplay, 640);
 }
 FUNC_0(VAR_16->dev, "FIFO watermark after flooring: %d bytes\n",
  VAR_24);
 FUNC_0(VAR_16->dev, "Packet divisor: %d bytes\n", VAR_29);


 VAR_23 = (VAR_21 * VAR_26) / VAR_29;

 if (!(VAR_17->mdsi->mode_flags & VAR_10))
  VAR_23++;

 FUNC_0(VAR_16->dev, "DSI packet size: %d * %d bytes per line\n",
  VAR_23, VAR_29);
 FUNC_0(VAR_16->dev, "Overlay frame size: %u bytes\n",
  VAR_18->hdisplay * VAR_18->vdisplay * VAR_25);
 VAR_17->stride = VAR_18->hdisplay * VAR_25;
 FUNC_0(VAR_16->dev, "Overlay line stride: %u bytes\n",
  VAR_17->stride);

 VAR_28 = VAR_23 * VAR_29 * VAR_22;
 FUNC_0(VAR_16->dev, "Formatter frame size: %u bytes\n", VAR_28);


 FUNC_10(VAR_17, VAR_6, VAR_1);
 FUNC_7(VAR_17, VAR_5, VAR_20);






 FUNC_9(VAR_17, VAR_7, VAR_5,
          VAR_1, VAR_18, VAR_20);





 FUNC_5(VAR_17, VAR_1, VAR_6, VAR_18);


 FUNC_8(VAR_17, VAR_6, VAR_4,
       VAR_24);


 FUNC_6(VAR_17, VAR_4,
         VAR_28, VAR_23);

 if (VAR_17->te_sync) {
  if (VAR_18->flags & VAR_0)
   VAR_30 = VAR_9;
  else
   VAR_30 = 0;
  FUNC_15(VAR_30, VAR_17->regs + VAR_8);

  VAR_30 = FUNC_14(VAR_17->regs + VAR_2);
  VAR_30 |= VAR_3;
  FUNC_15(VAR_30, VAR_17->regs + VAR_2);

  FUNC_3(VAR_14);
 }

 FUNC_2(VAR_16->dev, "MCDE display is enabled\n");
}
