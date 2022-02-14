
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ucEncoderID; int ucEncodeMode; int ucCRTC; } ;
union crtc_source_param {TYPE_1__ v2; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int atom_context; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct radeon_crtc {int crtc_id; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 int FUNC_4 (union crtc_source_param*,int ,int) ;
 struct radeon_crtc* FUNC_5 (int ) ;

void
FUNC_6(struct drm_encoder *VAR_10, int VAR_11)
{
 struct drm_device *VAR_12 = VAR_10->dev;
 struct radeon_device *VAR_13 = VAR_12->dev_private;
 struct radeon_crtc *VAR_14 = FUNC_5(VAR_10->crtc);
 int VAR_15 = FUNC_1(VAR_8, VAR_9);
 uint8_t VAR_16, VAR_17;
 union crtc_source_param VAR_18;

 FUNC_4(&VAR_18, 0, sizeof(VAR_18));

 if (!FUNC_3(VAR_13->mode_info.atom_context, VAR_15, &VAR_16, &VAR_17))
  return;

 if (VAR_16 != 1 && VAR_17 != 2)
  FUNC_0("Unknown table for MST %d, %d\n", VAR_16, VAR_17);

 VAR_18.v2.ucCRTC = VAR_14->crtc_id;
 VAR_18.v2.ucEncodeMode = VAR_7;

 switch (VAR_11) {
 case 0:
  VAR_18.v2.ucEncoderID = VAR_0;
  break;
 case 1:
  VAR_18.v2.ucEncoderID = VAR_1;
  break;
 case 2:
  VAR_18.v2.ucEncoderID = VAR_2;
  break;
 case 3:
  VAR_18.v2.ucEncoderID = VAR_3;
  break;
 case 4:
  VAR_18.v2.ucEncoderID = VAR_4;
  break;
 case 5:
  VAR_18.v2.ucEncoderID = VAR_5;
  break;
 case 6:
  VAR_18.v2.ucEncoderID = VAR_6;
  break;
 }
 FUNC_2(VAR_13->mode_info.atom_context, VAR_15, (uint32_t *)&VAR_18);
}
