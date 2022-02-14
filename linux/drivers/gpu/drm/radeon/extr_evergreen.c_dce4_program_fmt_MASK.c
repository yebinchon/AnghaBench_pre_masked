
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (scalar_t__,int) ;
 struct drm_connector* FUNC_1 (struct drm_encoder*) ;
 int FUNC_2 (struct drm_connector*) ;
 struct radeon_connector* FUNC_3 (struct drm_connector*) ;
 struct radeon_crtc* FUNC_4 (int ) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

void FUNC_6(struct drm_encoder *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->dev;
 struct radeon_device *VAR_15 = VAR_14->dev_private;
 struct radeon_encoder *VAR_16 = FUNC_5(VAR_13);
 struct radeon_crtc *VAR_17 = FUNC_4(VAR_13->crtc);
 struct drm_connector *VAR_18 = FUNC_1(VAR_13);
 int VAR_19 = 0;
 u32 VAR_20 = 0;
 enum radeon_connector_dither VAR_21 = VAR_11;

 if (VAR_18) {
  struct radeon_connector *VAR_22 = FUNC_3(VAR_18);
  VAR_19 = FUNC_2(VAR_18);
  VAR_21 = VAR_22->dither;
 }


 if (VAR_16->devices & VAR_0)
  return;


 if ((VAR_16->encoder_id == VAR_1) ||
     (VAR_16->encoder_id == VAR_2))
  return;

 if (VAR_19 == 0)
  return;

 switch (VAR_19) {
 case 6:
  if (VAR_21 == VAR_12)

   VAR_20 |= (VAR_4 | VAR_5 |
    VAR_8);
  else
   VAR_20 |= VAR_10;
  break;
 case 8:
  if (VAR_21 == VAR_12)

   VAR_20 |= (VAR_4 | VAR_5 |
    VAR_6 |
    VAR_8 | VAR_7);
  else
   VAR_20 |= (VAR_10 | VAR_9);
  break;
 case 10:
 default:

  break;
 }

 FUNC_0(VAR_3 + VAR_17->crtc_offset, VAR_20);
}
