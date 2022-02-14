
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
struct radeon_encoder {int pixel_clock; } ;
struct TYPE_18__ {int atom_context; } ;
struct radeon_device {scalar_t__ family; TYPE_9__ mode_info; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (union dvo_encoder_control*,int ,int) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,int) ;
 struct radeon_encoder* FUNC_8 (struct drm_encoder*) ;

void
FUNC_9(struct drm_encoder *VAR_6, int VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 struct radeon_encoder *VAR_10 = FUNC_8(VAR_6);
 union dvo_encoder_control VAR_11;
 int VAR_12 = FUNC_1(VAR_3, VAR_4);
 uint8_t VAR_13, VAR_14;

 FUNC_5(&VAR_11, 0, sizeof(VAR_11));

 if (!FUNC_3(VAR_9->mode_info.atom_context, VAR_12, &VAR_13, &VAR_14))
  return;


 if (VAR_9->family <= VAR_2)
  VAR_13 = 1;

 switch (VAR_13) {
 case 1:
  switch (VAR_14) {
  case 1:

   VAR_11.ext_tmds.sXTmdsEncoder.ucEnable = VAR_7;

   if (FUNC_7(VAR_6, VAR_10->pixel_clock))
    VAR_11.ext_tmds.sXTmdsEncoder.ucMisc |= VAR_5;

   VAR_11.ext_tmds.sXTmdsEncoder.ucMisc |= VAR_1;
   break;
  case 2:

   VAR_11.dvo.sDVOEncoder.ucAction = VAR_7;
   VAR_11.dvo.sDVOEncoder.usPixelClock = FUNC_4(VAR_10->pixel_clock / 10);

   VAR_11.dvo.sDVOEncoder.ucDeviceType = VAR_0;

   if (FUNC_7(VAR_6, VAR_10->pixel_clock))
    VAR_11.dvo.sDVOEncoder.usDevAttr.sDigAttrib.ucAttribute |= VAR_5;
   break;
  case 3:

   VAR_11.dvo_v3.ucAction = VAR_7;
   VAR_11.dvo_v3.usPixelClock = FUNC_4(VAR_10->pixel_clock / 10);
   VAR_11.dvo_v3.ucDVOConfig = 0;
   break;
  case 4:

   VAR_11.dvo_v4.ucAction = VAR_7;
   VAR_11.dvo_v4.usPixelClock = FUNC_4(VAR_10->pixel_clock / 10);
   VAR_11.dvo_v4.ucDVOConfig = 0;
   VAR_11.dvo_v4.ucBitPerColor = FUNC_6(VAR_6);
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_13, VAR_14);
   break;
  }
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_13, VAR_14);
  break;
 }

 FUNC_2(VAR_9->mode_info.atom_context, VAR_12, (uint32_t *)&VAR_11);
}
