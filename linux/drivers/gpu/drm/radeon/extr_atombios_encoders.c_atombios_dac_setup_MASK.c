
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder_atom_dac {int tv_std; } ;
struct radeon_encoder {int encoder_id; int active_device; int pixel_clock; struct radeon_encoder_atom_dac* enc_priv; } ;
struct TYPE_4__ {int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int args ;
struct TYPE_5__ {int ucAction; int usPixelClock; int ucDacStandard; } ;
typedef TYPE_2__ DAC_ENCODER_CONTROL_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 struct radeon_encoder* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_5(struct drm_encoder *VAR_9, int VAR_10)
{
 struct drm_device *VAR_11 = VAR_9->dev;
 struct radeon_device *VAR_12 = VAR_11->dev_private;
 struct radeon_encoder *VAR_13 = FUNC_4(VAR_9);
 DAC_ENCODER_CONTROL_PS_ALLOCATION VAR_14;
 int VAR_15 = 0;
 struct radeon_encoder_atom_dac *VAR_16 = VAR_13->enc_priv;

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));

 switch (VAR_13->encoder_id) {
 case 139:
 case 137:
  VAR_15 = FUNC_0(VAR_6, VAR_7);
  break;
 case 138:
 case 136:
  VAR_15 = FUNC_0(VAR_6, VAR_8);
  break;
 }

 VAR_14.ucAction = VAR_10;

 if (VAR_13->active_device & (VAR_4))
  VAR_14.ucDacStandard = VAR_3;
 else if (VAR_13->active_device & (VAR_5))
  VAR_14.ucDacStandard = VAR_0;
 else {
  switch (VAR_16->tv_std) {
  case 133:
  case 130:
  case 129:
  case 128:
  case 131:
   VAR_14.ucDacStandard = VAR_2;
   break;
  case 135:
  case 134:
  case 132:
  default:
   VAR_14.ucDacStandard = VAR_1;
   break;
  }
 }
 VAR_14.usPixelClock = FUNC_2(VAR_13->pixel_clock / 10);

 FUNC_1(VAR_12->mode_info.atom_context, VAR_15, (uint32_t *)&VAR_14);

}
