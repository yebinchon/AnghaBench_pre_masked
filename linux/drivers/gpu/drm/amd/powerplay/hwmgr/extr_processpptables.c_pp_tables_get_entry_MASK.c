
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {unsigned long bios_index; int flags; } ;
struct pp_power_state {int hardware; TYPE_2__ classification; } ;
struct pp_hwmgr {scalar_t__ chip_family; TYPE_3__* hwmgr_func; } ;
typedef int (* pp_tables_hw_clock_info_callback ) (struct pp_hwmgr*,int *,int,void const*) ;
struct TYPE_13__ {int ucTableFormatRevision; } ;
struct TYPE_21__ {unsigned long ucNumStates; unsigned long ucStateEntrySize; int ucNonClockSize; int ucClockInfoSize; int usClockInfoArrayOffset; int usNonClockInfoArrayOffset; int usStateArrayOffset; TYPE_1__ sHeader; } ;
struct TYPE_20__ {int ucNonClockStateIndex; int* ucClockStateIndices; } ;
struct TYPE_19__ {unsigned long nonClockInfoIndex; int ucNumDPMLevels; unsigned long* clockInfoIndex; } ;
struct TYPE_18__ {unsigned long ucEntrySize; scalar_t__ clockInfo; } ;
struct TYPE_17__ {unsigned long ucEntrySize; scalar_t__ nonClockInfo; } ;
struct TYPE_16__ {unsigned long ucNumEntries; } ;
struct TYPE_15__ {int (* patch_boot_state ) (struct pp_hwmgr*,int *) ;} ;
typedef TYPE_4__ StateArray ;
typedef TYPE_5__ NonClockInfoArray ;
typedef TYPE_6__ ClockInfoArray ;
typedef TYPE_7__ ATOM_PPLIB_STATE_V2 ;
typedef TYPE_8__ ATOM_PPLIB_STATE ;
typedef TYPE_9__ ATOM_PPLIB_POWERPLAYTABLE ;
typedef int ATOM_PPLIB_NONCLOCK_INFO ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_9__* FUNC_0 (struct pp_hwmgr*) ;
 TYPE_7__* FUNC_1 (TYPE_4__ const*,unsigned long) ;
 int FUNC_2 (struct pp_hwmgr*,struct pp_power_state*,int,int const*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct pp_hwmgr*,int *) ;

int FUNC_5(struct pp_hwmgr *VAR_2,
    unsigned long VAR_3,
    struct pp_power_state *VAR_4,
    pp_tables_hw_clock_info_callback VAR_5)
{
 int VAR_6;
 const StateArray *VAR_7;
 const ATOM_PPLIB_STATE_V2 *VAR_8;
 const ATOM_PPLIB_NONCLOCK_INFO *VAR_9;
 const ATOM_PPLIB_POWERPLAYTABLE *VAR_10 = FUNC_0(VAR_2);
 int VAR_11 = 0;
 int VAR_12 = 0;

 const ClockInfoArray *VAR_13;

 const NonClockInfoArray *VAR_14;

 const ATOM_PPLIB_STATE *VAR_15;

 if (VAR_10 == ((void*)0))
  return -1;

 VAR_4->classification.bios_index = VAR_3;

 if (VAR_10->sHeader.ucTableFormatRevision >= 6) {
  VAR_7 = (StateArray *)(((unsigned long)VAR_10) +
     FUNC_3(VAR_10->usStateArrayOffset));

  if (VAR_3 > VAR_7->ucNumEntries)
   return -1;

  VAR_8 = FUNC_1(VAR_7, VAR_3);
  VAR_13 = (ClockInfoArray *)(((unsigned long)VAR_10) +
     FUNC_3(VAR_10->usClockInfoArrayOffset));

  VAR_14 = (NonClockInfoArray *)(((unsigned long)VAR_10) +
      FUNC_3(VAR_10->usNonClockInfoArrayOffset));

  VAR_9 = (ATOM_PPLIB_NONCLOCK_INFO *)((unsigned long)(VAR_14->nonClockInfo) +
     (VAR_8->nonClockInfoIndex * VAR_14->ucEntrySize));

  VAR_11 = FUNC_2(VAR_2, VAR_4, VAR_14->ucEntrySize, VAR_9);

  for (VAR_6 = 0; VAR_6 < VAR_8->ucNumDPMLevels; VAR_6++) {
   const void *VAR_16 = (const void *)(
       (unsigned long)(VAR_13->clockInfo) +
       (VAR_8->clockInfoIndex[VAR_6] * VAR_13->ucEntrySize));
   VAR_12 = VAR_5(VAR_2, &VAR_4->hardware, VAR_6, VAR_16);
   if ((0 == VAR_11) && (0 != VAR_12))
    VAR_11 = VAR_12;
  }
 } else {
  if (VAR_3 > VAR_10->ucNumStates)
   return -1;

  VAR_15 = (ATOM_PPLIB_STATE *)((unsigned long)VAR_10 +
          FUNC_3(VAR_10->usStateArrayOffset) +
          VAR_3 * VAR_10->ucStateEntrySize);

  VAR_9 = (ATOM_PPLIB_NONCLOCK_INFO *)((unsigned long)VAR_10 +
      FUNC_3(VAR_10->usNonClockInfoArrayOffset) +
      VAR_15->ucNonClockStateIndex *
      VAR_10->ucNonClockSize);

  VAR_11 = FUNC_2(VAR_2, VAR_4,
       VAR_10->ucNonClockSize,
       VAR_9);

  for (VAR_6 = 0; VAR_6 < VAR_10->ucStateEntrySize-1; VAR_6++) {
   const void *VAR_17 = (const void *)((unsigned long)VAR_10 +
      FUNC_3(VAR_10->usClockInfoArrayOffset) +
      VAR_15->ucClockStateIndices[VAR_6] *
      VAR_10->ucClockInfoSize);

   int VAR_18 = VAR_5(VAR_2, &VAR_4->hardware, VAR_6, VAR_17);

   if ((0 == VAR_11) && (0 != VAR_18))
     VAR_11 = VAR_18;
  }
 }

 if ((0 == VAR_11) && (0 != (VAR_4->classification.flags & VAR_1))) {
  if (VAR_2->chip_family < VAR_0)
   VAR_11 = VAR_2->hwmgr_func->patch_boot_state(VAR_2, &(VAR_4->hardware));
 }

 return VAR_11;
}
