
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sync_off_width_high; int v_sync_off_width; int v_sync_off_high; int dtd_flags; scalar_t__ h_sync_width; scalar_t__ h_sync_off; } ;
struct TYPE_3__ {int h_high; int v_high; int clock; scalar_t__ v_blank; scalar_t__ v_active; scalar_t__ h_blank; scalar_t__ h_active; } ;
struct psb_intel_sdvo_dtd {TYPE_2__ part2; TYPE_1__ part1; } ;
struct drm_display_mode {int clock; int flags; scalar_t__ vtotal; scalar_t__ vdisplay; scalar_t__ vsync_end; scalar_t__ vsync_start; scalar_t__ htotal; scalar_t__ hdisplay; scalar_t__ hsync_end; scalar_t__ hsync_start; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct drm_display_mode * VAR_2,
      const struct psb_intel_sdvo_dtd *VAR_3)
{
 VAR_2->hdisplay = VAR_3->part1.h_active;
 VAR_2->hdisplay += ((VAR_3->part1.h_high >> 4) & 0x0f) << 8;
 VAR_2->hsync_start = VAR_2->hdisplay + VAR_3->part2.h_sync_off;
 VAR_2->hsync_start += (VAR_3->part2.sync_off_width_high & 0xc0) << 2;
 VAR_2->hsync_end = VAR_2->hsync_start + VAR_3->part2.h_sync_width;
 VAR_2->hsync_end += (VAR_3->part2.sync_off_width_high & 0x30) << 4;
 VAR_2->htotal = VAR_2->hdisplay + VAR_3->part1.h_blank;
 VAR_2->htotal += (VAR_3->part1.h_high & 0xf) << 8;

 VAR_2->vdisplay = VAR_3->part1.v_active;
 VAR_2->vdisplay += ((VAR_3->part1.v_high >> 4) & 0x0f) << 8;
 VAR_2->vsync_start = VAR_2->vdisplay;
 VAR_2->vsync_start += (VAR_3->part2.v_sync_off_width >> 4) & 0xf;
 VAR_2->vsync_start += (VAR_3->part2.sync_off_width_high & 0x0c) << 2;
 VAR_2->vsync_start += VAR_3->part2.v_sync_off_high & 0xc0;
 VAR_2->vsync_end = VAR_2->vsync_start +
  (VAR_3->part2.v_sync_off_width & 0xf);
 VAR_2->vsync_end += (VAR_3->part2.sync_off_width_high & 0x3) << 4;
 VAR_2->vtotal = VAR_2->vdisplay + VAR_3->part1.v_blank;
 VAR_2->vtotal += (VAR_3->part1.v_high & 0xf) << 8;

 VAR_2->clock = VAR_3->part1.clock * 10;

 VAR_2->flags &= ~(VAR_0 | VAR_1);
 if (VAR_3->part2.dtd_flags & 0x2)
  VAR_2->flags |= VAR_0;
 if (VAR_3->part2.dtd_flags & 0x4)
  VAR_2->flags |= VAR_1;
}
