
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct radeon_tv_mode_constants {int dummy; } ;
struct radeon_pll {int reference_freq; } ;
struct radeon_encoder_tv_dac {scalar_t__ tv_std; } ;
struct TYPE_3__ {int crtc; struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; struct radeon_encoder_tv_dac* enc_priv; } ;
struct TYPE_4__ {struct radeon_pll p1pll; struct radeon_pll p2pll; } ;
struct radeon_device {TYPE_2__ clock; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct radeon_tv_mode_constants* VAR_3 ;
 struct radeon_crtc* FUNC_0 (int ) ;

__attribute__((used)) static const struct radeon_tv_mode_constants *FUNC_1(struct radeon_encoder *VAR_4,
             uint16_t *VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->base.dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 struct radeon_crtc *VAR_8;
 struct radeon_encoder_tv_dac *VAR_9 = VAR_4->enc_priv;
 const struct radeon_tv_mode_constants *VAR_10;
 struct radeon_pll *VAR_11;

 VAR_8 = FUNC_0(VAR_4->base.crtc);
 if (VAR_8->crtc_id == 1)
  VAR_11 = &VAR_7->clock.p2pll;
 else
  VAR_11 = &VAR_7->clock.p1pll;

 if (VAR_5)
  *VAR_5 = VAR_11->reference_freq;

 if (VAR_9->tv_std == VAR_0 ||
     VAR_9->tv_std == VAR_1 ||
     VAR_9->tv_std == VAR_2) {
  if (VAR_11->reference_freq == 2700)
   VAR_10 = &VAR_3[0];
  else
   VAR_10 = &VAR_3[2];
 } else {
  if (VAR_11->reference_freq == 2700)
   VAR_10 = &VAR_3[1];
  else
   VAR_10 = &VAR_3[3];
 }
 return VAR_10;
}
