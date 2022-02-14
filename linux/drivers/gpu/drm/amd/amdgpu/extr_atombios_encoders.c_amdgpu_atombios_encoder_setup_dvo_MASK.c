
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {int ucAction; int ucBitPerColor; int ucDVOConfig; void* usPixelClock; } ;
struct TYPE_16__ {int ucAction; int ucDVOConfig; void* usPixelClock; } ;
struct TYPE_12__ {int ucAttribute; } ;
struct TYPE_13__ {TYPE_3__ sDigAttrib; } ;
struct TYPE_14__ {int ucAction; TYPE_4__ usDevAttr; int ucDeviceType; void* usPixelClock; } ;
struct TYPE_15__ {TYPE_5__ sDVOEncoder; } ;
struct TYPE_10__ {int ucEnable; int ucMisc; } ;
struct TYPE_11__ {TYPE_1__ sXTmdsEncoder; } ;
union dvo_encoder_control {TYPE_8__ dvo_v4; TYPE_7__ dvo_v3; TYPE_6__ dvo; TYPE_2__ ext_tmds; } ;
typedef int uint8_t ;
typedef int uint32_t ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder {int pixel_clock; } ;
struct TYPE_18__ {int atom_context; } ;
struct amdgpu_device {TYPE_9__ mode_info; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 int FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (union dvo_encoder_control*,int ,int) ;
 struct amdgpu_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_9(struct drm_encoder *VAR_5, int VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 struct amdgpu_encoder *VAR_9 = FUNC_8(VAR_5);
 union dvo_encoder_control VAR_10;
 int VAR_11 = FUNC_1(VAR_2, VAR_3);
 uint8_t VAR_12, VAR_13;

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));

 if (!FUNC_3(VAR_8->mode_info.atom_context, VAR_11, &VAR_12, &VAR_13))
  return;

 switch (VAR_12) {
 case 1:
  switch (VAR_13) {
  case 1:

   VAR_10.ext_tmds.sXTmdsEncoder.ucEnable = VAR_6;

   if (FUNC_5(VAR_5, VAR_9->pixel_clock))
    VAR_10.ext_tmds.sXTmdsEncoder.ucMisc |= VAR_4;

   VAR_10.ext_tmds.sXTmdsEncoder.ucMisc |= VAR_1;
   break;
  case 2:

   VAR_10.dvo.sDVOEncoder.ucAction = VAR_6;
   VAR_10.dvo.sDVOEncoder.usPixelClock = FUNC_6(VAR_9->pixel_clock / 10);

   VAR_10.dvo.sDVOEncoder.ucDeviceType = VAR_0;

   if (FUNC_5(VAR_5, VAR_9->pixel_clock))
    VAR_10.dvo.sDVOEncoder.usDevAttr.sDigAttrib.ucAttribute |= VAR_4;
   break;
  case 3:

   VAR_10.dvo_v3.ucAction = VAR_6;
   VAR_10.dvo_v3.usPixelClock = FUNC_6(VAR_9->pixel_clock / 10);
   VAR_10.dvo_v3.ucDVOConfig = 0;
   break;
  case 4:

   VAR_10.dvo_v4.ucAction = VAR_6;
   VAR_10.dvo_v4.usPixelClock = FUNC_6(VAR_9->pixel_clock / 10);
   VAR_10.dvo_v4.ucDVOConfig = 0;
   VAR_10.dvo_v4.ucBitPerColor = FUNC_4(VAR_5);
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_12, VAR_13);
   break;
  }
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_12, VAR_13);
  break;
 }

 FUNC_2(VAR_8->mode_info.atom_context, VAR_11, (uint32_t *)&VAR_10);
}
