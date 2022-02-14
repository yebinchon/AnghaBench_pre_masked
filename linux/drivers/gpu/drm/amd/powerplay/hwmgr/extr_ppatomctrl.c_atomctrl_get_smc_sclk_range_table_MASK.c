
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pp_hwmgr {int adev; } ;
struct pp_atom_ctrl_sclk_range_table {TYPE_1__* entry; } ;
struct TYPE_6__ {int ucSclkEntryNum; TYPE_2__* asSclkFcwRangeEntry; } ;
struct TYPE_5__ {int ucRcw_trans_lower; int ucFcw_trans_upper; int ucFcw_pcc; int ucPostdiv; int ucVco_setting; } ;
struct TYPE_4__ {void* usRcw_trans_lower; void* usFcw_trans_upper; void* usFcw_pcc; int ucPostdiv; int ucVco_setting; } ;
typedef TYPE_3__ ATOM_SMU_INFO_V2_1 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,int *) ;

int FUNC_3(struct pp_hwmgr *VAR_2, struct pp_atom_ctrl_sclk_range_table *VAR_3)
{

 int VAR_4;
 u8 VAR_5, VAR_6;
 u16 VAR_7;

 ATOM_SMU_INFO_V2_1 *VAR_8 =
  (ATOM_SMU_INFO_V2_1 *)FUNC_2(VAR_2->adev,
   FUNC_0(VAR_0, VAR_1),
   &VAR_7, &VAR_5, &VAR_6);


 for (VAR_4 = 0; VAR_4 < VAR_8->ucSclkEntryNum; VAR_4++) {
  VAR_3->entry[VAR_4].ucVco_setting = VAR_8->asSclkFcwRangeEntry[VAR_4].ucVco_setting;
  VAR_3->entry[VAR_4].ucPostdiv = VAR_8->asSclkFcwRangeEntry[VAR_4].ucPostdiv;
  VAR_3->entry[VAR_4].usFcw_pcc =
   FUNC_1(VAR_8->asSclkFcwRangeEntry[VAR_4].ucFcw_pcc);
  VAR_3->entry[VAR_4].usFcw_trans_upper =
   FUNC_1(VAR_8->asSclkFcwRangeEntry[VAR_4].ucFcw_trans_upper);
  VAR_3->entry[VAR_4].usRcw_trans_lower =
   FUNC_1(VAR_8->asSclkFcwRangeEntry[VAR_4].ucRcw_trans_lower);
 }

 return 0;
}
