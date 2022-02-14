
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct amd_vce_state {int evclk; int ecclk; } ;
struct TYPE_11__ {TYPE_2__* entries; } ;
typedef TYPE_1__ VCEClockInfoArray ;
struct TYPE_12__ {int usECClkLow; scalar_t__ ucECClkHigh; int usEVClkLow; scalar_t__ ucEVClkHigh; } ;
typedef TYPE_2__ VCEClockInfo ;
struct TYPE_16__ {int usClockInfoArrayOffset; } ;
struct TYPE_15__ {size_t ucVCEClockInfoIndex; int ucClockInfoIndex; } ;
struct TYPE_14__ {TYPE_5__* entries; } ;
struct TYPE_13__ {unsigned long ucEntrySize; scalar_t__ clockInfo; } ;
typedef TYPE_3__ ClockInfoArray ;
typedef TYPE_4__ ATOM_PPLIB_VCE_State_Table ;
typedef TYPE_5__ ATOM_PPLIB_VCE_State_Record ;
typedef TYPE_6__ ATOM_PPLIB_POWERPLAYTABLE ;


 unsigned long VAR_0 ;
 TYPE_6__* FUNC_0 (struct pp_hwmgr*) ;
 unsigned short FUNC_1 (struct pp_hwmgr*,TYPE_6__ const*) ;
 TYPE_4__* FUNC_2 (struct pp_hwmgr*,TYPE_6__ const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_1,
       unsigned long VAR_2,
       struct amd_vce_state *VAR_3,
       void **VAR_4,
       unsigned long *VAR_5)
{
 const ATOM_PPLIB_POWERPLAYTABLE *VAR_6 = FUNC_0(VAR_1);

 const ATOM_PPLIB_VCE_State_Table *VAR_7 = FUNC_2(VAR_1, VAR_6);

 unsigned short VAR_8 = FUNC_1(VAR_1, VAR_6);

 const VCEClockInfoArray *VAR_9 = (const VCEClockInfoArray *)(((unsigned long) VAR_6) + VAR_8);

 const ClockInfoArray *VAR_10 = (ClockInfoArray *)(((unsigned long)VAR_6) +
        FUNC_3(VAR_6->usClockInfoArrayOffset));

 const ATOM_PPLIB_VCE_State_Record *VAR_11 = &VAR_7->entries[VAR_2];

 const VCEClockInfo *VAR_12 = &VAR_9->entries[VAR_11->ucVCEClockInfoIndex];

 unsigned long VAR_13 = VAR_11->ucClockInfoIndex & 0x3F;

 *VAR_5 = (VAR_11->ucClockInfoIndex >> VAR_0);

 VAR_3->evclk = ((uint32_t)VAR_12->ucEVClkHigh << 16) | FUNC_3(VAR_12->usEVClkLow);
 VAR_3->ecclk = ((uint32_t)VAR_12->ucECClkHigh << 16) | FUNC_3(VAR_12->usECClkLow);

 *VAR_4 = (void *)((unsigned long)(VAR_10->clockInfo) + (VAR_13 * VAR_10->ucEntrySize));

 return 0;
}
