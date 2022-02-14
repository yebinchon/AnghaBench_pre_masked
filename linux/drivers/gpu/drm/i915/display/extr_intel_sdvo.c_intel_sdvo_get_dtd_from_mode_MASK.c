
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int h_sync_off; int h_sync_width; int v_sync_off_width; int sync_off_width_high; int dtd_flags; int v_sync_off_high; } ;
struct TYPE_3__ {int clock; int h_active; int h_blank; int h_high; int v_active; int v_blank; int v_high; } ;
struct intel_sdvo_dtd {TYPE_2__ part2; TYPE_1__ part1; } ;
struct drm_display_mode {int hdisplay; int vdisplay; int htotal; int hsync_end; int hsync_start; int vtotal; int vsync_end; int vsync_start; int clock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_sdvo_dtd*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct intel_sdvo_dtd *VAR_6,
      const struct drm_display_mode *VAR_7)
{
 u16 VAR_8, VAR_9;
 u16 VAR_10, VAR_11, VAR_12, VAR_13;
 u16 VAR_14, VAR_15;
 int VAR_16;

 FUNC_0(VAR_6, 0, sizeof(*VAR_6));

 VAR_8 = VAR_7->hdisplay;
 VAR_9 = VAR_7->vdisplay;


 VAR_10 = VAR_7->htotal - VAR_7->hdisplay;
 VAR_11 = VAR_7->hsync_end - VAR_7->hsync_start;

 VAR_12 = VAR_7->vtotal - VAR_7->vdisplay;
 VAR_13 = VAR_7->vsync_end - VAR_7->vsync_start;

 VAR_14 = VAR_7->hsync_start - VAR_7->hdisplay;
 VAR_15 = VAR_7->vsync_start - VAR_7->vdisplay;

 VAR_16 = VAR_7->clock;
 VAR_16 /= 10;
 VAR_6->part1.clock = VAR_16;

 VAR_6->part1.h_active = VAR_8 & 0xff;
 VAR_6->part1.h_blank = VAR_10 & 0xff;
 VAR_6->part1.h_high = (((VAR_8 >> 8) & 0xf) << 4) |
  ((VAR_10 >> 8) & 0xf);
 VAR_6->part1.v_active = VAR_9 & 0xff;
 VAR_6->part1.v_blank = VAR_12 & 0xff;
 VAR_6->part1.v_high = (((VAR_9 >> 8) & 0xf) << 4) |
  ((VAR_12 >> 8) & 0xf);

 VAR_6->part2.h_sync_off = VAR_14 & 0xff;
 VAR_6->part2.h_sync_width = VAR_11 & 0xff;
 VAR_6->part2.v_sync_off_width = (VAR_15 & 0xf) << 4 |
  (VAR_13 & 0xf);
 VAR_6->part2.sync_off_width_high = ((VAR_14 & 0x300) >> 2) |
  ((VAR_11 & 0x300) >> 4) | ((VAR_15 & 0x30) >> 2) |
  ((VAR_13 & 0x30) >> 4);

 VAR_6->part2.dtd_flags = 0x18;
 if (VAR_7->flags & VAR_0)
  VAR_6->part2.dtd_flags |= VAR_4;
 if (VAR_7->flags & VAR_1)
  VAR_6->part2.dtd_flags |= VAR_3;
 if (VAR_7->flags & VAR_2)
  VAR_6->part2.dtd_flags |= VAR_5;

 VAR_6->part2.v_sync_off_high = VAR_15 & 0xc0;
}
