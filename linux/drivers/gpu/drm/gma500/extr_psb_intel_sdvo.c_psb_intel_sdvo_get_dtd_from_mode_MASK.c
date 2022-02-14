
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int h_sync_off; int h_sync_width; int v_sync_off_width; int sync_off_width_high; int dtd_flags; int v_sync_off_high; scalar_t__ reserved; scalar_t__ sdvo_flags; } ;
struct TYPE_3__ {int clock; int h_active; int h_blank; int h_high; int v_active; int v_blank; int v_high; } ;
struct psb_intel_sdvo_dtd {TYPE_2__ part2; TYPE_1__ part1; } ;
struct drm_display_mode {int crtc_hdisplay; int crtc_vdisplay; int crtc_hblank_end; int crtc_hblank_start; int crtc_hsync_end; int crtc_hsync_start; int crtc_vblank_end; int crtc_vblank_start; int crtc_vsync_end; int crtc_vsync_start; int clock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct psb_intel_sdvo_dtd *VAR_2,
      const struct drm_display_mode *VAR_3)
{
 uint16_t VAR_4, VAR_5;
 uint16_t VAR_6, VAR_7, VAR_8, VAR_9;
 uint16_t VAR_10, VAR_11;

 VAR_4 = VAR_3->crtc_hdisplay;
 VAR_5 = VAR_3->crtc_vdisplay;


 VAR_6 = VAR_3->crtc_hblank_end - VAR_3->crtc_hblank_start;
 VAR_7 = VAR_3->crtc_hsync_end - VAR_3->crtc_hsync_start;

 VAR_8 = VAR_3->crtc_vblank_end - VAR_3->crtc_vblank_start;
 VAR_9 = VAR_3->crtc_vsync_end - VAR_3->crtc_vsync_start;

 VAR_10 = VAR_3->crtc_hsync_start - VAR_3->crtc_hblank_start;
 VAR_11 = VAR_3->crtc_vsync_start - VAR_3->crtc_vblank_start;

 VAR_2->part1.clock = VAR_3->clock / 10;
 VAR_2->part1.h_active = VAR_4 & 0xff;
 VAR_2->part1.h_blank = VAR_6 & 0xff;
 VAR_2->part1.h_high = (((VAR_4 >> 8) & 0xf) << 4) |
  ((VAR_6 >> 8) & 0xf);
 VAR_2->part1.v_active = VAR_5 & 0xff;
 VAR_2->part1.v_blank = VAR_8 & 0xff;
 VAR_2->part1.v_high = (((VAR_5 >> 8) & 0xf) << 4) |
  ((VAR_8 >> 8) & 0xf);

 VAR_2->part2.h_sync_off = VAR_10 & 0xff;
 VAR_2->part2.h_sync_width = VAR_7 & 0xff;
 VAR_2->part2.v_sync_off_width = (VAR_11 & 0xf) << 4 |
  (VAR_9 & 0xf);
 VAR_2->part2.sync_off_width_high = ((VAR_10 & 0x300) >> 2) |
  ((VAR_7 & 0x300) >> 4) | ((VAR_11 & 0x30) >> 2) |
  ((VAR_9 & 0x30) >> 4);

 VAR_2->part2.dtd_flags = 0x18;
 if (VAR_3->flags & VAR_0)
  VAR_2->part2.dtd_flags |= 0x2;
 if (VAR_3->flags & VAR_1)
  VAR_2->part2.dtd_flags |= 0x4;

 VAR_2->part2.sdvo_flags = 0;
 VAR_2->part2.v_sync_off_high = VAR_11 & 0xc0;
 VAR_2->part2.reserved = 0;
}
