
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pp_hwmgr {int device; scalar_t__ smu_backend; } ;
struct iceland_mc_reg_table {int dummy; } ;
struct iceland_smumgr {struct iceland_mc_reg_table mc_reg_table; } ;
typedef int pp_atomctrl_mc_reg_table ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,struct iceland_mc_reg_table*) ;
 int FUNC_4 (struct pp_hwmgr*) ;
 int FUNC_5 (struct pp_hwmgr*,struct iceland_mc_reg_table*) ;
 int FUNC_6 (struct iceland_mc_reg_table*) ;
 int FUNC_7 (struct iceland_mc_reg_table*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;

__attribute__((used)) static int FUNC_10(struct pp_hwmgr *VAR_42)
{
 int VAR_43;
 struct iceland_smumgr *VAR_44 = (struct iceland_smumgr *)(VAR_42->smu_backend);
 pp_atomctrl_mc_reg_table *VAR_45;
 struct iceland_mc_reg_table *VAR_46 = &VAR_44->mc_reg_table;
 uint8_t VAR_47 = FUNC_4(VAR_42);

 VAR_45 = FUNC_9(sizeof(pp_atomctrl_mc_reg_table), VAR_1);

 if (((void*)0) == VAR_45)
  return -VAR_0;


 FUNC_2(VAR_42->device, VAR_31, FUNC_1(VAR_42->device, VAR_30));
 FUNC_2(VAR_42->device, VAR_7, FUNC_1(VAR_42->device, VAR_6));
 FUNC_2(VAR_42->device, VAR_9, FUNC_1(VAR_42->device, VAR_8));
 FUNC_2(VAR_42->device, VAR_11, FUNC_1(VAR_42->device, VAR_10));
 FUNC_2(VAR_42->device, VAR_13, FUNC_1(VAR_42->device, VAR_12));
 FUNC_2(VAR_42->device, VAR_15, FUNC_1(VAR_42->device, VAR_14));
 FUNC_2(VAR_42->device, VAR_25, FUNC_1(VAR_42->device, VAR_24));
 FUNC_2(VAR_42->device, VAR_27, FUNC_1(VAR_42->device, VAR_26));
 FUNC_2(VAR_42->device, VAR_19, FUNC_1(VAR_42->device, VAR_16));
 FUNC_2(VAR_42->device, VAR_18, FUNC_1(VAR_42->device, VAR_17));
 FUNC_2(VAR_42->device, VAR_20, FUNC_1(VAR_42->device, VAR_2));
 FUNC_2(VAR_42->device, VAR_23, FUNC_1(VAR_42->device, VAR_3));
 FUNC_2(VAR_42->device, VAR_21, FUNC_1(VAR_42->device, VAR_4));
 FUNC_2(VAR_42->device, VAR_39, FUNC_1(VAR_42->device, VAR_38));
 FUNC_2(VAR_42->device, VAR_41, FUNC_1(VAR_42->device, VAR_40));
 FUNC_2(VAR_42->device, VAR_33, FUNC_1(VAR_42->device, VAR_32));
 FUNC_2(VAR_42->device, VAR_35, FUNC_1(VAR_42->device, VAR_34));
 FUNC_2(VAR_42->device, VAR_29, FUNC_1(VAR_42->device, VAR_28));
 FUNC_2(VAR_42->device, VAR_22, FUNC_1(VAR_42->device, VAR_5));
 FUNC_2(VAR_42->device, VAR_37, FUNC_1(VAR_42->device, VAR_36));

 VAR_43 = FUNC_0(VAR_42, VAR_47, VAR_45);

 if (0 == VAR_43)
  VAR_43 = FUNC_3(VAR_45, VAR_46);

 if (0 == VAR_43) {
  FUNC_6(VAR_46);
  VAR_43 = FUNC_5(VAR_42, VAR_46);
 }

 if (0 == VAR_43)
  FUNC_7(VAR_46);

 FUNC_8(VAR_45);

 return VAR_43;
}
