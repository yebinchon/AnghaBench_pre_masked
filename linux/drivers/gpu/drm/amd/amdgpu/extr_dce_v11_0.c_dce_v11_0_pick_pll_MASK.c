
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct amdgpu_encoder_atom_dig {int linkb; } ;
struct amdgpu_encoder {int encoder_id; struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct TYPE_2__ {scalar_t__ dp_extclk; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ clock; } ;
struct amdgpu_crtc {int encoder; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 struct amdgpu_crtc* FUNC_6 (struct drm_crtc*) ;
 struct amdgpu_encoder* FUNC_7 (int ) ;

__attribute__((used)) static u32 FUNC_8(struct drm_crtc *VAR_17)
{
 struct amdgpu_crtc *VAR_18 = FUNC_6(VAR_17);
 struct drm_device *VAR_19 = VAR_17->dev;
 struct amdgpu_device *VAR_20 = VAR_19->dev_private;
 u32 VAR_21;
 int VAR_22;

 if ((VAR_20->asic_type == VAR_12) ||
     (VAR_20->asic_type == VAR_13) ||
     (VAR_20->asic_type == VAR_14) ||
     (VAR_20->asic_type == VAR_16)) {
  struct amdgpu_encoder *VAR_23 =
   FUNC_7(VAR_18->encoder);
  struct amdgpu_encoder_atom_dig *VAR_24 = VAR_23->enc_priv;

  if (FUNC_1(FUNC_2(VAR_18->encoder)))
   return VAR_6;

  switch (VAR_23->encoder_id) {
  case 130:
   if (VAR_24->linkb)
    return VAR_1;
   else
    return VAR_0;
   break;
  case 129:
   if (VAR_24->linkb)
    return VAR_3;
   else
    return VAR_2;
   break;
  case 128:
   if (VAR_24->linkb)
    return VAR_5;
   else
    return VAR_4;
   break;
  default:
   FUNC_0("invalid encoder_id: 0x%x\n", VAR_23->encoder_id);
   return VAR_10;
  }
 }

 if (FUNC_1(FUNC_2(VAR_18->encoder))) {
  if (VAR_20->clock.dp_extclk)

   return VAR_10;
  else {

   VAR_22 = FUNC_3(VAR_17);
   if (VAR_22 != VAR_10)
    return VAR_22;
  }
 } else {

  VAR_22 = FUNC_4(VAR_17);
  if (VAR_22 != VAR_10)
   return VAR_22;
 }


 VAR_21 = FUNC_5(VAR_17);
 if (VAR_20->asic_type == VAR_11 || VAR_20->asic_type == VAR_15) {
  if (!(VAR_21 & (1 << VAR_8)))
   return VAR_8;
  if (!(VAR_21 & (1 << VAR_7)))
   return VAR_7;
  FUNC_0("unable to allocate a PPLL\n");
  return VAR_10;
 } else {
  if (!(VAR_21 & (1 << VAR_9)))
   return VAR_9;
  if (!(VAR_21 & (1 << VAR_8)))
   return VAR_8;
  if (!(VAR_21 & (1 << VAR_7)))
   return VAR_7;
  FUNC_0("unable to allocate a PPLL\n");
  return VAR_10;
 }
 return VAR_10;
}
