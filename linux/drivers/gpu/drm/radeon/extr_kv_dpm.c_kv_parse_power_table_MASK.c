
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_16__ {int nonClockInfoIndex; int ucNumDPMLevels; int * clockInfoIndex; } ;
union pplib_power_state {TYPE_3__ v2; } ;
struct TYPE_17__ {int ucEngineClockHigh; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_4__ sumo; } ;
struct TYPE_14__ {int usNonClockInfoArrayOffset; int usClockInfoArrayOffset; int usStateArrayOffset; } ;
union power_info {TYPE_1__ pplib; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct radeon_ps {int dummy; } ;
struct radeon_mode_info {TYPE_12__* atom_context; } ;
struct TYPE_19__ {int num_ps; TYPE_5__* vce_states; TYPE_8__* ps; } ;
struct TYPE_20__ {TYPE_6__ dpm; TYPE_2__* power_state; } ;
struct radeon_device {TYPE_7__ pm; struct radeon_mode_info mode_info; } ;
struct kv_ps {int dummy; } ;
struct _StateArray {int ucNumEntries; scalar_t__ states; } ;
struct _NonClockInfoArray {int ucEntrySize; int * nonClockInfo; } ;
struct _ClockInfoArray {int ucNumEntries; int ucEntrySize; int * clockInfo; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int dummy; } ;
struct TYPE_21__ {struct kv_ps* ps_priv; } ;
struct TYPE_18__ {int clk_idx; int sclk; scalar_t__ mclk; } ;
struct TYPE_15__ {int clock_info; } ;
struct TYPE_13__ {int bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_12__*,int,int *,int*,int*,int*) ;
 TYPE_8__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (struct radeon_device*,TYPE_8__*,int,union pplib_clock_info*) ;
 int FUNC_5 (struct radeon_device*,TYPE_8__*,struct _ATOM_PPLIB_NONCLOCK_INFO*,int ) ;
 struct kv_ps* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct radeon_device *VAR_7)
{
 struct radeon_mode_info *VAR_8 = &VAR_7->mode_info;
 struct _ATOM_PPLIB_NONCLOCK_INFO *VAR_9;
 union pplib_power_state *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 union pplib_clock_info *VAR_16;
 struct _StateArray *VAR_17;
 struct _ClockInfoArray *VAR_18;
 struct _NonClockInfoArray *VAR_19;
 union power_info *VAR_20;
 int VAR_21 = FUNC_0(VAR_0, VAR_4);
 u16 VAR_22;
 u8 VAR_23, VAR_24;
 u8 *VAR_25;
 struct kv_ps *VAR_26;

 if (!FUNC_1(VAR_8->atom_context, VAR_21, ((void*)0),
       &VAR_23, &VAR_24, &VAR_22))
  return -VAR_1;
 VAR_20 = (union power_info *)(VAR_8->atom_context->bios + VAR_22);

 VAR_17 = (struct _StateArray *)
  (VAR_8->atom_context->bios + VAR_22 +
   FUNC_7(VAR_20->pplib.usStateArrayOffset));
 VAR_18 = (struct _ClockInfoArray *)
  (VAR_8->atom_context->bios + VAR_22 +
   FUNC_7(VAR_20->pplib.usClockInfoArrayOffset));
 VAR_19 = (struct _NonClockInfoArray *)
  (VAR_8->atom_context->bios + VAR_22 +
   FUNC_7(VAR_20->pplib.usNonClockInfoArrayOffset));

 VAR_7->pm.dpm.ps = FUNC_2(VAR_17->ucNumEntries,
      sizeof(struct radeon_ps),
      VAR_3);
 if (!VAR_7->pm.dpm.ps)
  return -VAR_2;
 VAR_25 = (u8 *)VAR_17->states;
 for (VAR_11 = 0; VAR_11 < VAR_17->ucNumEntries; VAR_11++) {
  u8 *VAR_27;
  VAR_10 = (union pplib_power_state *)VAR_25;
  VAR_14 = VAR_10->v2.nonClockInfoIndex;
  VAR_9 = (struct _ATOM_PPLIB_NONCLOCK_INFO *)
   &VAR_19->nonClockInfo[VAR_14];
  if (!VAR_7->pm.power_state[VAR_11].clock_info)
   return -VAR_1;
  VAR_26 = FUNC_6(sizeof(struct kv_ps), VAR_3);
  if (VAR_26 == ((void*)0)) {
   FUNC_3(VAR_7->pm.dpm.ps);
   return -VAR_2;
  }
  VAR_7->pm.dpm.ps[VAR_11].ps_priv = VAR_26;
  VAR_13 = 0;
  VAR_27 = (u8 *)&VAR_10->v2.clockInfoIndex[0];
  for (VAR_12 = 0; VAR_12 < VAR_10->v2.ucNumDPMLevels; VAR_12++) {
   VAR_15 = VAR_27[VAR_12];
   if (VAR_15 >= VAR_18->ucNumEntries)
    continue;
   if (VAR_13 >= VAR_6)
    break;
   VAR_16 = (union pplib_clock_info *)
    ((u8 *)&VAR_18->clockInfo[0] +
     (VAR_15 * VAR_18->ucEntrySize));
   FUNC_4(VAR_7,
        &VAR_7->pm.dpm.ps[VAR_11], VAR_13,
        VAR_16);
   VAR_13++;
  }
  FUNC_5(VAR_7, &VAR_7->pm.dpm.ps[VAR_11],
           VAR_9,
           VAR_19->ucEntrySize);
  VAR_25 += 2 + VAR_10->v2.ucNumDPMLevels;
 }
 VAR_7->pm.dpm.num_ps = VAR_17->ucNumEntries;


 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  u32 VAR_28;
  VAR_15 = VAR_7->pm.dpm.vce_states[VAR_11].clk_idx;
  VAR_16 = (union pplib_clock_info *)
   &VAR_18->clockInfo[VAR_15 * VAR_18->ucEntrySize];
  VAR_28 = FUNC_7(VAR_16->sumo.usEngineClockLow);
  VAR_28 |= VAR_16->sumo.ucEngineClockHigh << 16;
  VAR_7->pm.dpm.vce_states[VAR_11].sclk = VAR_28;
  VAR_7->pm.dpm.vce_states[VAR_11].mclk = 0;
 }

 return 0;
}
