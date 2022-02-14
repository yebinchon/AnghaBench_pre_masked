
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder {int devices; scalar_t__ encoder_id; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;
struct amdgpu_connector {int dither; } ;
typedef enum amdgpu_connector_dither { ____Placeholder_amdgpu_connector_dither } amdgpu_connector_dither ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct drm_connector*) ;
 struct drm_connector* FUNC_3 (struct drm_encoder*) ;
 scalar_t__ VAR_13 ;
 struct amdgpu_connector* FUNC_4 (struct drm_connector*) ;
 struct amdgpu_crtc* FUNC_5 (int ) ;
 struct amdgpu_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_7(struct drm_encoder *VAR_14)
{
 struct drm_device *VAR_15 = VAR_14->dev;
 struct amdgpu_device *VAR_16 = VAR_15->dev_private;
 struct amdgpu_encoder *VAR_17 = FUNC_6(VAR_14);
 struct amdgpu_crtc *VAR_18 = FUNC_5(VAR_14->crtc);
 struct drm_connector *VAR_19 = FUNC_3(VAR_14);
 int VAR_20 = 0;
 u32 VAR_21 = 0;
 enum amdgpu_connector_dither VAR_22 = VAR_0;

 if (VAR_19) {
  struct amdgpu_connector *VAR_23 = FUNC_4(VAR_19);
  VAR_20 = FUNC_2(VAR_19);
  VAR_22 = VAR_23->dither;
 }


 if (VAR_17->devices & VAR_2)
  return;


 if ((VAR_17->encoder_id == VAR_3) ||
     (VAR_17->encoder_id == VAR_4))
  return;

 if (VAR_20 == 0)
  return;

 switch (VAR_20) {
 case 6:
  if (VAR_22 == VAR_1) {

   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_6, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_7, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_10, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_9, 0);
  } else {
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_12, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_11, 0);
  }
  break;
 case 8:
  if (VAR_22 == VAR_1) {

   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_6, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_7, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_8, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_10, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_9, 1);
  } else {
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_12, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_11, 1);
  }
  break;
 case 10:
  if (VAR_22 == VAR_1) {

   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_6, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_7, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_8, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_10, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_9, 2);
  } else {
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_12, 1);
   VAR_21 = FUNC_0(VAR_21, VAR_5, VAR_11, 2);
  }
  break;
 default:

  break;
 }

 FUNC_1(VAR_13 + VAR_18->crtc_offset, VAR_21);
}
