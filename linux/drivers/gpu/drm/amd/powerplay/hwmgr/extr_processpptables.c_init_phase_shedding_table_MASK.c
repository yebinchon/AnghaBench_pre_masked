
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct phm_phase_shedding_limits_table* vddc_phase_shed_limits_table; } ;
struct pp_hwmgr {TYPE_3__ dyn_state; } ;
struct phm_phase_shedding_limits_table {unsigned long count; TYPE_1__* entries; } ;
struct TYPE_13__ {scalar_t__ usTableSize; } ;
struct TYPE_12__ {scalar_t__ usVddcPhaseShedLimitsTableOffset; } ;
struct TYPE_11__ {int ucNumEntries; TYPE_2__* entries; } ;
struct TYPE_9__ {scalar_t__ usVoltage; scalar_t__ usSclkLow; scalar_t__ usMclkLow; scalar_t__ ucMclkHigh; scalar_t__ ucSclkHigh; } ;
struct TYPE_8__ {unsigned long Voltage; unsigned long Sclk; unsigned long Mclk; } ;
typedef TYPE_4__ ATOM_PPLIB_PhaseSheddingLimits_Table ;
typedef TYPE_5__ ATOM_PPLIB_POWERPLAYTABLE4 ;
typedef TYPE_6__ ATOM_PPLIB_POWERPLAYTABLE ;


 int VAR_0 ;
 int VAR_1 ;
 struct phm_phase_shedding_limits_table* FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
  const ATOM_PPLIB_POWERPLAYTABLE *VAR_3)
{
 if (FUNC_1(VAR_3->usTableSize) >=
     sizeof(ATOM_PPLIB_POWERPLAYTABLE4)) {
  const ATOM_PPLIB_POWERPLAYTABLE4 *VAR_4 =
    (const ATOM_PPLIB_POWERPLAYTABLE4 *)VAR_3;

  if (0 != VAR_4->usVddcPhaseShedLimitsTableOffset) {
   const ATOM_PPLIB_PhaseSheddingLimits_Table *VAR_5 =
    (ATOM_PPLIB_PhaseSheddingLimits_Table *)
    (((unsigned long)VAR_4) +
    FUNC_1(VAR_4->usVddcPhaseShedLimitsTableOffset));
   struct phm_phase_shedding_limits_table *VAR_6;
   unsigned long VAR_7, VAR_8;


   VAR_7 = sizeof(unsigned long) +
    (sizeof(struct phm_phase_shedding_limits_table) *
    VAR_5->ucNumEntries);

   VAR_6 = FUNC_0(VAR_7, VAR_1);

   if (VAR_6 == ((void*)0))
    return -VAR_0;

   VAR_6->count = (unsigned long)VAR_5->ucNumEntries;

   for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
    VAR_6->entries[VAR_8].Voltage = (unsigned long)FUNC_1(VAR_5->entries[VAR_8].usVoltage);
    VAR_6->entries[VAR_8].Sclk = ((unsigned long)VAR_5->entries[VAR_8].ucSclkHigh << 16)
       | FUNC_1(VAR_5->entries[VAR_8].usSclkLow);
    VAR_6->entries[VAR_8].Mclk = ((unsigned long)VAR_5->entries[VAR_8].ucMclkHigh << 16)
       | FUNC_1(VAR_5->entries[VAR_8].usMclkLow);
   }
   VAR_2->dyn_state.vddc_phase_shed_limits_table = VAR_6;
  }
 }

 return 0;
}
