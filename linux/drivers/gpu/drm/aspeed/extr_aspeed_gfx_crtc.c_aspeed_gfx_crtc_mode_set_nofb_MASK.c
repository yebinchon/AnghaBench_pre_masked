
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int crtc_clock; int flags; int hdisplay; int vsync_end; int vsync_start; scalar_t__ vdisplay; scalar_t__ vtotal; int hsync_end; scalar_t__ hsync_start; scalar_t__ htotal; } ;
struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_6__ {TYPE_2__ crtc; } ;
struct aspeed_gfx {scalar_t__ base; int pixel_clk; TYPE_3__ pipe; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (struct aspeed_gfx*,int*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct aspeed_gfx *VAR_14)
{
 struct drm_display_mode *VAR_15 = &VAR_14->pipe.crtc.state->adjusted_mode;
 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20;

 VAR_20 = FUNC_10(VAR_14, &VAR_19);
 if (VAR_20)
  return;







 VAR_16 = FUNC_12(VAR_14->base + VAR_0);
 VAR_16 &= ~(VAR_2 |
   VAR_1 |
   VAR_3);

 if (VAR_15->flags & VAR_10)
  VAR_16 |= VAR_2;

 if (!(VAR_15->flags & VAR_11))
  VAR_16 |= VAR_1;

 if (!(VAR_15->flags & VAR_12))
  VAR_16 |= VAR_3;

 FUNC_13(VAR_16, VAR_14->base + VAR_0);


 FUNC_13(FUNC_4(VAR_15->htotal - 1) | FUNC_1(VAR_15->hdisplay - 1),
   VAR_14->base + VAR_4);
 FUNC_13(FUNC_3(VAR_15->hsync_start - 1) | FUNC_2(VAR_15->hsync_end),
   VAR_14->base + VAR_5);



 FUNC_13(FUNC_9(VAR_15->vtotal - 1) | FUNC_6(VAR_15->vdisplay - 1),
   VAR_14->base + VAR_8);
 FUNC_13(FUNC_8(VAR_15->vsync_start) | FUNC_7(VAR_15->vsync_end),
   VAR_14->base + VAR_9);





 VAR_17 = VAR_15->hdisplay * VAR_19 / 8;
 VAR_18 = (VAR_15->hdisplay * VAR_19 + 127) / 128;
 FUNC_13(FUNC_0(VAR_17) | FUNC_5(VAR_18),
   VAR_14->base + VAR_6);





 FUNC_13(VAR_13, VAR_14->base + VAR_7);
}
