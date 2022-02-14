
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u8 ;
typedef int u16 ;
struct pp_hwmgr {int adev; } ;
struct TYPE_6__ {int ucTableFormatRevision; int usStructureSize; } ;
struct TYPE_5__ {int usReferenceClock; } ;
struct TYPE_4__ {int usMemoryReferenceClock; } ;
typedef TYPE_1__ ATOM_FIRMWARE_INFO_V2_1 ;
typedef TYPE_2__ ATOM_FIRMWARE_INFO ;
typedef TYPE_3__ ATOM_COMMON_TABLE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int *) ;

uint32_t FUNC_3(struct pp_hwmgr *VAR_2)
{
 ATOM_COMMON_TABLE_HEADER *VAR_3;
 uint32_t VAR_4;
 u8 VAR_5, VAR_6;
 u16 VAR_7;

 VAR_3 = (ATOM_COMMON_TABLE_HEADER *)
  FUNC_2(VAR_2->adev,
    FUNC_0(VAR_0, VAR_1),
    &VAR_7, &VAR_5, &VAR_6);

 if (VAR_3 == ((void*)0))
  VAR_4 = 2700;
 else {
  if ((VAR_3->ucTableFormatRevision == 2) &&
   (FUNC_1(VAR_3->usStructureSize) >= sizeof(ATOM_FIRMWARE_INFO_V2_1))) {
   ATOM_FIRMWARE_INFO_V2_1 *VAR_8 =
    (ATOM_FIRMWARE_INFO_V2_1 *)VAR_3;
   VAR_4 = (uint32_t)(FUNC_1(VAR_8->usMemoryReferenceClock));
  } else {
   ATOM_FIRMWARE_INFO *VAR_9 =
    (ATOM_FIRMWARE_INFO *)VAR_3;
   VAR_4 = (uint32_t)(FUNC_1(VAR_9->usReferenceClock));
  }
 }

 return VAR_4;
}
