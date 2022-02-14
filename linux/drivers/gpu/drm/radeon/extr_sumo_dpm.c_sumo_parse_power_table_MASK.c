
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int nonClockInfoIndex; int ucNumDPMLevels; int * clockInfoIndex; } ;
union pplib_power_state {TYPE_3__ v2; } ;
typedef union pplib_clock_info {int dummy; } pplib_clock_info ;
struct TYPE_12__ {int usNonClockInfoArrayOffset; int usClockInfoArrayOffset; int usStateArrayOffset; } ;
union power_info {TYPE_1__ pplib; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct sumo_ps {int dummy; } ;
struct radeon_ps {int dummy; } ;
struct radeon_mode_info {TYPE_10__* atom_context; } ;
struct TYPE_15__ {int num_ps; TYPE_6__* ps; } ;
struct TYPE_16__ {TYPE_4__ dpm; TYPE_2__* power_state; } ;
struct radeon_device {TYPE_5__ pm; struct radeon_mode_info mode_info; } ;
struct _StateArray {int ucNumEntries; scalar_t__ states; } ;
struct _NonClockInfoArray {int ucEntrySize; int * nonClockInfo; } ;
struct _ClockInfoArray {int ucEntrySize; int * clockInfo; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int dummy; } ;
struct TYPE_17__ {struct sumo_ps* ps_priv; } ;
struct TYPE_13__ {int clock_info; } ;
struct TYPE_11__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_10__*,int,int *,int*,int*,scalar_t__*) ;
 TYPE_6__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 struct sumo_ps* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_device*,TYPE_6__*,int,union pplib_clock_info*) ;
 int FUNC_7 (struct radeon_device*,TYPE_6__*,struct _ATOM_PPLIB_NONCLOCK_INFO*,int ) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_6)
{
 struct radeon_mode_info *VAR_7 = &VAR_6->mode_info;
 struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_8;
 union pplib_power_state *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 union pplib_clock_info *VAR_15;
 struct _StateArray *VAR_16;
 struct _ClockInfoArray *VAR_17;
 struct _NonClockInfoArray *VAR_18;
 union power_info *VAR_19;
 int VAR_20 = FUNC_0(VAR_0, VAR_4);
 u16 VAR_21;
 u8 VAR_22, VAR_23;
 u8 *VAR_24;
 struct sumo_ps *VAR_25;

 if (!FUNC_1(VAR_7->atom_context, VAR_20, ((void*)0),
       &VAR_22, &VAR_23, &VAR_21))
  return -VAR_1;
 VAR_19 = (union power_info *)(VAR_7->atom_context->bios + VAR_21);

 VAR_16 = (struct _StateArray *)
  (VAR_7->atom_context->bios + VAR_21 +
   FUNC_5(VAR_19->pplib.usStateArrayOffset));
 VAR_17 = (struct _ClockInfoArray *)
  (VAR_7->atom_context->bios + VAR_21 +
   FUNC_5(VAR_19->pplib.usClockInfoArrayOffset));
 VAR_18 = (struct _NonClockInfoArray *)
  (VAR_7->atom_context->bios + VAR_21 +
   FUNC_5(VAR_19->pplib.usNonClockInfoArrayOffset));

 VAR_6->pm.dpm.ps = FUNC_2(VAR_16->ucNumEntries,
      sizeof(struct radeon_ps),
      VAR_3);
 if (!VAR_6->pm.dpm.ps)
  return -VAR_2;
 VAR_24 = (u8 *)VAR_16->states;
 for (VAR_10 = 0; VAR_10 < VAR_16->ucNumEntries; VAR_10++) {
  u8 *VAR_26;
  VAR_9 = (union pplib_power_state *)VAR_24;
  VAR_13 = VAR_9->v2.nonClockInfoIndex;
  VAR_8 = (struct _ATOM_PPLIB_NONCLOCK_INFO *)
   &VAR_18->nonClockInfo[VAR_13];
  if (!VAR_6->pm.power_state[VAR_10].clock_info)
   return -VAR_1;
  VAR_25 = FUNC_4(sizeof(struct sumo_ps), VAR_3);
  if (VAR_25 == ((void*)0)) {
   FUNC_3(VAR_6->pm.dpm.ps);
   return -VAR_2;
  }
  VAR_6->pm.dpm.ps[VAR_10].ps_priv = VAR_25;
  VAR_12 = 0;
  VAR_26 = (u8 *)&VAR_9->v2.clockInfoIndex[0];
  for (VAR_11 = 0; VAR_11 < VAR_9->v2.ucNumDPMLevels; VAR_11++) {
   VAR_14 = VAR_26[VAR_11];
   if (VAR_12 >= VAR_5)
    break;

   VAR_15 = (union pplib_clock_info *)
    ((u8 *)&VAR_17->clockInfo[0] +
     (VAR_14 * VAR_17->ucEntrySize));
   FUNC_6(VAR_6,
          &VAR_6->pm.dpm.ps[VAR_10], VAR_12,
          VAR_15);
   VAR_12++;
  }
  FUNC_7(VAR_6, &VAR_6->pm.dpm.ps[VAR_10],
      VAR_8,
      VAR_18->ucEntrySize);
  VAR_24 += 2 + VAR_9->v2.ucNumDPMLevels;
 }
 VAR_6->pm.dpm.num_ps = VAR_16->ucNumEntries;
 return 0;
}
