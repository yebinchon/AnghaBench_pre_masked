
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct tilcdc_panel_info {int dma_burst_sz; int fifo_th; int fdd; scalar_t__ raster_order; scalar_t__ sync_edge; scalar_t__ sync_ctrl; scalar_t__ invert_pxl_clk; scalar_t__ tft_alt_mode; int ac_bias_intrpt; int ac_bias; } ;
struct tilcdc_drm_private {int rev; } ;
struct tilcdc_crtc {int hvtotal_us; struct tilcdc_panel_info* info; } ;
struct drm_framebuffer {TYPE_4__* format; } ;
struct drm_display_mode {int htotal; int hsync_end; int hsync_start; int hdisplay; int vtotal; int vsync_end; int vsync_start; int vdisplay; int flags; } ;
struct drm_device {int dev; struct tilcdc_drm_private* dev_private; } ;
struct drm_crtc {struct drm_display_mode hwmode; TYPE_1__* state; TYPE_3__* primary; struct drm_device* dev; } ;
struct TYPE_8__ {int format; } ;
struct TYPE_7__ {TYPE_2__* state; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int) ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
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
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct drm_crtc*,struct drm_framebuffer*) ;
 int FUNC_7 (struct drm_device*,int ,int ) ;
 int FUNC_8 (struct drm_crtc*) ;
 int FUNC_9 (struct drm_crtc*) ;
 int FUNC_10 (struct drm_display_mode*) ;
 int FUNC_11 (struct drm_device*,int ) ;
 int FUNC_12 (struct drm_device*,int ,int ) ;
 int FUNC_13 (struct drm_device*,int ,int) ;
 struct tilcdc_crtc* FUNC_14 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_15(struct drm_crtc *VAR_25)
{
 struct tilcdc_crtc *VAR_26 = FUNC_14(VAR_25);
 struct drm_device *VAR_27 = VAR_25->dev;
 struct tilcdc_drm_private *VAR_28 = VAR_27->dev_private;
 const struct tilcdc_panel_info *VAR_29 = VAR_26->info;
 uint32_t VAR_30, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;
 struct drm_display_mode *VAR_37 = &VAR_25->state->adjusted_mode;
 struct drm_framebuffer *VAR_38 = VAR_25->primary->state->fb;

 if (FUNC_4(!VAR_29))
  return;

 if (FUNC_4(!VAR_38))
  return;


 VAR_30 = FUNC_11(VAR_27, VAR_7) & ~0x00000770;
 switch (VAR_29->dma_burst_sz) {
 case 1:
  VAR_30 |= FUNC_3(VAR_2);
  break;
 case 2:
  VAR_30 |= FUNC_3(VAR_4);
  break;
 case 4:
  VAR_30 |= FUNC_3(VAR_5);
  break;
 case 8:
  VAR_30 |= FUNC_3(VAR_6);
  break;
 case 16:
  VAR_30 |= FUNC_3(VAR_3);
  break;
 default:
  FUNC_5(VAR_27->dev, "invalid burst size\n");
  return;
 }
 VAR_30 |= (VAR_29->fifo_th << 8);
 FUNC_13(VAR_27, VAR_7, VAR_30);


 VAR_31 = VAR_37->htotal - VAR_37->hsync_end;
 VAR_32 = VAR_37->hsync_start - VAR_37->hdisplay;
 VAR_33 = VAR_37->hsync_end - VAR_37->hsync_start;
 VAR_34 = VAR_37->vtotal - VAR_37->vsync_end;
 VAR_35 = VAR_37->vsync_start - VAR_37->vdisplay;
 VAR_36 = VAR_37->vsync_end - VAR_37->vsync_start;

 FUNC_0("%dx%d, hbp=%u, hfp=%u, hsw=%u, vbp=%u, vfp=%u, vsw=%u",
     VAR_37->hdisplay, VAR_37->vdisplay, VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36);


 VAR_30 = FUNC_11(VAR_27, VAR_18) & ~0x000fff00;
 VAR_30 |= FUNC_1(VAR_29->ac_bias) |
  FUNC_2(VAR_29->ac_bias_intrpt);





 if (VAR_28->rev == 2) {

  VAR_30 &= ~0x78000033;
  VAR_30 |= ((VAR_32-1) & 0x300) >> 8;
  VAR_30 |= ((VAR_31-1) & 0x300) >> 4;
  VAR_30 |= ((VAR_33-1) & 0x3c0) << 21;
 }
 FUNC_13(VAR_27, VAR_18, VAR_30);

 VAR_30 = (((VAR_37->hdisplay >> 4) - 1) << 4) |
  (((VAR_31-1) & 0xff) << 24) |
  (((VAR_32-1) & 0xff) << 16) |
  (((VAR_33-1) & 0x3f) << 10);
 if (VAR_28->rev == 2)
  VAR_30 |= (((VAR_37->hdisplay >> 4) - 1) & 0x40) >> 3;
 FUNC_13(VAR_27, VAR_16, VAR_30);

 VAR_30 = ((VAR_37->vdisplay - 1) & 0x3ff) |
  ((VAR_34 & 0xff) << 24) |
  ((VAR_35 & 0xff) << 16) |
  (((VAR_36-1) & 0x3f) << 10);
 FUNC_13(VAR_27, VAR_17, VAR_30);






 if (VAR_28->rev == 2) {
  if ((VAR_37->vdisplay - 1) & 0x400) {
   FUNC_12(VAR_27, VAR_18,
    VAR_11);
  } else {
   FUNC_7(VAR_27, VAR_18,
    VAR_11);
  }
 }


 VAR_30 = FUNC_11(VAR_27, VAR_14) &
  ~(VAR_22 | VAR_13 | VAR_12 |
    VAR_23 | VAR_24 |
    0x000ff000 );
 VAR_30 |= VAR_22;
 if (VAR_29->tft_alt_mode)
  VAR_30 |= VAR_21;
 if (VAR_28->rev == 2) {
  switch (VAR_38->format->format) {
  case 133:
  case 131:
   break;
  case 129:
  case 128:
   VAR_30 |= VAR_24;

  case 132:
  case 130:
   VAR_30 |= VAR_23;
   break;
  default:
   FUNC_5(VAR_27->dev, "invalid pixel format\n");
   return;
  }
 }
 VAR_30 |= VAR_29->fdd < 12;
 FUNC_13(VAR_27, VAR_14, VAR_30);

 if (VAR_29->invert_pxl_clk)
  FUNC_12(VAR_27, VAR_18, VAR_9);
 else
  FUNC_7(VAR_27, VAR_18, VAR_9);

 if (VAR_29->sync_ctrl)
  FUNC_12(VAR_27, VAR_18, VAR_19);
 else
  FUNC_7(VAR_27, VAR_18, VAR_19);

 if (VAR_29->sync_edge)
  FUNC_12(VAR_27, VAR_18, VAR_20);
 else
  FUNC_7(VAR_27, VAR_18, VAR_20);

 if (VAR_37->flags & VAR_0)
  FUNC_12(VAR_27, VAR_18, VAR_8);
 else
  FUNC_7(VAR_27, VAR_18, VAR_8);

 if (VAR_37->flags & VAR_1)
  FUNC_12(VAR_27, VAR_18, VAR_10);
 else
  FUNC_7(VAR_27, VAR_18, VAR_10);

 if (VAR_29->raster_order)
  FUNC_12(VAR_27, VAR_14, VAR_15);
 else
  FUNC_7(VAR_27, VAR_14, VAR_15);

 FUNC_9(VAR_25);

 FUNC_8(VAR_25);

 FUNC_6(VAR_25, VAR_38);

 VAR_25->hwmode = VAR_25->state->adjusted_mode;

 VAR_26->hvtotal_us =
  FUNC_10(&VAR_25->hwmode);
}
