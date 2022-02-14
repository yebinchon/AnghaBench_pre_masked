
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct videomode {int vfront_porch; int vback_porch; int vsync_len; int hfront_porch; int hback_porch; int hsync_len; } ;
struct regmap {int dummy; } ;
struct drm_display_mode {int crtc_vsync_start; int crtc_vdisplay; int crtc_vtotal; int crtc_vsync_end; int crtc_hsync_start; int crtc_hdisplay; int crtc_htotal; int crtc_hsync_end; int crtc_clock; int flags; } ;
struct drm_crtc {TYPE_4__* state; } ;
struct atmel_hlcdc_crtc_state {int output_mode; } ;
struct atmel_hlcdc_crtc {TYPE_3__* dc; } ;
struct TYPE_8__ {struct drm_display_mode adjusted_mode; } ;
struct TYPE_7__ {TYPE_2__* hlcdc; TYPE_1__* desc; } ;
struct TYPE_6__ {int sys_clk; struct regmap* regmap; } ;
struct TYPE_5__ {int fixed_clksrc; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 struct atmel_hlcdc_crtc_state* FUNC_4 (TYPE_4__*) ;
 struct atmel_hlcdc_crtc* FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct regmap*,int ,unsigned int,unsigned int) ;
 int FUNC_7 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_15)
{
 struct atmel_hlcdc_crtc *VAR_16 = FUNC_5(VAR_15);
 struct regmap *VAR_17 = VAR_16->dc->hlcdc->regmap;
 struct drm_display_mode *VAR_18 = &VAR_15->state->adjusted_mode;
 struct atmel_hlcdc_crtc_state *VAR_19;
 unsigned long VAR_20;
 struct videomode VAR_21;
 unsigned long VAR_22;
 unsigned int VAR_23 = VAR_0 | VAR_1;
 unsigned int VAR_24 = 0;
 int VAR_25;

 VAR_21.vfront_porch = VAR_18->crtc_vsync_start - VAR_18->crtc_vdisplay;
 VAR_21.vback_porch = VAR_18->crtc_vtotal - VAR_18->crtc_vsync_end;
 VAR_21.vsync_len = VAR_18->crtc_vsync_end - VAR_18->crtc_vsync_start;
 VAR_21.hfront_porch = VAR_18->crtc_hsync_start - VAR_18->crtc_hdisplay;
 VAR_21.hback_porch = VAR_18->crtc_htotal - VAR_18->crtc_hsync_end;
 VAR_21.hsync_len = VAR_18->crtc_hsync_end - VAR_18->crtc_hsync_start;

 FUNC_7(VAR_17, FUNC_0(1),
       (VAR_21.hsync_len - 1) | ((VAR_21.vsync_len - 1) << 16));

 FUNC_7(VAR_17, FUNC_0(2),
       (VAR_21.vfront_porch - 1) | (VAR_21.vback_porch << 16));

 FUNC_7(VAR_17, FUNC_0(3),
       (VAR_21.hfront_porch - 1) | ((VAR_21.hback_porch - 1) << 16));

 FUNC_7(VAR_17, FUNC_0(4),
       (VAR_18->crtc_hdisplay - 1) |
       ((VAR_18->crtc_vdisplay - 1) << 16));

 if (!VAR_16->dc->desc->fixed_clksrc) {
  VAR_24 |= VAR_2;
  VAR_23 |= VAR_2;
 }

 VAR_22 = 2 * FUNC_3(VAR_16->dc->hlcdc->sys_clk);
 VAR_20 = VAR_18->crtc_clock * 1000;

 VAR_25 = FUNC_2(VAR_22, VAR_20);
 if (VAR_25 < 2) {
  VAR_25 = 2;
 } else if (FUNC_1(VAR_25) & ~VAR_0) {

  VAR_24 &= ~VAR_2;
  VAR_22 /= 2;
  VAR_25 = FUNC_2(VAR_22, VAR_20);
  if (FUNC_1(VAR_25) & ~VAR_0)
   VAR_25 = VAR_0;
 } else {
  int VAR_26 = VAR_22 / VAR_20;

  if (VAR_26 >= 2 &&
      ((VAR_22 / VAR_26 - VAR_20) <
       10 * (VAR_20 - VAR_22 / VAR_25)))





   VAR_25 = VAR_26;
 }

 VAR_24 |= FUNC_1(VAR_25);

 FUNC_6(VAR_17, FUNC_0(0), VAR_23, VAR_24);

 VAR_19 = FUNC_4(VAR_15->state);
 VAR_24 = VAR_19->output_mode << 8;

 if (VAR_18->flags & VAR_14)
  VAR_24 |= VAR_11;

 if (VAR_18->flags & VAR_13)
  VAR_24 |= VAR_6;

 FUNC_6(VAR_17, FUNC_0(5),
      VAR_6 | VAR_11 |
      VAR_9 | VAR_8 |
      VAR_4 | VAR_3 |
      VAR_12 | VAR_10 |
      VAR_5 | VAR_7,
      VAR_24);
}
