
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sti_vtg_sync_params {long hsync; int vsync_line_top; int vsync_off_top; int vsync_line_bot; int vsync_off_bot; } ;
struct drm_display_mode {long htotal; long hsync_end; long hsync_start; int vsync_end; int vsync_start; int vtotal; } ;



__attribute__((used)) static void FUNC_0(struct sti_vtg_sync_params *VAR_0,
        int VAR_1,
        const struct drm_display_mode *VAR_2)
{
 long VAR_3, VAR_4, VAR_5;
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;

 VAR_3 = VAR_2->htotal;


 VAR_4 = 0;
 VAR_5 = VAR_2->hsync_end - VAR_2->hsync_start;

 VAR_4 += VAR_1;
 VAR_5 += VAR_1;

 if (VAR_4 < 0)
  VAR_4 += VAR_3;
 else if (VAR_4 >= VAR_3)
  VAR_4 -= VAR_3;

 if (VAR_5 < 0)
  VAR_5 += VAR_3;
 else if (VAR_5 >= VAR_3)
  VAR_5 -= VAR_3;

 VAR_0->hsync = (VAR_5 << 16) | VAR_4;


 if (VAR_1 >= 0) {
  VAR_6 = 1;
  VAR_7 = VAR_6;
  VAR_7 += VAR_2->vsync_end - VAR_2->vsync_start;

  VAR_9 = (u32)VAR_1;
  VAR_8 = (u32)VAR_1;
 } else {
  VAR_6 = VAR_2->vtotal;
  VAR_7 = VAR_2->vsync_end - VAR_2->vsync_start;

  VAR_9 = VAR_3 + VAR_1;
  VAR_8 = VAR_3 + VAR_1;
 }

 VAR_0->vsync_line_top = (VAR_7 << 16) | VAR_6;
 VAR_0->vsync_off_top = (VAR_9 << 16) | VAR_8;


 VAR_0->vsync_line_bot = VAR_0->vsync_line_top;
 VAR_0->vsync_off_bot = VAR_0->vsync_off_top;
}
