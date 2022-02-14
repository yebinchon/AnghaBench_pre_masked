
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ucPpll; int ulDispEngClkFreq; } ;
struct TYPE_4__ {int ucPpll; int usPixelClock; int ucCRTC; } ;
union set_pixel_clock {TYPE_2__ v6; TYPE_1__ v5; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int atom_context; } ;
struct amdgpu_device {TYPE_3__ mode_info; int asic_type; } ;
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
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union set_pixel_clock*,int ,int) ;

void FUNC_7(struct amdgpu_device *VAR_10,
        u32 VAR_11)
{
 u8 VAR_12, VAR_13;
 int VAR_14;
 union set_pixel_clock VAR_15;

 FUNC_6(&VAR_15, 0, sizeof(VAR_15));

 VAR_14 = FUNC_1(VAR_8, VAR_9);
 if (!FUNC_3(VAR_10->mode_info.atom_context, VAR_14, &VAR_12,
       &VAR_13))
  return;

 switch (VAR_12) {
 case 1:
  switch (VAR_13) {
  case 5:



   VAR_15.v5.ucCRTC = VAR_0;
   VAR_15.v5.usPixelClock = FUNC_4(VAR_11);
   VAR_15.v5.ucPpll = VAR_1;
   break;
  case 6:



   VAR_15.v6.ulDispEngClkFreq = FUNC_5(VAR_11);
   if (VAR_10->asic_type == VAR_6 ||
       VAR_10->asic_type == VAR_5 ||
       VAR_10->asic_type == VAR_7 ||
       VAR_10->asic_type == VAR_4)
    VAR_15.v6.ucPpll = VAR_3;
   else
    VAR_15.v6.ucPpll = VAR_2;
   break;
  default:
   FUNC_0("Unknown table version %d %d\n", VAR_12, VAR_13);
   return;
  }
  break;
 default:
  FUNC_0("Unknown table version %d %d\n", VAR_12, VAR_13);
  return;
 }
 FUNC_2(VAR_10->mode_info.atom_context, VAR_14, (uint32_t *)&VAR_15);
}
