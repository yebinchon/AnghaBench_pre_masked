
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_device {int dummy; } ;
struct ci_mc_reg_table {int dummy; } ;
struct ci_power_info {struct ci_mc_reg_table mc_reg_table; } ;
struct atom_mc_reg_table {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct atom_mc_reg_table*,struct ci_mc_reg_table*) ;
 struct ci_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*,struct ci_mc_reg_table*) ;
 int FUNC_5 (struct radeon_device*,struct ci_mc_reg_table*) ;
 int FUNC_6 (struct ci_mc_reg_table*) ;
 int FUNC_7 (struct ci_mc_reg_table*) ;
 int FUNC_8 (struct atom_mc_reg_table*) ;
 struct atom_mc_reg_table* FUNC_9 (int,int ) ;
 int FUNC_10 (struct radeon_device*,int ,struct atom_mc_reg_table*) ;
 int FUNC_11 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_12(struct radeon_device *VAR_42)
{
 struct ci_power_info *VAR_43 = FUNC_3(VAR_42);
 struct atom_mc_reg_table *VAR_44;
 struct ci_mc_reg_table *VAR_45 = &VAR_43->mc_reg_table;
 u8 VAR_46 = FUNC_11(VAR_42);
 int VAR_47;

 VAR_44 = FUNC_9(sizeof(struct atom_mc_reg_table), VAR_1);
 if (!VAR_44)
  return -VAR_0;

 FUNC_1(VAR_31, FUNC_0(VAR_30));
 FUNC_1(VAR_7, FUNC_0(VAR_6));
 FUNC_1(VAR_9, FUNC_0(VAR_8));
 FUNC_1(VAR_11, FUNC_0(VAR_10));
 FUNC_1(VAR_13, FUNC_0(VAR_12));
 FUNC_1(VAR_15, FUNC_0(VAR_14));
 FUNC_1(VAR_25, FUNC_0(VAR_24));
 FUNC_1(VAR_27, FUNC_0(VAR_26));
 FUNC_1(VAR_19, FUNC_0(VAR_16));
 FUNC_1(VAR_18, FUNC_0(VAR_17));
 FUNC_1(VAR_20, FUNC_0(VAR_2));
 FUNC_1(VAR_23, FUNC_0(VAR_3));
 FUNC_1(VAR_21, FUNC_0(VAR_4));
 FUNC_1(VAR_39, FUNC_0(VAR_38));
 FUNC_1(VAR_41, FUNC_0(VAR_40));
 FUNC_1(VAR_33, FUNC_0(VAR_32));
 FUNC_1(VAR_35, FUNC_0(VAR_34));
 FUNC_1(VAR_29, FUNC_0(VAR_28));
 FUNC_1(VAR_22, FUNC_0(VAR_5));
 FUNC_1(VAR_37, FUNC_0(VAR_36));

 VAR_47 = FUNC_10(VAR_42, VAR_46, VAR_44);
 if (VAR_47)
  goto init_mc_done;

 VAR_47 = FUNC_2(VAR_44, VAR_45);
 if (VAR_47)
  goto init_mc_done;

 FUNC_6(VAR_45);

 VAR_47 = FUNC_4(VAR_42, VAR_45);
 if (VAR_47)
  goto init_mc_done;

 VAR_47 = FUNC_5(VAR_42, VAR_45);
 if (VAR_47)
  goto init_mc_done;

 FUNC_7(VAR_45);

init_mc_done:
 FUNC_8(VAR_44);

 return VAR_47;
}
