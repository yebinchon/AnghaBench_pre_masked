
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sync_off_width_high; int v_sync_off_width; int v_sync_off_high; int dtd_flags; scalar_t__ h_sync_width; scalar_t__ h_sync_off; } ;
struct TYPE_3__ {int h_high; int v_high; int clock; scalar_t__ v_blank; scalar_t__ v_active; scalar_t__ h_blank; scalar_t__ h_active; } ;
struct intel_sdvo_dtd {TYPE_2__ part2; TYPE_1__ part1; } ;
struct drm_display_mode {int clock; int flags; scalar_t__ vtotal; scalar_t__ vdisplay; scalar_t__ vsync_end; scalar_t__ vsync_start; scalar_t__ htotal; scalar_t__ hdisplay; scalar_t__ hsync_end; scalar_t__ hsync_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_1 (struct drm_display_mode*,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_display_mode *VAR_8,
      const struct intel_sdvo_dtd *VAR_9)
{
 struct drm_display_mode VAR_10 = {};

 VAR_10.hdisplay = VAR_9->part1.h_active;
 VAR_10.hdisplay += ((VAR_9->part1.h_high >> 4) & 0x0f) << 8;
 VAR_10.hsync_start = VAR_10.hdisplay + VAR_9->part2.h_sync_off;
 VAR_10.hsync_start += (VAR_9->part2.sync_off_width_high & 0xc0) << 2;
 VAR_10.hsync_end = VAR_10.hsync_start + VAR_9->part2.h_sync_width;
 VAR_10.hsync_end += (VAR_9->part2.sync_off_width_high & 0x30) << 4;
 VAR_10.htotal = VAR_10.hdisplay + VAR_9->part1.h_blank;
 VAR_10.htotal += (VAR_9->part1.h_high & 0xf) << 8;

 VAR_10.vdisplay = VAR_9->part1.v_active;
 VAR_10.vdisplay += ((VAR_9->part1.v_high >> 4) & 0x0f) << 8;
 VAR_10.vsync_start = VAR_10.vdisplay;
 VAR_10.vsync_start += (VAR_9->part2.v_sync_off_width >> 4) & 0xf;
 VAR_10.vsync_start += (VAR_9->part2.sync_off_width_high & 0x0c) << 2;
 VAR_10.vsync_start += VAR_9->part2.v_sync_off_high & 0xc0;
 VAR_10.vsync_end = VAR_10.vsync_start +
  (VAR_9->part2.v_sync_off_width & 0xf);
 VAR_10.vsync_end += (VAR_9->part2.sync_off_width_high & 0x3) << 4;
 VAR_10.vtotal = VAR_10.vdisplay + VAR_9->part1.v_blank;
 VAR_10.vtotal += (VAR_9->part1.v_high & 0xf) << 8;

 VAR_10.clock = VAR_9->part1.clock * 10;

 if (VAR_9->part2.dtd_flags & VAR_6)
  VAR_10.flags |= VAR_0;
 if (VAR_9->part2.dtd_flags & VAR_5)
  VAR_10.flags |= VAR_3;
 else
  VAR_10.flags |= VAR_1;
 if (VAR_9->part2.dtd_flags & VAR_7)
  VAR_10.flags |= VAR_4;
 else
  VAR_10.flags |= VAR_2;

 FUNC_1(&VAR_10, 0);

 FUNC_0(VAR_8, &VAR_10);
}
