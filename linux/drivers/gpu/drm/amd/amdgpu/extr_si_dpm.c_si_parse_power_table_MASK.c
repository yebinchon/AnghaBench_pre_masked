
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_14__ {int nonClockInfoIndex; int ucNumDPMLevels; int * clockInfoIndex; } ;
union pplib_power_state {TYPE_2__ v2; } ;
struct TYPE_15__ {int ucEngineClockHigh; int ucMemoryClockHigh; int usMemoryClockLow; int usEngineClockLow; } ;
union pplib_clock_info {TYPE_3__ si; } ;
struct TYPE_13__ {int usNonClockInfoArrayOffset; int usClockInfoArrayOffset; int usStateArrayOffset; } ;
union power_info {TYPE_1__ pplib; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct si_ps {int dummy; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_mode_info {TYPE_11__* atom_context; } ;
struct TYPE_17__ {int num_ps; int num_of_vce_states; TYPE_4__* vce_states; TYPE_7__* ps; } ;
struct TYPE_18__ {TYPE_5__ dpm; } ;
struct amdgpu_device {TYPE_6__ pm; struct amdgpu_mode_info mode_info; } ;
struct _StateArray {int ucNumEntries; scalar_t__ states; } ;
struct _NonClockInfoArray {int ucEntrySize; int * nonClockInfo; } ;
struct _ClockInfoArray {int ucNumEntries; int ucEntrySize; int * clockInfo; } ;
struct _ATOM_PPLIB_NONCLOCK_INFO {int dummy; } ;
struct TYPE_19__ {struct si_ps* ps_priv; } ;
struct TYPE_16__ {int clk_idx; int sclk; int mclk; } ;
struct TYPE_12__ {int bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (TYPE_11__*,int,int *,int*,int*,int*) ;
 TYPE_7__* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_7__*) ;
 struct si_ps* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct amdgpu_device*,TYPE_7__*,int,union pplib_clock_info*) ;
 int FUNC_8 (struct amdgpu_device*,TYPE_7__*,struct _ATOM_PPLIB_NONCLOCK_INFO*,int ) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_6)
{
 struct amdgpu_mode_info *VAR_7 = &VAR_6->mode_info;
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
 struct si_ps *VAR_25;

 if (!FUNC_2(VAR_7->atom_context, VAR_20, ((void*)0),
       &VAR_22, &VAR_23, &VAR_21))
  return -VAR_1;
 VAR_19 = (union power_info *)(VAR_7->atom_context->bios + VAR_21);

 FUNC_1(VAR_6);

 VAR_16 = (struct _StateArray *)
  (VAR_7->atom_context->bios + VAR_21 +
   FUNC_6(VAR_19->pplib.usStateArrayOffset));
 VAR_17 = (struct _ClockInfoArray *)
  (VAR_7->atom_context->bios + VAR_21 +
   FUNC_6(VAR_19->pplib.usClockInfoArrayOffset));
 VAR_18 = (struct _NonClockInfoArray *)
  (VAR_7->atom_context->bios + VAR_21 +
   FUNC_6(VAR_19->pplib.usNonClockInfoArrayOffset));

 VAR_6->pm.dpm.ps = FUNC_3(VAR_16->ucNumEntries,
      sizeof(struct amdgpu_ps),
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
  VAR_25 = FUNC_5(sizeof(struct si_ps), VAR_3);
  if (VAR_25 == ((void*)0)) {
   FUNC_4(VAR_6->pm.dpm.ps);
   return -VAR_2;
  }
  VAR_6->pm.dpm.ps[VAR_10].ps_priv = VAR_25;
  FUNC_8(VAR_6, &VAR_6->pm.dpm.ps[VAR_10],
           VAR_8,
           VAR_18->ucEntrySize);
  VAR_12 = 0;
  VAR_26 = (u8 *)&VAR_9->v2.clockInfoIndex[0];
  for (VAR_11 = 0; VAR_11 < VAR_9->v2.ucNumDPMLevels; VAR_11++) {
   VAR_14 = VAR_26[VAR_11];
   if (VAR_14 >= VAR_17->ucNumEntries)
    continue;
   if (VAR_12 >= VAR_5)
    break;
   VAR_15 = (union pplib_clock_info *)
    ((u8 *)&VAR_17->clockInfo[0] +
     (VAR_14 * VAR_17->ucEntrySize));
   FUNC_7(VAR_6,
        &VAR_6->pm.dpm.ps[VAR_10], VAR_12,
        VAR_15);
   VAR_12++;
  }
  VAR_24 += 2 + VAR_9->v2.ucNumDPMLevels;
 }
 VAR_6->pm.dpm.num_ps = VAR_16->ucNumEntries;


 for (VAR_10 = 0; VAR_10 < VAR_6->pm.dpm.num_of_vce_states; VAR_10++) {
  u32 VAR_27, VAR_28;
  VAR_14 = VAR_6->pm.dpm.vce_states[VAR_10].clk_idx;
  VAR_15 = (union pplib_clock_info *)
   &VAR_17->clockInfo[VAR_14 * VAR_17->ucEntrySize];
  VAR_27 = FUNC_6(VAR_15->si.usEngineClockLow);
  VAR_27 |= VAR_15->si.ucEngineClockHigh << 16;
  VAR_28 = FUNC_6(VAR_15->si.usMemoryClockLow);
  VAR_28 |= VAR_15->si.ucMemoryClockHigh << 16;
  VAR_6->pm.dpm.vce_states[VAR_10].sclk = VAR_27;
  VAR_6->pm.dpm.vce_states[VAR_10].mclk = VAR_28;
 }

 return 0;
}
