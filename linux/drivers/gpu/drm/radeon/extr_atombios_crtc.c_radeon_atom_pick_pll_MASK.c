
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_encoder_atom_dig {int linkb; } ;
struct radeon_encoder {scalar_t__ encoder_id; struct radeon_encoder_atom_dig* enc_priv; } ;
struct TYPE_2__ {scalar_t__ dp_extclk; } ;
struct radeon_device {scalar_t__ family; TYPE_1__ clock; } ;
struct radeon_crtc {int crtc_id; int encoder; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct drm_crtc*) ;
 int FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (struct drm_crtc*) ;
 struct radeon_crtc* FUNC_12 (struct drm_crtc*) ;
 struct radeon_encoder* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct drm_crtc *VAR_8)
{
 struct radeon_crtc *VAR_9 = FUNC_12(VAR_8);
 struct drm_device *VAR_10 = VAR_8->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_encoder *VAR_12 =
  FUNC_13(VAR_9->encoder);
 u32 VAR_13;
 int VAR_14;

 if (FUNC_5(VAR_11)) {
  if (FUNC_7(FUNC_8(VAR_9->encoder))) {
   if (VAR_11->clock.dp_extclk)

    return VAR_4;
   else {

    VAR_14 = FUNC_10(VAR_8);
    if (VAR_14 != VAR_4)
     return VAR_14;
   }
  } else {

   VAR_14 = FUNC_11(VAR_8);
   if (VAR_14 != VAR_4)
    return VAR_14;
  }

  if ((VAR_11->family == VAR_5) ||
      (VAR_11->family == VAR_6)) {

   VAR_13 = FUNC_9(VAR_8);
   if (!(VAR_13 & (1 << VAR_3)))
    return VAR_3;
   if (!(VAR_13 & (1 << VAR_2)))
    return VAR_2;
   FUNC_6("unable to allocate a PPLL\n");
   return VAR_4;
  } else {

   VAR_13 = FUNC_9(VAR_8);
   if (!(VAR_13 & (1 << VAR_3)))
    return VAR_3;
   if (!(VAR_13 & (1 << VAR_2)))
    return VAR_2;
   if (!(VAR_13 & (1 << VAR_1)))
    return VAR_1;
   FUNC_6("unable to allocate a PPLL\n");
   return VAR_4;
  }
 } else if (FUNC_4(VAR_11)) {
  struct radeon_encoder_atom_dig *VAR_15 =
   VAR_12->enc_priv;

  if ((VAR_12->encoder_id == VAR_7) &&
      (VAR_15->linkb == 0))

   return VAR_3;
  else if (FUNC_7(FUNC_8(VAR_9->encoder))) {

   if (VAR_11->clock.dp_extclk)

    return VAR_4;
   else {

    VAR_14 = FUNC_10(VAR_8);
    if (VAR_14 != VAR_4)
     return VAR_14;
   }
  } else {

   VAR_14 = FUNC_11(VAR_8);
   if (VAR_14 != VAR_4)
    return VAR_14;
  }

  VAR_13 = FUNC_9(VAR_8);
  if (!(VAR_13 & (1 << VAR_1)))
   return VAR_1;
  if (!(VAR_13 & (1 << VAR_2)))
   return VAR_2;
  FUNC_6("unable to allocate a PPLL\n");
  return VAR_4;
 } else if (FUNC_1(VAR_11)) {

  if (FUNC_7(FUNC_8(VAR_9->encoder))) {
   if (VAR_11->clock.dp_extclk)

    return VAR_4;
  }
  VAR_13 = FUNC_9(VAR_8);
  if (!(VAR_13 & (1 << VAR_2)))
   return VAR_2;
  if (!(VAR_13 & (1 << VAR_3)))
   return VAR_3;
  FUNC_6("unable to allocate a PPLL\n");
  return VAR_4;
 } else if (FUNC_0(VAR_11)) {
  if (FUNC_7(FUNC_8(VAR_9->encoder))) {
   if (VAR_11->clock.dp_extclk)

    return VAR_4;
   else if (FUNC_3(VAR_11))

    return VAR_1;
   else if (FUNC_2(VAR_11))

    return VAR_0;
   else {

    VAR_14 = FUNC_10(VAR_8);
    if (VAR_14 != VAR_4)
     return VAR_14;
   }
  } else {

   VAR_14 = FUNC_11(VAR_8);
   if (VAR_14 != VAR_4)
    return VAR_14;
  }

  VAR_13 = FUNC_9(VAR_8);
  if (!(VAR_13 & (1 << VAR_2)))
   return VAR_2;
  if (!(VAR_13 & (1 << VAR_3)))
   return VAR_3;
  FUNC_6("unable to allocate a PPLL\n");
  return VAR_4;
 } else {
  return VAR_9->crtc_id;
 }
}
