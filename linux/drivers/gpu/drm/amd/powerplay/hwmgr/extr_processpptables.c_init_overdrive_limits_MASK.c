
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ memoryClock; scalar_t__ engineClock; } ;
struct TYPE_6__ {scalar_t__ overdriveVDDCStep; scalar_t__ maxOverdriveVDDC; scalar_t__ minOverdriveVDDC; TYPE_1__ overdriveLimit; } ;
struct pp_hwmgr {scalar_t__ chip_id; int adev; TYPE_2__ platform_descriptor; } ;
struct TYPE_7__ {int ucTableFormatRevision; int usStructureSize; } ;
typedef int ATOM_PPLIB_POWERPLAYTABLE ;
typedef int ATOM_FIRMWARE_INFO_V2_1 ;
typedef int ATOM_FIRMWARE_INFO_V1_4 ;
typedef TYPE_3__ ATOM_COMMON_TABLE_HEADER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int const*,int const*) ;
 int FUNC_2 (struct pp_hwmgr*,int const*,int const*) ;
 int FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_3,
   const ATOM_PPLIB_POWERPLAYTABLE *VAR_4)
{
 int VAR_5 = 0;
 uint8_t VAR_6, VAR_7;
 uint16_t VAR_8;

 const ATOM_COMMON_TABLE_HEADER *VAR_9 = ((void*)0);

 VAR_3->platform_descriptor.overdriveLimit.engineClock = 0;
 VAR_3->platform_descriptor.overdriveLimit.memoryClock = 0;
 VAR_3->platform_descriptor.minOverdriveVDDC = 0;
 VAR_3->platform_descriptor.maxOverdriveVDDC = 0;
 VAR_3->platform_descriptor.overdriveVDDCStep = 0;

 if (VAR_3->chip_id == VAR_0)
  return 0;


 VAR_9 = FUNC_4(VAR_3->adev,
    FUNC_0(VAR_1, VAR_2),
    &VAR_8, &VAR_6, &VAR_7);

 if ((VAR_9->ucTableFormatRevision == 1)
     && (FUNC_3(VAR_9->usStructureSize) >= sizeof(ATOM_FIRMWARE_INFO_V1_4)))
  VAR_5 = FUNC_1(VAR_3,
    VAR_4,
    (const ATOM_FIRMWARE_INFO_V1_4 *)VAR_9);

 else if ((VAR_9->ucTableFormatRevision == 2)
   && (FUNC_3(VAR_9->usStructureSize) >= sizeof(ATOM_FIRMWARE_INFO_V2_1)))
  VAR_5 = FUNC_2(VAR_3,
    VAR_4,
    (const ATOM_FIRMWARE_INFO_V2_1 *)VAR_9);

 return VAR_5;
}
