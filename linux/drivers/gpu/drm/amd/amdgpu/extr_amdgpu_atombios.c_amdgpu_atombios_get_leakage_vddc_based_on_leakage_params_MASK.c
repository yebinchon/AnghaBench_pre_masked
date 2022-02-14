
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_3__* atom_context; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;
struct TYPE_6__ {int bios; } ;
struct TYPE_5__ {int ucElbVDDC_Num; int ucLeakageBinNum; int ucElbVDDCI_Num; int usElbVDDCI_LevelArrayOffset; int usElbVDDCI_IdArrayOffset; int usElbVDDC_LevelArrayOffset; int usElbVDDC_IdArrayOffset; int usLeakageBinArrayOffset; } ;
typedef TYPE_2__ ATOM_ASIC_PROFILING_INFO_V2_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int,int*,int*,int*,int*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct amdgpu_device *VAR_3,
            u16 *VAR_4, u16 *VAR_5,
            u16 VAR_6,
            u16 VAR_7)
{
 int VAR_8 = FUNC_1(VAR_1, VAR_0);
 u8 VAR_9, VAR_10;
 u16 VAR_11, VAR_12;
 int VAR_13, VAR_14;
 ATOM_ASIC_PROFILING_INFO_V2_1 *VAR_15;
 u16 *VAR_16, *VAR_17, *VAR_18, *VAR_19, *VAR_20;

 *VAR_4 = 0;
 *VAR_5 = 0;

 if (!FUNC_2(VAR_3->mode_info.atom_context, VAR_8, &VAR_12,
        &VAR_9, &VAR_10, &VAR_11))
  return -VAR_2;

 VAR_15 = (ATOM_ASIC_PROFILING_INFO_V2_1 *)
  (VAR_3->mode_info.atom_context->bios + VAR_11);

 switch (VAR_9) {
 case 1:
  return -VAR_2;
 case 2:
  switch (VAR_10) {
  case 1:
   if (VAR_12 < sizeof(ATOM_ASIC_PROFILING_INFO_V2_1))
    return -VAR_2;
   VAR_16 = (u16 *)
    (VAR_3->mode_info.atom_context->bios + VAR_11 +
     FUNC_3(VAR_15->usLeakageBinArrayOffset));
   VAR_17 = (u16 *)
    (VAR_3->mode_info.atom_context->bios + VAR_11 +
     FUNC_3(VAR_15->usElbVDDC_IdArrayOffset));
   VAR_18 = (u16 *)
    (VAR_3->mode_info.atom_context->bios + VAR_11 +
     FUNC_3(VAR_15->usElbVDDC_LevelArrayOffset));
   VAR_19 = (u16 *)
    (VAR_3->mode_info.atom_context->bios + VAR_11 +
     FUNC_3(VAR_15->usElbVDDCI_IdArrayOffset));
   VAR_20 = (u16 *)
    (VAR_3->mode_info.atom_context->bios + VAR_11 +
     FUNC_3(VAR_15->usElbVDDCI_LevelArrayOffset));

   if (VAR_15->ucElbVDDC_Num > 0) {
    for (VAR_13 = 0; VAR_13 < VAR_15->ucElbVDDC_Num; VAR_13++) {
     if (VAR_17[VAR_13] == VAR_6) {
      for (VAR_14 = 0; VAR_14 < VAR_15->ucLeakageBinNum; VAR_14++) {
       if (VAR_7 <= VAR_16[VAR_14]) {
        *VAR_4 = VAR_18[VAR_14 * VAR_15->ucElbVDDC_Num + VAR_13];
        break;
       }
      }
      break;
     }
    }
   }
   if (VAR_15->ucElbVDDCI_Num > 0) {
    for (VAR_13 = 0; VAR_13 < VAR_15->ucElbVDDCI_Num; VAR_13++) {
     if (VAR_19[VAR_13] == VAR_6) {
      for (VAR_14 = 0; VAR_14 < VAR_15->ucLeakageBinNum; VAR_14++) {
       if (VAR_7 <= VAR_16[VAR_14]) {
        *VAR_5 = VAR_20[VAR_14 * VAR_15->ucElbVDDCI_Num + VAR_13];
        break;
       }
      }
      break;
     }
    }
   }
   break;
  default:
   FUNC_0("Unknown table version %d, %d\n", VAR_9, VAR_10);
   return -VAR_2;
  }
  break;
 default:
  FUNC_0("Unknown table version %d, %d\n", VAR_9, VAR_10);
  return -VAR_2;
 }

 return 0;
}
