
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u16 ;
struct pp_hwmgr {int adev; } ;
struct TYPE_3__ {int ucTableFormatRevision; int ucTableContentRevision; int usStructureSize; } ;
struct TYPE_4__ {int usLeakageBinArrayOffset; int usElbVDDC_IdArrayOffset; int usElbVDDC_LevelArrayOffset; int ucElbVDDC_Num; int ucLeakageBinNum; int usElbVDDCI_IdArrayOffset; int usElbVDDCI_LevelArrayOffset; int ucElbVDDCI_Num; TYPE_1__ asHeader; } ;
typedef TYPE_2__ ATOM_ASIC_PROFILING_INFO_V2_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,int *,int *) ;

int FUNC_2(struct pp_hwmgr *VAR_3,
     uint16_t *VAR_4, uint16_t *VAR_5,
     uint16_t VAR_6,
     uint16_t VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10;
 u16 *VAR_11, *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 ATOM_ASIC_PROFILING_INFO_V2_1 *VAR_16;

 *VAR_4 = 0;
 *VAR_5 = 0;

 VAR_10 = FUNC_0(VAR_1, VAR_0);

 VAR_16 = (ATOM_ASIC_PROFILING_INFO_V2_1 *)
   FUNC_1(VAR_3->adev,
     VAR_10,
     ((void*)0), ((void*)0), ((void*)0));
 if (!VAR_16)
  return -VAR_2;

 if ((VAR_16->asHeader.ucTableFormatRevision >= 2) &&
  (VAR_16->asHeader.ucTableContentRevision >= 1) &&
  (VAR_16->asHeader.usStructureSize >= sizeof(ATOM_ASIC_PROFILING_INFO_V2_1))) {
  VAR_11 = (u16 *)((char *)VAR_16 + VAR_16->usLeakageBinArrayOffset);
  VAR_12 = (u16 *)((char *)VAR_16 + VAR_16->usElbVDDC_IdArrayOffset);
  VAR_13 = (u16 *)((char *)VAR_16 + VAR_16->usElbVDDC_LevelArrayOffset);
  if (VAR_16->ucElbVDDC_Num > 0) {
   for (VAR_8 = 0; VAR_8 < VAR_16->ucElbVDDC_Num; VAR_8++) {
    if (VAR_12[VAR_8] == VAR_6) {
     for (VAR_9 = 0; VAR_9 < VAR_16->ucLeakageBinNum; VAR_9++) {
      if (VAR_7 <= VAR_11[VAR_9]) {
       *VAR_4 = VAR_13[VAR_9 * VAR_16->ucElbVDDC_Num + VAR_8];
       break;
      }
     }
     break;
    }
   }
  }

  VAR_14 = (u16 *)((char *)VAR_16 + VAR_16->usElbVDDCI_IdArrayOffset);
  VAR_15 = (u16 *)((char *)VAR_16 + VAR_16->usElbVDDCI_LevelArrayOffset);
  if (VAR_16->ucElbVDDCI_Num > 0) {
   for (VAR_8 = 0; VAR_8 < VAR_16->ucElbVDDCI_Num; VAR_8++) {
    if (VAR_14[VAR_8] == VAR_6) {
     for (VAR_9 = 0; VAR_9 < VAR_16->ucLeakageBinNum; VAR_9++) {
      if (VAR_7 <= VAR_11[VAR_9]) {
       *VAR_5 = VAR_15[VAR_9 * VAR_16->ucElbVDDCI_Num + VAR_8];
       break;
      }
     }
     break;
    }
   }
  }
 }

 return 0;
}
