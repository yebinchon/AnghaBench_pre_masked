
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_encoder {int devices; scalar_t__ encoder_id; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;
struct radeon_connector {int dither; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
typedef enum radeon_connector_dither { ____Placeholder_radeon_connector_dither } radeon_connector_dither ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,int) ;
 struct drm_connector* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;
 struct radeon_crtc* FUNC_4 (int ) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

void FUNC_6(struct drm_encoder *VAR_10)
{
 struct drm_device *VAR_11 = VAR_10->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 = FUNC_5(VAR_10);
 struct radeon_crtc *VAR_14 = FUNC_4(VAR_10->crtc);
 struct drm_connector *VAR_15 = FUNC_1(VAR_10);
 int VAR_16 = 0;
 u32 VAR_17 = 0;
 enum radeon_connector_dither VAR_18 = VAR_8;

 if (VAR_15) {
  struct radeon_connector *VAR_19 = FUNC_3(VAR_15);
  VAR_16 = FUNC_2(VAR_15);
  VAR_18 = VAR_19->dither;
 }


 if (VAR_13->devices & VAR_0)
  return;


 if ((VAR_13->encoder_id == VAR_1) ||
     (VAR_13->encoder_id == VAR_2))
  return;

 if (VAR_16 == 0)
  return;

 switch (VAR_16) {
 case 6:
  if (VAR_18 == VAR_9)

   VAR_17 |= VAR_5;
  else
   VAR_17 |= VAR_7;
  break;
 case 8:
  if (VAR_18 == VAR_9)

   VAR_17 |= (VAR_5 | VAR_4);
  else
   VAR_17 |= (VAR_7 | VAR_6);
  break;
 case 10:
 default:

  break;
 }

 FUNC_0(VAR_3 + VAR_14->crtc_offset, VAR_17);
}
