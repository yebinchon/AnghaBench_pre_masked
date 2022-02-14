
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int clock; unsigned int hdisplay; unsigned int hsync_start; unsigned int hsync_end; unsigned int htotal; unsigned int vdisplay; unsigned int vsync_start; unsigned int vsync_end; unsigned int vtotal; int vrefresh; int type; int flags; } ;
struct drm_device {int dummy; } ;
struct displayid_detailed_timings_1 {int* pixel_clock; int* hactive; int* hblank; int* hsync; int* hsw; int* vactive; int* vblank; int* vsync; int* vsw; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_display_mode* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_display_mode*) ;
 int FUNC_2 (struct drm_display_mode*) ;

__attribute__((used)) static struct drm_display_mode *FUNC_3(struct drm_device *VAR_6,
           struct displayid_detailed_timings_1 *VAR_7)
{
 struct drm_display_mode *VAR_8;
 unsigned VAR_9 = (VAR_7->pixel_clock[0] |
    (VAR_7->pixel_clock[1] << 8) |
    (VAR_7->pixel_clock[2] << 16));
 unsigned VAR_10 = (VAR_7->hactive[0] | VAR_7->hactive[1] << 8) + 1;
 unsigned VAR_11 = (VAR_7->hblank[0] | VAR_7->hblank[1] << 8) + 1;
 unsigned VAR_12 = (VAR_7->hsync[0] | (VAR_7->hsync[1] & 0x7f) << 8) + 1;
 unsigned VAR_13 = (VAR_7->hsw[0] | VAR_7->hsw[1] << 8) + 1;
 unsigned VAR_14 = (VAR_7->vactive[0] | VAR_7->vactive[1] << 8) + 1;
 unsigned VAR_15 = (VAR_7->vblank[0] | VAR_7->vblank[1] << 8) + 1;
 unsigned VAR_16 = (VAR_7->vsync[0] | (VAR_7->vsync[1] & 0x7f) << 8) + 1;
 unsigned VAR_17 = (VAR_7->vsw[0] | VAR_7->vsw[1] << 8) + 1;
 bool VAR_18 = (VAR_7->hsync[1] >> 7) & 0x1;
 bool VAR_19 = (VAR_7->vsync[1] >> 7) & 0x1;
 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->clock = VAR_9 * 10;
 VAR_8->hdisplay = VAR_10;
 VAR_8->hsync_start = VAR_8->hdisplay + VAR_12;
 VAR_8->hsync_end = VAR_8->hsync_start + VAR_13;
 VAR_8->htotal = VAR_8->hdisplay + VAR_11;

 VAR_8->vdisplay = VAR_14;
 VAR_8->vsync_start = VAR_8->vdisplay + VAR_16;
 VAR_8->vsync_end = VAR_8->vsync_start + VAR_17;
 VAR_8->vtotal = VAR_8->vdisplay + VAR_15;

 VAR_8->flags = 0;
 VAR_8->flags |= VAR_18 ? VAR_2 : VAR_0;
 VAR_8->flags |= VAR_19 ? VAR_3 : VAR_1;
 VAR_8->type = VAR_4;

 if (VAR_7->flags & 0x80)
  VAR_8->type |= VAR_5;
 VAR_8->vrefresh = FUNC_2(VAR_8);
 FUNC_1(VAR_8);

 return VAR_8;
}
