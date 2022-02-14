
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int fan_ctrl_is_in_default_mode; int gfxoff_state_changed_by_workload; int chip_family; int feature_mask; int od_enabled; int * smumgr_funcs; int chip_id; void* pp_table_version; void* request_dpm_level; void* dpm_level; int usec_timeout; } ;







 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int VAR_9 ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int VAR_10 ;
 int FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct pp_hwmgr*) ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int VAR_13 ;
 int FUNC_7 (struct pp_hwmgr*) ;
 int FUNC_8 (struct pp_hwmgr*) ;
 int VAR_14 ;
 int FUNC_9 (struct pp_hwmgr*) ;
 int VAR_15 ;
 int FUNC_10 (struct pp_hwmgr*) ;
 int FUNC_11 (struct pp_hwmgr*) ;
 int VAR_16 ;
 int FUNC_12 (struct pp_hwmgr*) ;
 int VAR_17 ;
 int FUNC_13 (struct pp_hwmgr*) ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_14(struct pp_hwmgr *VAR_20)
{
 if (!VAR_20)
  return -VAR_2;

 VAR_20->usec_timeout = VAR_1;
 VAR_20->pp_table_version = VAR_6;
 VAR_20->dpm_level = VAR_0;
 VAR_20->request_dpm_level = VAR_0;
 FUNC_2(VAR_20);
 FUNC_4(VAR_20);
 VAR_20->fan_ctrl_is_in_default_mode = 1;
 FUNC_3(VAR_20);
 VAR_20->gfxoff_state_changed_by_workload = 0;

 switch (VAR_20->chip_family) {
 case 142:
  VAR_20->smumgr_funcs = &VAR_9;
  FUNC_0(VAR_20);
  VAR_20->feature_mask &= ~(VAR_8 |
      VAR_3 |
      VAR_4);
  VAR_20->pp_table_version = VAR_5;
  VAR_20->od_enabled = 0;
  FUNC_7(VAR_20);
  break;
 case 141:
  VAR_20->od_enabled = 0;
  VAR_20->smumgr_funcs = &VAR_14;
  VAR_20->feature_mask &= ~VAR_4;
  FUNC_8(VAR_20);
  break;
 case 139:
  VAR_20->feature_mask &= ~VAR_4;
  switch (VAR_20->chip_id) {
  case 132:
   VAR_20->smumgr_funcs = &VAR_11;
   FUNC_10(VAR_20);
   VAR_20->feature_mask &= ~ (VAR_8 |
      VAR_3);
   VAR_20->pp_table_version = VAR_5;
   VAR_20->od_enabled = 0;
   break;
  case 133:
   VAR_20->smumgr_funcs = &VAR_15;
   FUNC_9(VAR_20);
   VAR_20->feature_mask &= ~VAR_8;
   break;
  case 138:
   VAR_20->smumgr_funcs = &VAR_10;
   FUNC_1(VAR_20);
   VAR_20->feature_mask &= ~ (VAR_8 |
      VAR_3);
   break;
  case 136:
  case 137:
  case 135:
   VAR_20->smumgr_funcs = &VAR_12;
   FUNC_5(VAR_20);
   VAR_20->feature_mask &= ~(VAR_7);
   break;
  case 128:
   VAR_20->smumgr_funcs = &VAR_19;
   FUNC_5(VAR_20);
   VAR_20->feature_mask &= ~(VAR_7);
   break;
  default:
   return -VAR_2;
  }
  FUNC_7(VAR_20);
  break;
 case 143:
  switch (VAR_20->chip_id) {
  case 131:
   VAR_20->feature_mask &= ~VAR_4;
   VAR_20->smumgr_funcs = &VAR_16;
   FUNC_11(VAR_20);
   break;
  case 130:
   VAR_20->smumgr_funcs = &VAR_17;
   FUNC_12(VAR_20);
   break;
  case 129:
   VAR_20->feature_mask &= ~VAR_4;
   VAR_20->smumgr_funcs = &VAR_18;
   FUNC_13(VAR_20);
   break;
  default:
   return -VAR_2;
  }
  break;
 case 140:
  switch (VAR_20->chip_id) {
  case 134:
   VAR_20->od_enabled = 0;
   VAR_20->smumgr_funcs = &VAR_13;
   FUNC_6(VAR_20);
   break;
  default:
   return -VAR_2;
  }
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
