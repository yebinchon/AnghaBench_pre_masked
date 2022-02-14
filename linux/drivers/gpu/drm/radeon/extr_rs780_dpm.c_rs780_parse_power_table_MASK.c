
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ucNonClockStateIndex; int* ucClockStateIndices; } ;
union pplib_power_state {TYPE_1__ v1; } ;
typedef union pplib_clock_info {int dummy; } pplib_clock_info ;
struct TYPE_13__ {int ucNumStates; int ucStateEntrySize; int ucNonClockSize; int ucClockInfoSize; int usClockInfoArrayOffset; int usNonClockInfoArrayOffset; int usStateArrayOffset; } ;
union power_info {TYPE_4__ pplib; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct radeon_ps {int dummy; } ;
struct radeon_mode_info {TYPE_9__* atom_context; } ;
struct TYPE_11__ {int num_ps; TYPE_5__* ps; } ;
struct TYPE_12__ {TYPE_2__ dpm; } ;
struct radeon_device {TYPE_3__ pm; struct radeon_mode_info mode_info; } ;
struct igp_ps {int dummy; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int dummy; } ;
struct TYPE_15__ {scalar_t__ bios; } ;
struct TYPE_14__ {struct igp_ps* ps_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_9__*,int,int *,int *,int *,scalar_t__*) ;
 TYPE_5__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 struct igp_ps* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_device*,TYPE_5__*,union pplib_clock_info*) ;
 int FUNC_7 (struct radeon_device*,TYPE_5__*,struct _ATOM_PPLIB_NONCLOCK_INFO*,int) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_5)
{
 struct radeon_mode_info *VAR_6 = &VAR_5->mode_info;
 struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_7;
 union pplib_power_state *VAR_8;
 int VAR_9;
 union pplib_clock_info *VAR_10;
 union power_info *VAR_11;
 int VAR_12 = FUNC_0(VAR_0, VAR_4);
 u16 VAR_13;
 u8 VAR_14, VAR_15;
 struct igp_ps *VAR_16;

 if (!FUNC_1(VAR_6->atom_context, VAR_12, ((void*)0),
       &VAR_14, &VAR_15, &VAR_13))
  return -VAR_1;
 VAR_11 = (union power_info *)(VAR_6->atom_context->bios + VAR_13);

 VAR_5->pm.dpm.ps = FUNC_2(VAR_11->pplib.ucNumStates,
      sizeof(struct radeon_ps),
      VAR_3);
 if (!VAR_5->pm.dpm.ps)
  return -VAR_2;

 for (VAR_9 = 0; VAR_9 < VAR_11->pplib.ucNumStates; VAR_9++) {
  VAR_8 = (union pplib_power_state *)
   (VAR_6->atom_context->bios + VAR_13 +
    FUNC_5(VAR_11->pplib.usStateArrayOffset) +
    VAR_9 * VAR_11->pplib.ucStateEntrySize);
  VAR_7 = (struct _ATOM_PPLIB_NONCLOCK_INFO *)
   (VAR_6->atom_context->bios + VAR_13 +
    FUNC_5(VAR_11->pplib.usNonClockInfoArrayOffset) +
    (VAR_8->v1.ucNonClockStateIndex *
     VAR_11->pplib.ucNonClockSize));
  if (VAR_11->pplib.ucStateEntrySize - 1) {
   VAR_10 = (union pplib_clock_info *)
    (VAR_6->atom_context->bios + VAR_13 +
     FUNC_5(VAR_11->pplib.usClockInfoArrayOffset) +
     (VAR_8->v1.ucClockStateIndices[0] *
      VAR_11->pplib.ucClockInfoSize));
   VAR_16 = FUNC_4(sizeof(struct igp_ps), VAR_3);
   if (VAR_16 == ((void*)0)) {
    FUNC_3(VAR_5->pm.dpm.ps);
    return -VAR_2;
   }
   VAR_5->pm.dpm.ps[VAR_9].ps_priv = VAR_16;
   FUNC_7(VAR_5, &VAR_5->pm.dpm.ps[VAR_9],
        VAR_7,
        VAR_11->pplib.ucNonClockSize);
   FUNC_6(VAR_5,
           &VAR_5->pm.dpm.ps[VAR_9],
           VAR_10);
  }
 }
 VAR_5->pm.dpm.num_ps = VAR_11->pplib.ucNumStates;
 return 0;
}
