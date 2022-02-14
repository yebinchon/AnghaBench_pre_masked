
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intf_timing_params {scalar_t__ width; scalar_t__ height; scalar_t__ xres; scalar_t__ yres; scalar_t__ h_back_porch; scalar_t__ h_front_porch; scalar_t__ v_back_porch; scalar_t__ v_front_porch; scalar_t__ hsync_pulse_width; scalar_t__ vsync_pulse_width; int hsync_polarity; int vsync_polarity; int underflow_clr; int hsync_skew; scalar_t__ border_clr; } ;
struct drm_display_mode {scalar_t__ htotal; scalar_t__ hsync_end; scalar_t__ hsync_start; scalar_t__ hdisplay; scalar_t__ vtotal; scalar_t__ vsync_end; scalar_t__ vsync_start; scalar_t__ vdisplay; int flags; int hskew; } ;
struct dpu_encoder_phys {TYPE_2__* hw_intf; } ;
struct TYPE_4__ {TYPE_1__* cap; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct intf_timing_params*,int ,int) ;

__attribute__((used)) static void FUNC_2(
  const struct dpu_encoder_phys *VAR_3,
  const struct drm_display_mode *VAR_4,
  struct intf_timing_params *VAR_5)
{
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 if ((VAR_4->htotal < VAR_4->hsync_end)
   || (VAR_4->hsync_start < VAR_4->hdisplay)
   || (VAR_4->vtotal < VAR_4->vsync_end)
   || (VAR_4->vsync_start < VAR_4->vdisplay)
   || (VAR_4->hsync_end < VAR_4->hsync_start)
   || (VAR_4->vsync_end < VAR_4->vsync_start)) {
  FUNC_0(
      "invalid params - hstart:%d,hend:%d,htot:%d,hdisplay:%d\n",
    VAR_4->hsync_start, VAR_4->hsync_end,
    VAR_4->htotal, VAR_4->hdisplay);
  FUNC_0("vstart:%d,vend:%d,vtot:%d,vdisplay:%d\n",
    VAR_4->vsync_start, VAR_4->vsync_end,
    VAR_4->vtotal, VAR_4->vdisplay);
  return;
 }
 VAR_5->width = VAR_4->hdisplay;
 VAR_5->height = VAR_4->vdisplay;
 VAR_5->xres = VAR_5->width;
 VAR_5->yres = VAR_5->height;
 VAR_5->h_back_porch = VAR_4->htotal - VAR_4->hsync_end;
 VAR_5->h_front_porch = VAR_4->hsync_start - VAR_4->hdisplay;
 VAR_5->v_back_porch = VAR_4->vtotal - VAR_4->vsync_end;
 VAR_5->v_front_porch = VAR_4->vsync_start - VAR_4->vdisplay;
 VAR_5->hsync_pulse_width = VAR_4->hsync_end - VAR_4->hsync_start;
 VAR_5->vsync_pulse_width = VAR_4->vsync_end - VAR_4->vsync_start;
 VAR_5->hsync_polarity = (VAR_4->flags & VAR_0) ? 1 : 0;
 VAR_5->vsync_polarity = (VAR_4->flags & VAR_1) ? 1 : 0;
 VAR_5->border_clr = 0;
 VAR_5->underflow_clr = 0xff;
 VAR_5->hsync_skew = VAR_4->hskew;


 if (VAR_3->hw_intf->cap->type == VAR_2) {
  VAR_5->hsync_polarity = 0;
  VAR_5->vsync_polarity = 0;
 }
}
