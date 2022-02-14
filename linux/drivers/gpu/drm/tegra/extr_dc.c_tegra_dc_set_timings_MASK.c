
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dc {TYPE_1__* soc; } ;
struct drm_display_mode {int vsync_end; int vsync_start; int hsync_end; int hsync_start; int vtotal; int htotal; int vdisplay; int hdisplay; } ;
struct TYPE_2__ {int has_nvdisplay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tegra_dc*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_1(struct tegra_dc *VAR_6,
    struct drm_display_mode *VAR_7)
{
 unsigned int VAR_8 = 1;
 unsigned int VAR_9 = 1;
 unsigned long VAR_10;

 if (!VAR_6->soc->has_nvdisplay) {
  FUNC_0(VAR_6, 0x0, VAR_2);

  VAR_10 = (VAR_9 << 16) | VAR_8;
  FUNC_0(VAR_6, VAR_10, VAR_4);
 }

 VAR_10 = ((VAR_7->vsync_end - VAR_7->vsync_start) << 16) |
  ((VAR_7->hsync_end - VAR_7->hsync_start) << 0);
 FUNC_0(VAR_6, VAR_10, VAR_5);

 VAR_10 = ((VAR_7->vtotal - VAR_7->vsync_end) << 16) |
  ((VAR_7->htotal - VAR_7->hsync_end) << 0);
 FUNC_0(VAR_6, VAR_10, VAR_1);

 VAR_10 = ((VAR_7->vsync_start - VAR_7->vdisplay) << 16) |
  ((VAR_7->hsync_start - VAR_7->hdisplay) << 0);
 FUNC_0(VAR_6, VAR_10, VAR_3);

 VAR_10 = (VAR_7->vdisplay << 16) | VAR_7->hdisplay;
 FUNC_0(VAR_6, VAR_10, VAR_0);

 return 0;
}
