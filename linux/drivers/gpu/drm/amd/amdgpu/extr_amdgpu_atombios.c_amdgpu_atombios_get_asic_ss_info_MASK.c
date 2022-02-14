
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int * asSpreadSpectrum; } ;
struct TYPE_10__ {int * asSpreadSpectrum; } ;
struct TYPE_8__ {int * asSpreadSpectrum; } ;
union asic_ss_info {TYPE_5__ info_3; TYPE_3__ info_2; TYPE_1__ info; } ;
struct TYPE_13__ {int ucClockIndication; int ucSpreadSpectrumMode; int usSpreadRateIn10Hz; int usSpreadSpectrumPercentage; int ulTargetClockRange; } ;
struct TYPE_11__ {int ucClockIndication; int ucSpreadSpectrumMode; int usSpreadRateIn10Hz; int usSpreadSpectrumPercentage; int ulTargetClockRange; } ;
struct TYPE_9__ {int ucClockIndication; int ucSpreadSpectrumMode; int usSpreadRateInKhz; int usSpreadSpectrumPercentage; int ulTargetClockRange; } ;
union asic_ss_assignment {TYPE_6__ v3; TYPE_4__ v2; TYPE_2__ v1; } ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int u8 ;
typedef int u32 ;
struct amdgpu_mode_info {int firmware_flags; TYPE_7__* atom_context; } ;
struct amdgpu_device {int flags; struct amdgpu_mode_info mode_info; } ;
struct amdgpu_atom_ss {int type; int rate; int percentage_divider; void* percentage; } ;
struct TYPE_14__ {scalar_t__ bios; } ;
typedef int ATOM_COMMON_TABLE_HEADER ;
typedef int ATOM_ASIC_SS_ASSIGNMENT_V3 ;
typedef int ATOM_ASIC_SS_ASSIGNMENT_V2 ;
typedef int ATOM_ASIC_SS_ASSIGNMENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_7__*,int,scalar_t__*,int*,int*,scalar_t__*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_atom_ss*,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct amdgpu_atom_ss*,int ,int) ;

bool FUNC_7(struct amdgpu_device *VAR_8,
          struct amdgpu_atom_ss *VAR_9,
          int VAR_10, u32 VAR_11)
{
 struct amdgpu_mode_info *VAR_12 = &VAR_8->mode_info;
 int VAR_13 = FUNC_1(VAR_6, VAR_3);
 uint16_t VAR_14, VAR_15;
 union asic_ss_info *VAR_16;
 union asic_ss_assignment *VAR_17;
 uint8_t VAR_18, VAR_19;
 int VAR_20, VAR_21;

 if (VAR_10 == VAR_2) {
  if (!(VAR_8->mode_info.firmware_flags & VAR_5))
   return 0;
 }
 if (VAR_10 == VAR_1) {
  if (!(VAR_8->mode_info.firmware_flags & VAR_4))
   return 0;
 }

 FUNC_6(VAR_9, 0, sizeof(struct amdgpu_atom_ss));
 if (FUNC_2(VAR_12->atom_context, VAR_13, &VAR_15,
       &VAR_18, &VAR_19, &VAR_14)) {

  VAR_16 =
   (union asic_ss_info *)(VAR_12->atom_context->bios + VAR_14);

  switch (VAR_18) {
  case 1:
   VAR_21 = (VAR_15 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
    sizeof(ATOM_ASIC_SS_ASSIGNMENT);

   VAR_17 = (union asic_ss_assignment *)((u8 *)&VAR_16->info.asSpreadSpectrum[0]);
   for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
    if ((VAR_17->v1.ucClockIndication == VAR_10) &&
        (VAR_11 <= FUNC_5(VAR_17->v1.ulTargetClockRange))) {
     VAR_9->percentage =
      FUNC_4(VAR_17->v1.usSpreadSpectrumPercentage);
     VAR_9->type = VAR_17->v1.ucSpreadSpectrumMode;
     VAR_9->rate = FUNC_4(VAR_17->v1.usSpreadRateInKhz);
     VAR_9->percentage_divider = 100;
     return 1;
    }
    VAR_17 = (union asic_ss_assignment *)
     ((u8 *)VAR_17 + sizeof(ATOM_ASIC_SS_ASSIGNMENT));
   }
   break;
  case 2:
   VAR_21 = (VAR_15 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
    sizeof(ATOM_ASIC_SS_ASSIGNMENT_V2);
   VAR_17 = (union asic_ss_assignment *)((u8 *)&VAR_16->info_2.asSpreadSpectrum[0]);
   for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
    if ((VAR_17->v2.ucClockIndication == VAR_10) &&
        (VAR_11 <= FUNC_5(VAR_17->v2.ulTargetClockRange))) {
     VAR_9->percentage =
      FUNC_4(VAR_17->v2.usSpreadSpectrumPercentage);
     VAR_9->type = VAR_17->v2.ucSpreadSpectrumMode;
     VAR_9->rate = FUNC_4(VAR_17->v2.usSpreadRateIn10Hz);
     VAR_9->percentage_divider = 100;
     if ((VAR_19 == 2) &&
         ((VAR_10 == VAR_1) ||
          (VAR_10 == VAR_2)))
      VAR_9->rate /= 100;
     return 1;
    }
    VAR_17 = (union asic_ss_assignment *)
     ((u8 *)VAR_17 + sizeof(ATOM_ASIC_SS_ASSIGNMENT_V2));
   }
   break;
  case 3:
   VAR_21 = (VAR_15 - sizeof(ATOM_COMMON_TABLE_HEADER)) /
    sizeof(ATOM_ASIC_SS_ASSIGNMENT_V3);
   VAR_17 = (union asic_ss_assignment *)((u8 *)&VAR_16->info_3.asSpreadSpectrum[0]);
   for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
    if ((VAR_17->v3.ucClockIndication == VAR_10) &&
        (VAR_11 <= FUNC_5(VAR_17->v3.ulTargetClockRange))) {
     VAR_9->percentage =
      FUNC_4(VAR_17->v3.usSpreadSpectrumPercentage);
     VAR_9->type = VAR_17->v3.ucSpreadSpectrumMode;
     VAR_9->rate = FUNC_4(VAR_17->v3.usSpreadRateIn10Hz);
     if (VAR_17->v3.ucSpreadSpectrumMode &
         VAR_7)
      VAR_9->percentage_divider = 1000;
     else
      VAR_9->percentage_divider = 100;
     if ((VAR_10 == VAR_1) ||
         (VAR_10 == VAR_2))
      VAR_9->rate /= 100;
     if (VAR_8->flags & VAR_0)
      FUNC_3(VAR_8, VAR_9, VAR_10);
     return 1;
    }
    VAR_17 = (union asic_ss_assignment *)
     ((u8 *)VAR_17 + sizeof(ATOM_ASIC_SS_ASSIGNMENT_V3));
   }
   break;
  default:
   FUNC_0("Unsupported ASIC_InternalSS_Info table: %d %d\n", VAR_18, VAR_19);
   break;
  }

 }
 return 0;
}
