
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {TYPE_2__* crtc; } ;
struct exynos_dsi {int mode_flags; int dev; TYPE_4__* driver_data; TYPE_3__ encoder; } ;
struct drm_display_mode {scalar_t__ vdisplay; scalar_t__ hdisplay; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ htotal; scalar_t__ vtotal; } ;
struct TYPE_8__ {unsigned int num_bits_resol; } ;
struct TYPE_6__ {TYPE_1__* state; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,unsigned int) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_9 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct exynos_dsi*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct exynos_dsi *VAR_5)
{
 struct drm_display_mode *VAR_6 = &VAR_5->encoder.crtc->state->adjusted_mode;
 unsigned int VAR_7 = VAR_5->driver_data->num_bits_resol;
 u32 VAR_8;

 if (VAR_5->mode_flags & VAR_4) {
  VAR_8 = FUNC_0(0xf)
   | FUNC_8(VAR_6->vsync_start - VAR_6->vdisplay)
   | FUNC_5(VAR_6->vtotal - VAR_6->vsync_end);
  FUNC_10(VAR_5, VAR_3, VAR_8);

  VAR_8 = FUNC_2(VAR_6->hsync_start - VAR_6->hdisplay)
   | FUNC_1(VAR_6->htotal - VAR_6->hsync_end);
  FUNC_10(VAR_5, VAR_1, VAR_8);

  VAR_8 = FUNC_7(VAR_6->vsync_end - VAR_6->vsync_start)
   | FUNC_4(VAR_6->hsync_end - VAR_6->hsync_start);
  FUNC_10(VAR_5, VAR_2, VAR_8);
 }
 VAR_8 = FUNC_3(VAR_6->hdisplay, VAR_7) |
  FUNC_6(VAR_6->vdisplay, VAR_7);

 FUNC_10(VAR_5, VAR_0, VAR_8);

 FUNC_9(VAR_5->dev, "LCD size = %dx%d\n", VAR_6->hdisplay, VAR_6->vdisplay);
}
