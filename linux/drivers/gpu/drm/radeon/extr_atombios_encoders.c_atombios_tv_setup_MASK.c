
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder_atom_dac {int tv_std; } ;
struct radeon_encoder {int active_device; int pixel_clock; struct radeon_encoder_atom_dac* enc_priv; } ;
struct TYPE_6__ {int atom_context; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;
struct TYPE_5__ {int ucAction; int usPixelClock; void* ucTvStandard; } ;
struct TYPE_7__ {TYPE_1__ sTVEncoder; } ;
typedef TYPE_3__ TV_ENCODER_CONTROL_PS_ALLOCATION ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 struct radeon_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_5(struct drm_encoder *VAR_11, int VAR_12)
{
 struct drm_device *VAR_13 = VAR_11->dev;
 struct radeon_device *VAR_14 = VAR_13->dev_private;
 struct radeon_encoder *VAR_15 = FUNC_4(VAR_11);
 TV_ENCODER_CONTROL_PS_ALLOCATION VAR_16;
 int VAR_17 = 0;
 struct radeon_encoder_atom_dac *VAR_18 = VAR_15->enc_priv;

 FUNC_3(&VAR_16, 0, sizeof(VAR_16));

 VAR_17 = FUNC_0(VAR_9, VAR_10);

 VAR_16.sTVEncoder.ucAction = VAR_12;

 if (VAR_15->active_device & (VAR_0))
  VAR_16.sTVEncoder.ucTvStandard = VAR_1;
 else {
  switch (VAR_18->tv_std) {
  case 135:
   VAR_16.sTVEncoder.ucTvStandard = VAR_2;
   break;
  case 133:
   VAR_16.sTVEncoder.ucTvStandard = VAR_4;
   break;
  case 130:
   VAR_16.sTVEncoder.ucTvStandard = VAR_7;
   break;
  case 132:
   VAR_16.sTVEncoder.ucTvStandard = VAR_5;
   break;
  case 134:
   VAR_16.sTVEncoder.ucTvStandard = VAR_3;
   break;
  case 129:
   VAR_16.sTVEncoder.ucTvStandard = VAR_4;
   break;
  case 128:
   VAR_16.sTVEncoder.ucTvStandard = VAR_8;
   break;
  case 131:
   VAR_16.sTVEncoder.ucTvStandard = VAR_6;
   break;
  default:
   VAR_16.sTVEncoder.ucTvStandard = VAR_2;
   break;
  }
 }

 VAR_16.sTVEncoder.usPixelClock = FUNC_2(VAR_15->pixel_clock / 10);

 FUNC_1(VAR_14->mode_info.atom_context, VAR_17, (uint32_t *)&VAR_16);

}
