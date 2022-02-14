
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_hdmi_acr {int n_32khz; int n_44_1khz; int n_48khz; int cts_48khz; int cts_44_1khz; int cts_32khz; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int bpc; } ;
struct drm_encoder {scalar_t__ crtc; struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,int) ;
 struct radeon_crtc* FUNC_4 (scalar_t__) ;

void FUNC_5(struct drm_encoder *VAR_9, long VAR_10,
 const struct radeon_hdmi_acr *VAR_11)
{
 struct drm_device *VAR_12 = VAR_9->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;
 int VAR_14 = 8;

 if (VAR_9->crtc) {
  struct radeon_crtc *VAR_15 = FUNC_4(VAR_9->crtc);
  VAR_14 = VAR_15->bpc;
 }

 if (VAR_14 > 8)
  FUNC_3(VAR_7 + VAR_10,
   VAR_6);
 else
  FUNC_3(VAR_7 + VAR_10,
   VAR_8 |
   VAR_6);

 FUNC_3(VAR_0 + VAR_10, FUNC_0(VAR_11->cts_32khz));
 FUNC_3(VAR_1 + VAR_10, VAR_11->n_32khz);

 FUNC_3(VAR_2 + VAR_10, FUNC_1(VAR_11->cts_44_1khz));
 FUNC_3(VAR_3 + VAR_10, VAR_11->n_44_1khz);

 FUNC_3(VAR_4 + VAR_10, FUNC_2(VAR_11->cts_48khz));
 FUNC_3(VAR_5 + VAR_10, VAR_11->n_48khz);
}
