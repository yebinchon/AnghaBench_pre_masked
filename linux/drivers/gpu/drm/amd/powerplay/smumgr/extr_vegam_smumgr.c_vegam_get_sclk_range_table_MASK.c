
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint32_t ;
struct vegam_smumgr {TYPE_4__* range_table; } ;
struct pp_hwmgr {scalar_t__ adev; scalar_t__ smu_backend; } ;
struct TYPE_10__ {int member_0; } ;
struct TYPE_9__ {TYPE_2__ member_0; } ;
struct pp_atom_ctrl_sclk_range_table {TYPE_3__* entry; TYPE_1__ member_0; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_15__ {size_t fcw_trans_lower; size_t postdiv; size_t fcw_trans_upper; size_t fcw_pcc; int vco_setting; } ;
struct TYPE_14__ {TYPE_5__* SclkFcwRangeTable; } ;
struct TYPE_13__ {size_t postdiv; size_t fcw_pcc; size_t fcw_trans_upper; size_t fcw_trans_lower; int vco_setting; } ;
struct TYPE_12__ {size_t trans_lower_frequency; size_t trans_upper_frequency; } ;
struct TYPE_11__ {size_t ucPostdiv; size_t usFcw_pcc; size_t usFcw_trans_upper; size_t usRcw_trans_lower; int ucVco_setting; } ;
typedef TYPE_6__ SMU75_Discrete_DpmTable ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 TYPE_8__* VAR_1 ;
 size_t FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*,struct pp_atom_ctrl_sclk_range_table*) ;

__attribute__((used)) static void FUNC_3(struct pp_hwmgr *VAR_2,
       SMU75_Discrete_DpmTable *VAR_3)
{
 struct vegam_smumgr *VAR_4 = (struct vegam_smumgr *)(VAR_2->smu_backend);
 uint32_t VAR_5, VAR_6;

 struct pp_atom_ctrl_sclk_range_table VAR_7 = { { {0} } };

 VAR_6 = FUNC_1((struct amdgpu_device *)VAR_2->adev);

 if (0 == FUNC_2(VAR_2, &VAR_7)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_3->SclkFcwRangeTable[VAR_5].vco_setting =
     VAR_7.entry[VAR_5].ucVco_setting;
   VAR_3->SclkFcwRangeTable[VAR_5].postdiv =
     VAR_7.entry[VAR_5].ucPostdiv;
   VAR_3->SclkFcwRangeTable[VAR_5].fcw_pcc =
     VAR_7.entry[VAR_5].usFcw_pcc;

   VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_upper =
     VAR_7.entry[VAR_5].usFcw_trans_upper;
   VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_lower =
     VAR_7.entry[VAR_5].usRcw_trans_lower;

   FUNC_0(VAR_3->SclkFcwRangeTable[VAR_5].fcw_pcc);
   FUNC_0(VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_upper);
   FUNC_0(VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_lower);
  }
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4->range_table[VAR_5].trans_lower_frequency =
    (VAR_6 * VAR_1[VAR_5].fcw_trans_lower) >> VAR_1[VAR_5].postdiv;
  VAR_4->range_table[VAR_5].trans_upper_frequency =
    (VAR_6 * VAR_1[VAR_5].fcw_trans_upper) >> VAR_1[VAR_5].postdiv;

  VAR_3->SclkFcwRangeTable[VAR_5].vco_setting = VAR_1[VAR_5].vco_setting;
  VAR_3->SclkFcwRangeTable[VAR_5].postdiv = VAR_1[VAR_5].postdiv;
  VAR_3->SclkFcwRangeTable[VAR_5].fcw_pcc = VAR_1[VAR_5].fcw_pcc;

  VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_upper = VAR_1[VAR_5].fcw_trans_upper;
  VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_lower = VAR_1[VAR_5].fcw_trans_lower;

  FUNC_0(VAR_3->SclkFcwRangeTable[VAR_5].fcw_pcc);
  FUNC_0(VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_upper);
  FUNC_0(VAR_3->SclkFcwRangeTable[VAR_5].fcw_trans_lower);
 }
}
