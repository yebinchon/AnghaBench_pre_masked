
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder {int devices; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_crtc {scalar_t__ crtc_offset; } ;
struct amdgpu_connector {int dither; } ;
typedef enum amdgpu_connector_dither { ____Placeholder_amdgpu_connector_dither } amdgpu_connector_dither ;


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
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct drm_connector*) ;
 struct drm_connector* FUNC_2 (struct drm_encoder*) ;
 scalar_t__ VAR_10 ;
 struct amdgpu_connector* FUNC_3 (struct drm_connector*) ;
 struct amdgpu_crtc* FUNC_4 (int ) ;
 struct amdgpu_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_6(struct drm_encoder *VAR_11)
{

 struct drm_device *VAR_12 = VAR_11->dev;
 struct amdgpu_device *VAR_13 = VAR_12->dev_private;
 struct amdgpu_encoder *VAR_14 = FUNC_5(VAR_11);
 struct drm_connector *VAR_15 = FUNC_2(VAR_11);
 struct amdgpu_crtc *VAR_16 = FUNC_4(VAR_11->crtc);
 int VAR_17 = 0;
 u32 VAR_18 = 0;
 enum amdgpu_connector_dither VAR_19 = VAR_0;

 if (VAR_15) {
  struct amdgpu_connector *VAR_20 = FUNC_3(VAR_15);
  VAR_17 = FUNC_1(VAR_15);
  VAR_19 = VAR_20->dither;
 }


 if (VAR_14->devices & VAR_2)
  return;

 if (VAR_17 == 0)
  return;


 switch (VAR_17) {
 case 6:
  if (VAR_19 == VAR_1)

   VAR_18 |= (VAR_3 |
    VAR_4 |
    VAR_7);
  else
   VAR_18 |= VAR_9;
  break;
 case 8:
  if (VAR_19 == VAR_1)

   VAR_18 |= (VAR_3 |
    VAR_4 |
    VAR_5 |
    VAR_7 |
    VAR_6);
  else
   VAR_18 |= (VAR_9 |
    VAR_8);
  break;
 case 10:
 default:

  break;
 }

 FUNC_0(VAR_10 + VAR_16->crtc_offset, VAR_18);
}
