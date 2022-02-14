
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct radeon_encoder_primary_dac {int ps2_pdac_adj; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {TYPE_2__* pdev; struct radeon_device* dev_private; } ;
struct TYPE_4__ {int device; int subsystem_vendor; int subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 struct radeon_encoder_primary_dac* FUNC_2 (int,int ) ;
 int FUNC_3 (struct radeon_device*,struct radeon_encoder_primary_dac*) ;

struct radeon_encoder_primary_dac *FUNC_4(struct
               radeon_encoder
               *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct radeon_device *VAR_4 = VAR_3->dev_private;
 uint16_t VAR_5;
 uint8_t VAR_6, VAR_7, VAR_8;
 struct radeon_encoder_primary_dac *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 VAR_9 = FUNC_2(sizeof(struct radeon_encoder_primary_dac),
   VAR_1);

 if (!VAR_9)
  return ((void*)0);


 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_5) & 0x3;
  if (VAR_6 < 2) {
   VAR_7 = FUNC_0(VAR_5 + 0x2) & 0xf;
   VAR_8 = (FUNC_0(VAR_5 + 0x2) >> 4) & 0xf;
   VAR_9->ps2_pdac_adj = (VAR_7 << 8) | (VAR_8);
  } else {
   VAR_7 = FUNC_0(VAR_5 + 0x2) & 0xf;
   VAR_8 = FUNC_0(VAR_5 + 0x3) & 0xf;
   VAR_9->ps2_pdac_adj = (VAR_7 << 8) | (VAR_8);
  }

  if ((VAR_8 == 0) || (VAR_7 == 0))
   VAR_10 = 0;
  else
   VAR_10 = 1;
 }



 if (((VAR_3->pdev->device == 0x5159) &&
     (VAR_3->pdev->subsystem_vendor == 0x174B) &&
     (VAR_3->pdev->subsystem_device == 0x7c28)) ||

    ((VAR_3->pdev->device == 0x514D) &&
     (VAR_3->pdev->subsystem_vendor == 0x174B) &&
     (VAR_3->pdev->subsystem_device == 0x7149))) {

  VAR_10 = 0;
 }

 if (!VAR_10)
  FUNC_3(VAR_4, VAR_9);

 return VAR_9;
}
