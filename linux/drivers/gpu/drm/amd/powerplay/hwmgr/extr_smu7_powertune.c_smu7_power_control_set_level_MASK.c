
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int TDPAdjustment; scalar_t__ TDPAdjustmentPolarity; } ;
struct TYPE_3__ {struct phm_cac_tdp_table* cac_dtp_table; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; scalar_t__ chip_id; TYPE_2__ platform_descriptor; TYPE_1__ dyn_state; scalar_t__ pptable; } ;
struct phm_ppt_v1_information {struct phm_cac_tdp_table* cac_dtp_table; } ;
struct phm_cac_tdp_table {int usTDP; int usConfigurableTDP; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

int FUNC_2(struct pp_hwmgr *VAR_3)
{
 struct phm_ppt_v1_information *VAR_4 =
   (struct phm_ppt_v1_information *)(VAR_3->pptable);
 struct phm_cac_tdp_table *VAR_5;

 int VAR_6, VAR_7;
 int VAR_8 = 0;

 if (VAR_3->pp_table_version == VAR_2)
  VAR_5 = VAR_4->cac_dtp_table;
 else
  VAR_5 = VAR_3->dyn_state.cac_dtp_table;
 if (FUNC_0(VAR_1)) {

  VAR_6 = VAR_3->platform_descriptor.TDPAdjustmentPolarity ?
    VAR_3->platform_descriptor.TDPAdjustment :
    (-1 * VAR_3->platform_descriptor.TDPAdjustment);

  if (VAR_3->chip_id > VAR_0)
   VAR_7 = ((100 + VAR_6) * (int)(VAR_5->usTDP * 256)) / 100;
  else
   VAR_7 = ((100 + VAR_6) * (int)(VAR_5->usConfigurableTDP * 256)) / 100;

  VAR_8 = FUNC_1(VAR_3, (uint32_t)VAR_7);
 }

 return VAR_8;
}
