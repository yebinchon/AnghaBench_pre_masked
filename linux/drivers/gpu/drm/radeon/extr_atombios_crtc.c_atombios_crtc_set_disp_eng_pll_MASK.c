
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* ucPpll; int ulDispEngClkFreq; } ;
struct TYPE_4__ {void* ucPpll; int usPixelClock; int ucCRTC; } ;
union set_pixel_clock {TYPE_2__ v6; TYPE_1__ v5; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int atom_context; } ;
struct radeon_device {TYPE_3__ mode_info; } ;
typedef int args ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int,int*,int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (union set_pixel_clock*,int ,int) ;

__attribute__((used)) static void FUNC_10(struct radeon_device *VAR_6,
        u32 VAR_7)
{
 u8 VAR_8, VAR_9;
 int VAR_10;
 union set_pixel_clock VAR_11;

 FUNC_9(&VAR_11, 0, sizeof(VAR_11));

 VAR_10 = FUNC_4(VAR_4, VAR_5);
 if (!FUNC_6(VAR_6->mode_info.atom_context, VAR_10, &VAR_8,
       &VAR_9))
  return;

 switch (VAR_8) {
 case 1:
  switch (VAR_9) {
  case 5:



   VAR_11.v5.ucCRTC = VAR_0;
   VAR_11.v5.usPixelClock = FUNC_7(VAR_7);
   VAR_11.v5.ucPpll = VAR_1;
   break;
  case 6:



   VAR_11.v6.ulDispEngClkFreq = FUNC_8(VAR_7);
   if (FUNC_1(VAR_6) || FUNC_2(VAR_6))
    VAR_11.v6.ucPpll = VAR_2;
   else if (FUNC_0(VAR_6))
    VAR_11.v6.ucPpll = VAR_3;
   else
    VAR_11.v6.ucPpll = VAR_1;
   break;
  default:
   FUNC_3("Unknown table version %d %d\n", VAR_8, VAR_9);
   return;
  }
  break;
 default:
  FUNC_3("Unknown table version %d %d\n", VAR_8, VAR_9);
  return;
 }
 FUNC_5(VAR_6->mode_info.atom_context, VAR_10, (uint32_t *)&VAR_11);
}
