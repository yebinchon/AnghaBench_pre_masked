
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
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int) ;
 struct drm_connector* FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_connector*) ;
 struct radeon_connector* FUNC_5 (struct drm_connector*) ;
 struct radeon_crtc* FUNC_6 (int ) ;
 struct radeon_encoder* FUNC_7 (struct drm_encoder*) ;

void FUNC_8(struct drm_encoder *VAR_11)
{
 struct drm_device *VAR_12 = VAR_11->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;
 struct radeon_encoder *VAR_14 = FUNC_7(VAR_11);
 struct radeon_crtc *VAR_15 = FUNC_6(VAR_11->crtc);
 struct drm_connector *VAR_16 = FUNC_3(VAR_11);
 int VAR_17 = 0;
 u32 VAR_18 = 0;
 enum radeon_connector_dither VAR_19 = VAR_9;

 if (VAR_16) {
  struct radeon_connector *VAR_20 = FUNC_5(VAR_16);
  VAR_17 = FUNC_4(VAR_16);
  VAR_19 = VAR_20->dither;
 }


 if (VAR_14->devices & VAR_0)
  return;


 if ((VAR_14->encoder_id == VAR_1) ||
     (VAR_14->encoder_id == VAR_2))
  return;

 if (VAR_17 == 0)
  return;

 switch (VAR_17) {
 case 6:
  if (VAR_19 == VAR_10)

   VAR_18 |= (VAR_4 | VAR_5 |
    VAR_7 | FUNC_0(0));
  else
   VAR_18 |= (VAR_8 | FUNC_1(0));
  break;
 case 8:
  if (VAR_19 == VAR_10)

   VAR_18 |= (VAR_4 | VAR_5 |
    VAR_6 |
    VAR_7 | FUNC_0(1));
  else
   VAR_18 |= (VAR_8 | FUNC_1(1));
  break;
 case 10:
  if (VAR_19 == VAR_10)

   VAR_18 |= (VAR_4 | VAR_5 |
    VAR_6 |
    VAR_7 | FUNC_0(2));
  else
   VAR_18 |= (VAR_8 | FUNC_1(2));
  break;
 default:

  break;
 }

 FUNC_2(VAR_3 + VAR_15->crtc_offset, VAR_18);
}
