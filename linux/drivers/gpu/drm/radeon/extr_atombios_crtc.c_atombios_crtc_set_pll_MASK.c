
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct radeon_pll {int reference_freq; int post_div; int reference_div; int flags; } ;
struct radeon_encoder {int active_device; int encoder_id; } ;
struct TYPE_4__ {struct radeon_pll dcpll; struct radeon_pll p2pll; struct radeon_pll p1pll; } ;
struct radeon_device {TYPE_1__ clock; } ;
struct TYPE_5__ {int amount; int type; int step; scalar_t__ rate; scalar_t__ percentage_divider; scalar_t__ percentage; } ;
struct radeon_crtc {int bpc; int adjusted_clock; int pll_id; TYPE_2__ ss; int crtc_id; scalar_t__ ss_enabled; int pll_post_div; int pll_reference_div; int pll_flags; int encoder; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct drm_crtc*,int ,int,int,int ,int,int,int,int,int,int,scalar_t__,TYPE_2__*) ;
 int FUNC_4 (struct radeon_device*,int ,int,int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_pll*,int,int*,int*,int*,int*,int*) ;
 int FUNC_7 (struct radeon_pll*,int,int*,int*,int*,int*,int*) ;
 struct radeon_crtc* FUNC_8 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_8, struct drm_display_mode *VAR_9)
{
 struct radeon_crtc *VAR_10 = FUNC_8(VAR_8);
 struct drm_device *VAR_11 = VAR_8->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 =
  FUNC_9(VAR_10->encoder);
 u32 VAR_14 = VAR_9->clock;
 u32 VAR_15 = VAR_9->clock;
 u32 VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 struct radeon_pll *VAR_20;
 int VAR_21 = FUNC_5(VAR_10->encoder);


 if (FUNC_2(VAR_12) &&
     (VAR_21 == VAR_3) &&
     (VAR_10->bpc > 8))
  VAR_15 = VAR_10->adjusted_clock;

 switch (VAR_10->pll_id) {
 case 130:
  VAR_20 = &VAR_12->clock.p1pll;
  break;
 case 129:
  VAR_20 = &VAR_12->clock.p2pll;
  break;
 case 131:
 case 128:
 default:
  VAR_20 = &VAR_12->clock.dcpll;
  break;
 }


 VAR_20->flags = VAR_10->pll_flags;
 VAR_20->reference_div = VAR_10->pll_reference_div;
 VAR_20->post_div = VAR_10->pll_post_div;

 if (VAR_13->active_device & (VAR_0))

  FUNC_7(VAR_20, VAR_10->adjusted_clock, &VAR_14,
       &VAR_17, &VAR_18, &VAR_16, &VAR_19);
 else if (FUNC_0(VAR_12))
  FUNC_6(VAR_20, VAR_10->adjusted_clock, &VAR_14,
      &VAR_17, &VAR_18, &VAR_16, &VAR_19);
 else
  FUNC_7(VAR_20, VAR_10->adjusted_clock, &VAR_14,
       &VAR_17, &VAR_18, &VAR_16, &VAR_19);

 FUNC_4(VAR_12, VAR_1, VAR_10->pll_id,
     VAR_10->crtc_id, &VAR_10->ss);

 FUNC_3(VAR_8, VAR_10->crtc_id, VAR_10->pll_id,
      VAR_21, VAR_13->encoder_id, VAR_15,
      VAR_16, VAR_17, VAR_18, VAR_19,
      VAR_10->bpc, VAR_10->ss_enabled, &VAR_10->ss);

 if (VAR_10->ss_enabled) {

  if (FUNC_1(VAR_12)) {
   u32 VAR_22;
   u32 VAR_23 = (((VAR_17 * 10) + VAR_18) *
          (u32)VAR_10->ss.percentage) /
    (100 * (u32)VAR_10->ss.percentage_divider);
   VAR_10->ss.amount = (VAR_23 / 10) & VAR_4;
   VAR_10->ss.amount |= ((VAR_23 - (VAR_23 / 10)) << VAR_6) &
    VAR_5;
   if (VAR_10->ss.type & VAR_7)
    VAR_22 = (4 * VAR_23 * VAR_16 * ((u32)VAR_10->ss.rate * 2048)) /
     (125 * 25 * VAR_20->reference_freq / 100);
   else
    VAR_22 = (2 * VAR_23 * VAR_16 * ((u32)VAR_10->ss.rate * 2048)) /
     (125 * 25 * VAR_20->reference_freq / 100);
   VAR_10->ss.step = VAR_22;
  }

  FUNC_4(VAR_12, VAR_2, VAR_10->pll_id,
      VAR_10->crtc_id, &VAR_10->ss);
 }
}
