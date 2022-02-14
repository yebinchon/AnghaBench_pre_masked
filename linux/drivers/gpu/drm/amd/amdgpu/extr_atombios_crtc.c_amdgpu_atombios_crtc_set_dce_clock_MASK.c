
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ucDCEClkType; int ucDCEClkSrc; int ulDCEClkFreq; } ;
struct TYPE_6__ {TYPE_2__ asParam; } ;
union set_dce_clock {TYPE_3__ v2_1; } ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
typedef int args ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union set_dce_clock*,int ,int) ;

u32 FUNC_7(struct amdgpu_device *VAR_2,
           u32 VAR_3, u8 VAR_4, u8 VAR_5)
{
 u8 VAR_6, VAR_7;
 int VAR_8;
 union set_dce_clock VAR_9;
 u32 VAR_10 = 0;

 FUNC_6(&VAR_9, 0, sizeof(VAR_9));

 VAR_8 = FUNC_1(VAR_0, VAR_1);
 if (!FUNC_3(VAR_2->mode_info.atom_context, VAR_8, &VAR_6,
       &VAR_7))
  return 0;

 switch (VAR_6) {
 case 2:
  switch (VAR_7) {
  case 1:
   VAR_9.v2_1.asParam.ulDCEClkFreq = FUNC_4(VAR_3);
   VAR_9.v2_1.asParam.ucDCEClkType = VAR_4;
   VAR_9.v2_1.asParam.ucDCEClkSrc = VAR_5;
   FUNC_2(VAR_2->mode_info.atom_context, VAR_8, (uint32_t *)&VAR_9);
   VAR_10 = FUNC_5(VAR_9.v2_1.asParam.ulDCEClkFreq) * 10;
   break;
  default:
   FUNC_0("Unknown table version %d %d\n", VAR_6, VAR_7);
   return 0;
  }
  break;
 default:
  FUNC_0("Unknown table version %d %d\n", VAR_6, VAR_7);
  return 0;
 }

 return VAR_10;
}
