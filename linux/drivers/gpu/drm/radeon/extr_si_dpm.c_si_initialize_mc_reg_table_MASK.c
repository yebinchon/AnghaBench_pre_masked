
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si_mc_reg_table {int dummy; } ;
struct si_power_info {struct si_mc_reg_table mc_reg_table; } ;
struct radeon_device {int dummy; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct atom_mc_reg_table*) ;
 struct atom_mc_reg_table* FUNC_3 (int,int ) ;
 int FUNC_4 (struct radeon_device*,int ,struct atom_mc_reg_table*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct atom_mc_reg_table*,struct si_mc_reg_table*) ;
 struct si_power_info* FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,struct si_mc_reg_table*) ;
 int FUNC_9 (struct si_mc_reg_table*) ;
 int FUNC_10 (struct si_mc_reg_table*) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_30)
{
 struct si_power_info *VAR_31 = FUNC_7(VAR_30);
 struct atom_mc_reg_table *VAR_32;
 struct si_mc_reg_table *VAR_33 = &VAR_31->mc_reg_table;
 u8 VAR_34 = FUNC_5(VAR_30);
 int VAR_35;

 VAR_32 = FUNC_3(sizeof(struct atom_mc_reg_table), VAR_1);
 if (!VAR_32)
  return -VAR_0;

 FUNC_1(VAR_19, FUNC_0(VAR_18));
 FUNC_1(VAR_7, FUNC_0(VAR_6));
 FUNC_1(VAR_11, FUNC_0(VAR_8));
 FUNC_1(VAR_10, FUNC_0(VAR_9));
 FUNC_1(VAR_12, FUNC_0(VAR_2));
 FUNC_1(VAR_15, FUNC_0(VAR_3));
 FUNC_1(VAR_13, FUNC_0(VAR_4));
 FUNC_1(VAR_27, FUNC_0(VAR_26));
 FUNC_1(VAR_29, FUNC_0(VAR_28));
 FUNC_1(VAR_21, FUNC_0(VAR_20));
 FUNC_1(VAR_23, FUNC_0(VAR_22));
 FUNC_1(VAR_17, FUNC_0(VAR_16));
 FUNC_1(VAR_14, FUNC_0(VAR_5));
 FUNC_1(VAR_25, FUNC_0(VAR_24));

 VAR_35 = FUNC_4(VAR_30, VAR_34, VAR_32);
 if (VAR_35)
  goto init_mc_done;

 VAR_35 = FUNC_6(VAR_32, VAR_33);
 if (VAR_35)
  goto init_mc_done;

 FUNC_9(VAR_33);

 VAR_35 = FUNC_8(VAR_30, VAR_33);
 if (VAR_35)
  goto init_mc_done;

 FUNC_10(VAR_33);

init_mc_done:
 FUNC_2(VAR_32);

 return VAR_35;

}
