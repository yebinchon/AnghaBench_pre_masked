
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int u8 ;
typedef int u16 ;
struct pp_hwmgr {int adev; } ;
typedef int pp_atomctrl_mc_reg_table ;
struct TYPE_3__ {int ucTableFormatRevision; } ;
struct TYPE_4__ {scalar_t__ ucNumOfVRAMModule; int usMemClkPatchTblOffset; TYPE_1__ sHeader; } ;
typedef TYPE_2__ ATOM_VRAM_INFO_HEADER_V2_1 ;
typedef int ATOM_INIT_REG_BLOCK ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,int *,int *,int *) ;

int FUNC_6(
  struct pp_hwmgr *VAR_2,
  uint8_t VAR_3,
  pp_atomctrl_mc_reg_table *VAR_4)
{
 ATOM_VRAM_INFO_HEADER_V2_1 *VAR_5;
 ATOM_INIT_REG_BLOCK *VAR_6;
 int VAR_7 = 0;
 u8 VAR_8, VAR_9;
 u16 VAR_10;

 VAR_5 = (ATOM_VRAM_INFO_HEADER_V2_1 *)
  FUNC_5(VAR_2->adev,
    FUNC_0(VAR_0, VAR_1), &VAR_10, &VAR_8, &VAR_9);

 if (VAR_3 >= VAR_5->ucNumOfVRAMModule) {
  FUNC_4("Invalid VramInfo table.");
  VAR_7 = -1;
 } else if (VAR_5->sHeader.ucTableFormatRevision < 2) {
  FUNC_4("Invalid VramInfo table.");
  VAR_7 = -1;
 }

 if (0 == VAR_7) {
  VAR_6 = (ATOM_INIT_REG_BLOCK *)
   ((uint8_t *)VAR_5 + FUNC_3(VAR_5->usMemClkPatchTblOffset));
  VAR_7 = FUNC_2(VAR_6, VAR_4);
 }

 if (0 == VAR_7) {
  VAR_7 = FUNC_1(VAR_3,
     VAR_6, VAR_4);
 }

 return VAR_7;
}
