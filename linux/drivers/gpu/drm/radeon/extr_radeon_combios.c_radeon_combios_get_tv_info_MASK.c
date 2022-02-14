
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct radeon_device {struct drm_device* ddev; } ;
struct drm_device {int dummy; } ;
typedef enum radeon_tv_std { ____Placeholder_radeon_tv_std } radeon_tv_std ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;

enum radeon_tv_std
FUNC_3(struct radeon_device *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->ddev;
 uint16_t VAR_9;
 enum radeon_tv_std VAR_10 = VAR_1;

 VAR_9 = FUNC_2(VAR_8, VAR_0);
 if (VAR_9) {
  if (FUNC_1(VAR_9 + 6) == 'T') {
   switch (FUNC_1(VAR_9 + 7) & 0xf) {
   case 1:
    VAR_10 = VAR_1;
    FUNC_0("Default TV standard: NTSC\n");
    break;
   case 2:
    VAR_10 = VAR_3;
    FUNC_0("Default TV standard: PAL\n");
    break;
   case 3:
    VAR_10 = VAR_5;
    FUNC_0("Default TV standard: PAL-M\n");
    break;
   case 4:
    VAR_10 = VAR_4;
    FUNC_0("Default TV standard: PAL-60\n");
    break;
   case 5:
    VAR_10 = VAR_2;
    FUNC_0("Default TV standard: NTSC-J\n");
    break;
   case 6:
    VAR_10 = VAR_6;
    FUNC_0("Default TV standard: SCART-PAL\n");
    break;
   default:
    VAR_10 = VAR_1;
    FUNC_0
        ("Unknown TV standard; defaulting to NTSC\n");
    break;
   }

   switch ((FUNC_1(VAR_9 + 9) >> 2) & 0x3) {
   case 0:
    FUNC_0("29.498928713 MHz TV ref clk\n");
    break;
   case 1:
    FUNC_0("28.636360000 MHz TV ref clk\n");
    break;
   case 2:
    FUNC_0("14.318180000 MHz TV ref clk\n");
    break;
   case 3:
    FUNC_0("27.000000000 MHz TV ref clk\n");
    break;
   default:
    break;
   }
  }
 }
 return VAR_10;
}
