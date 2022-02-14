
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_pll {int reference_freq; int post_div; int reference_div; int flags; } ;
struct amdgpu_encoder {int encoder_id; } ;
struct TYPE_4__ {struct amdgpu_pll* ppll; } ;
struct amdgpu_device {TYPE_1__ clock; } ;
struct TYPE_5__ {int amount; int type; int step; scalar_t__ rate; scalar_t__ percentage_divider; scalar_t__ percentage; } ;
struct amdgpu_crtc {int bpc; int adjusted_clock; int pll_id; TYPE_2__ ss; int crtc_id; scalar_t__ ss_enabled; int pll_post_div; int pll_reference_div; int pll_flags; int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drm_crtc*,int ,int,int,int ,int,int,int,int,int,int,scalar_t__,TYPE_2__*) ;
 int FUNC_1 (struct amdgpu_device*,int ,int,int ,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_pll*,int,int*,int*,int*,int*,int*) ;
 struct amdgpu_crtc* FUNC_4 (struct drm_crtc*) ;
 struct amdgpu_encoder* FUNC_5 (int ) ;

void FUNC_6(struct drm_crtc *VAR_7, struct drm_display_mode *VAR_8)
{
 struct amdgpu_crtc *VAR_9 = FUNC_4(VAR_7);
 struct drm_device *VAR_10 = VAR_7->dev;
 struct amdgpu_device *VAR_11 = VAR_10->dev_private;
 struct amdgpu_encoder *VAR_12 =
  FUNC_5(VAR_9->encoder);
 u32 VAR_13 = VAR_8->clock;
 u32 VAR_14 = VAR_8->clock;
 u32 VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;
 struct amdgpu_pll *VAR_19;
 int VAR_20 = FUNC_2(VAR_9->encoder);


 if ((VAR_20 == VAR_2) &&
     (VAR_9->bpc > 8))
  VAR_14 = VAR_9->adjusted_clock;

 switch (VAR_9->pll_id) {
 case 130:
  VAR_19 = &VAR_11->clock.ppll[0];
  break;
 case 129:
  VAR_19 = &VAR_11->clock.ppll[1];
  break;
 case 131:
 case 128:
 default:
  VAR_19 = &VAR_11->clock.ppll[2];
  break;
 }


 VAR_19->flags = VAR_9->pll_flags;
 VAR_19->reference_div = VAR_9->pll_reference_div;
 VAR_19->post_div = VAR_9->pll_post_div;

 FUNC_3(VAR_19, VAR_9->adjusted_clock, &VAR_13,
       &VAR_16, &VAR_17, &VAR_15, &VAR_18);

 FUNC_1(VAR_11, VAR_0, VAR_9->pll_id,
     VAR_9->crtc_id, &VAR_9->ss);

 FUNC_0(VAR_7, VAR_9->crtc_id, VAR_9->pll_id,
      VAR_20, VAR_12->encoder_id, VAR_14,
      VAR_15, VAR_16, VAR_17, VAR_18,
      VAR_9->bpc, VAR_9->ss_enabled, &VAR_9->ss);

 if (VAR_9->ss_enabled) {

  u32 VAR_21;
  u32 VAR_22 = (((VAR_16 * 10) + VAR_17) *
         (u32)VAR_9->ss.percentage) /
   (100 * (u32)VAR_9->ss.percentage_divider);
  VAR_9->ss.amount = (VAR_22 / 10) & VAR_3;
  VAR_9->ss.amount |= ((VAR_22 - (VAR_22 / 10)) << VAR_5) &
   VAR_4;
  if (VAR_9->ss.type & VAR_6)
   VAR_21 = (4 * VAR_22 * VAR_15 * ((u32)VAR_9->ss.rate * 2048)) /
    (125 * 25 * VAR_19->reference_freq / 100);
  else
   VAR_21 = (2 * VAR_22 * VAR_15 * ((u32)VAR_9->ss.rate * 2048)) /
    (125 * 25 * VAR_19->reference_freq / 100);
  VAR_9->ss.step = VAR_21;

  FUNC_1(VAR_11, VAR_1, VAR_9->pll_id,
      VAR_9->crtc_id, &VAR_9->ss);
 }
}
