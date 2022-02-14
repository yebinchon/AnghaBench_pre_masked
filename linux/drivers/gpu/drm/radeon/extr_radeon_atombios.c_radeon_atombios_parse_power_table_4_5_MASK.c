
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


struct TYPE_8__ {int ucNonClockStateIndex; int* ucClockStateIndices; } ;
union pplib_power_state {TYPE_1__ v1; } ;
typedef union pplib_clock_info {int dummy; } pplib_clock_info ;
struct TYPE_9__ {int ucNumStates; int ucStateEntrySize; int ucNonClockSize; int ucClockInfoSize; int usClockInfoArrayOffset; int usNonClockInfoArrayOffset; int usStateArrayOffset; int sThermalController; } ;
union power_info {TYPE_2__ pplib; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_power_state {int dummy; } ;
struct radeon_pm_clock_info {int dummy; } ;
struct radeon_mode_info {TYPE_7__* atom_context; } ;
struct TYPE_13__ {int default_power_state_index; TYPE_5__* power_state; } ;
struct TYPE_10__ {int default_sclk; int default_mclk; } ;
struct radeon_device {TYPE_6__ pm; TYPE_3__ clock; struct radeon_mode_info mode_info; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int dummy; } ;
struct TYPE_14__ {scalar_t__ bios; } ;
struct TYPE_12__ {int num_clock_modes; TYPE_4__* clock_info; TYPE_4__* default_clock_mode; int type; } ;
struct TYPE_11__ {int flags; int sclk; int mclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_7__*,int,int *,int *,int *,scalar_t__*) ;
 void* FUNC_2 (int,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*,int *) ;
 int FUNC_5 (struct radeon_device*,int,int,union pplib_clock_info*) ;
 int FUNC_6 (struct radeon_device*,int,int,struct _ATOM_PPLIB_NONCLOCK_INFO*) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_5)
{
 struct radeon_mode_info *VAR_6 = &VAR_5->mode_info;
 struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_7;
 union pplib_power_state *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11 = 0, VAR_12 = 0;
 union pplib_clock_info *VAR_13;
 bool VAR_14;
 union power_info *VAR_15;
 int VAR_16 = FUNC_0(VAR_0, VAR_3);
 u16 VAR_17;
 u8 VAR_18, VAR_19;

 if (!FUNC_1(VAR_6->atom_context, VAR_16, ((void*)0),
       &VAR_18, &VAR_19, &VAR_17))
  return VAR_11;
 VAR_15 = (union power_info *)(VAR_6->atom_context->bios + VAR_17);

 FUNC_4(VAR_5, &VAR_15->pplib.sThermalController);
 if (VAR_15->pplib.ucNumStates == 0)
  return VAR_11;
 VAR_5->pm.power_state = FUNC_2(VAR_15->pplib.ucNumStates,
           sizeof(struct radeon_power_state),
           VAR_1);
 if (!VAR_5->pm.power_state)
  return VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_15->pplib.ucNumStates; VAR_9++) {
  VAR_12 = 0;
  VAR_8 = (union pplib_power_state *)
   (VAR_6->atom_context->bios + VAR_17 +
    FUNC_3(VAR_15->pplib.usStateArrayOffset) +
    VAR_9 * VAR_15->pplib.ucStateEntrySize);
  VAR_7 = (struct _ATOM_PPLIB_NONCLOCK_INFO *)
   (VAR_6->atom_context->bios + VAR_17 +
    FUNC_3(VAR_15->pplib.usNonClockInfoArrayOffset) +
    (VAR_8->v1.ucNonClockStateIndex *
     VAR_15->pplib.ucNonClockSize));
  VAR_5->pm.power_state[VAR_9].clock_info =
   FUNC_2((VAR_15->pplib.ucStateEntrySize - 1) ?
    (VAR_15->pplib.ucStateEntrySize - 1) : 1,
    sizeof(struct radeon_pm_clock_info),
    VAR_1);
  if (!VAR_5->pm.power_state[VAR_9].clock_info)
   return VAR_11;
  if (VAR_15->pplib.ucStateEntrySize - 1) {
   for (VAR_10 = 0; VAR_10 < (VAR_15->pplib.ucStateEntrySize - 1); VAR_10++) {
    VAR_13 = (union pplib_clock_info *)
     (VAR_6->atom_context->bios + VAR_17 +
      FUNC_3(VAR_15->pplib.usClockInfoArrayOffset) +
      (VAR_8->v1.ucClockStateIndices[VAR_10] *
       VAR_15->pplib.ucClockInfoSize));
    VAR_14 = FUNC_5(VAR_5,
                VAR_11, VAR_12,
                VAR_13);
    if (VAR_14)
     VAR_12++;
   }
  } else {
   VAR_5->pm.power_state[VAR_11].clock_info[0].mclk =
    VAR_5->clock.default_mclk;
   VAR_5->pm.power_state[VAR_11].clock_info[0].sclk =
    VAR_5->clock.default_sclk;
   VAR_12++;
  }
  VAR_5->pm.power_state[VAR_11].num_clock_modes = VAR_12;
  if (VAR_12) {
   FUNC_6(VAR_5, VAR_11, VAR_12,
           VAR_7);
   VAR_11++;
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  if (VAR_5->pm.power_state[VAR_9].num_clock_modes > 1)
   VAR_5->pm.power_state[VAR_9].clock_info[0].flags |=
    VAR_4;
 }

 if (VAR_5->pm.default_power_state_index == -1) {
  VAR_5->pm.power_state[0].type =
   VAR_2;
  VAR_5->pm.default_power_state_index = 0;
  VAR_5->pm.power_state[0].default_clock_mode =
   &VAR_5->pm.power_state[0].clock_info[0];
 }
 return VAR_11;
}
