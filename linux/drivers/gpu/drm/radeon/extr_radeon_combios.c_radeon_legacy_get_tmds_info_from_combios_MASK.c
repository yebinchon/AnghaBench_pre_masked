
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct radeon_encoder_int_tmds {TYPE_2__* tmds_pll; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_4__ {void* value; void* freq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct drm_device*,int ) ;

bool FUNC_6(struct radeon_encoder *VAR_1,
           struct radeon_encoder_int_tmds *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct radeon_device *VAR_4 = VAR_3->dev_private;
 uint16_t VAR_5;
 int VAR_6, VAR_7;
 uint8_t VAR_8;

 VAR_5 = FUNC_5(VAR_3, VAR_0);

 if (VAR_5) {
  VAR_8 = FUNC_4(VAR_5);
  FUNC_0("DFP table revision: %d\n", VAR_8);
  if (VAR_8 == 3) {
   VAR_7 = FUNC_4(VAR_5 + 5) + 1;
   if (VAR_7 > 4)
    VAR_7 = 4;
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    VAR_2->tmds_pll[VAR_6].value =
        FUNC_3(VAR_5 + VAR_6 * 10 + 0x08);
    VAR_2->tmds_pll[VAR_6].freq =
        FUNC_2(VAR_5 + VAR_6 * 10 + 0x10);
    FUNC_0("TMDS PLL From COMBIOS %u %x\n",
       VAR_2->tmds_pll[VAR_6].freq,
       VAR_2->tmds_pll[VAR_6].value);
   }
  } else if (VAR_8 == 4) {
   int VAR_9 = 0;
   VAR_7 = FUNC_4(VAR_5 + 5) + 1;
   if (VAR_7 > 4)
    VAR_7 = 4;
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    VAR_2->tmds_pll[VAR_6].value =
        FUNC_3(VAR_5 + VAR_9 + 0x08);
    VAR_2->tmds_pll[VAR_6].freq =
        FUNC_2(VAR_5 + VAR_9 + 0x10);
    if (VAR_6 == 0)
     VAR_9 += 10;
    else
     VAR_9 += 6;
    FUNC_0("TMDS PLL From COMBIOS %u %x\n",
       VAR_2->tmds_pll[VAR_6].freq,
       VAR_2->tmds_pll[VAR_6].value);
   }
  }
 } else {
  FUNC_1("No TMDS info found in BIOS\n");
  return 0;
 }
 return 1;
}
