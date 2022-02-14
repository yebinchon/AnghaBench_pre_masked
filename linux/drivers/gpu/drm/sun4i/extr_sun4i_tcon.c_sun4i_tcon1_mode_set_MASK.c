
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sun4i_tcon {int regs; int sclk1; TYPE_1__* quirks; } ;
struct drm_display_mode {int crtc_clock; int flags; unsigned int crtc_htotal; unsigned int crtc_hsync_start; unsigned int htotal; unsigned int crtc_vtotal; unsigned int crtc_vsync_start; unsigned int vtotal; unsigned int crtc_hsync_end; unsigned int crtc_vsync_end; int crtc_vdisplay; int crtc_hdisplay; } ;
struct TYPE_2__ {int has_channel_1; } ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int VAR_6 ;
 int FUNC_12 (unsigned int) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (struct drm_display_mode const*,int) ;

__attribute__((used)) static void FUNC_19(struct sun4i_tcon *VAR_13,
     const struct drm_display_mode *VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18;
 u8 VAR_19;
 u32 VAR_20;

 FUNC_14(!VAR_13->quirks->has_channel_1);


 FUNC_15(VAR_13->sclk1, VAR_14->crtc_clock * 1000);


 VAR_19 = FUNC_18(VAR_14, 1);
 FUNC_16(VAR_13->regs, VAR_9,
      VAR_7,
      FUNC_13(VAR_19));


 if (VAR_14->flags & VAR_0)
  VAR_20 = VAR_8;
 else
  VAR_20 = 0;
 FUNC_16(VAR_13->regs, VAR_9,
      VAR_8,
      VAR_20);


 FUNC_17(VAR_13->regs, VAR_1,
       FUNC_1(VAR_14->crtc_hdisplay) |
       FUNC_2(VAR_14->crtc_vdisplay));


 FUNC_17(VAR_13->regs, VAR_2,
       FUNC_3(VAR_14->crtc_hdisplay) |
       FUNC_4(VAR_14->crtc_vdisplay));


 FUNC_17(VAR_13->regs, VAR_3,
       FUNC_5(VAR_14->crtc_hdisplay) |
       FUNC_6(VAR_14->crtc_vdisplay));


 VAR_15 = VAR_14->crtc_htotal - VAR_14->crtc_hsync_start;
 FUNC_0("Setting horizontal total %d, backporch %d\n",
    VAR_14->htotal, VAR_15);
 FUNC_17(VAR_13->regs, VAR_4,
       FUNC_8(VAR_14->crtc_htotal) |
       FUNC_7(VAR_15));

 VAR_15 = VAR_14->crtc_vtotal - VAR_14->crtc_vsync_start;
 FUNC_0("Setting vertical total %d, backporch %d\n",
    VAR_14->crtc_vtotal, VAR_15);
 VAR_18 = VAR_14->vtotal;
 if (!(VAR_14->flags & VAR_0))
  VAR_18 = VAR_18 * 2;


 FUNC_17(VAR_13->regs, VAR_5,
       FUNC_10(VAR_18) |
       FUNC_9(VAR_15));


 VAR_16 = VAR_14->crtc_hsync_end - VAR_14->crtc_hsync_start;
 VAR_17 = VAR_14->crtc_vsync_end - VAR_14->crtc_vsync_start;
 FUNC_0("Setting HSYNC %d, VSYNC %d\n", VAR_16, VAR_17);
 FUNC_17(VAR_13->regs, VAR_6,
       FUNC_12(VAR_17) |
       FUNC_11(VAR_16));


 FUNC_16(VAR_13->regs, VAR_12,
      VAR_10,
      VAR_11);
}
