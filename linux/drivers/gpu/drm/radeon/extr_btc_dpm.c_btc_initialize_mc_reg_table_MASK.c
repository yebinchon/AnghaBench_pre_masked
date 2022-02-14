
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct radeon_device {int dummy; } ;
struct evergreen_mc_reg_table {int dummy; } ;
struct evergreen_power_info {struct evergreen_mc_reg_table mc_reg_table; } ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct atom_mc_reg_table*,struct evergreen_mc_reg_table*) ;
 int FUNC_3 (struct radeon_device*,struct evergreen_mc_reg_table*) ;
 int FUNC_4 (struct evergreen_mc_reg_table*) ;
 int FUNC_5 (struct evergreen_mc_reg_table*) ;
 struct evergreen_power_info* FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct atom_mc_reg_table*) ;
 struct atom_mc_reg_table* FUNC_8 (int,int ) ;
 int FUNC_9 (struct radeon_device*,int ,struct atom_mc_reg_table*) ;
 int FUNC_10 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_24)
{
 int VAR_25;
 struct atom_mc_reg_table *VAR_26;
 struct evergreen_power_info *VAR_27 = FUNC_6(VAR_24);
 struct evergreen_mc_reg_table *VAR_28 = &VAR_27->mc_reg_table;
 u8 VAR_29 = FUNC_10(VAR_24);

 VAR_26 = FUNC_8(sizeof(struct atom_mc_reg_table), VAR_1);
 if (!VAR_26)
  return -VAR_0;


 FUNC_1(VAR_15, FUNC_0(VAR_14));
 FUNC_1(VAR_6, FUNC_0(VAR_5));
 FUNC_1(VAR_10, FUNC_0(VAR_7));
 FUNC_1(VAR_9, FUNC_0(VAR_8));
 FUNC_1(VAR_17, FUNC_0(VAR_16));
 FUNC_1(VAR_19, FUNC_0(VAR_18));
 FUNC_1(VAR_21, FUNC_0(VAR_20));
 FUNC_1(VAR_23, FUNC_0(VAR_22));
 FUNC_1(VAR_11, FUNC_0(VAR_2));
 FUNC_1(VAR_13, FUNC_0(VAR_3));
 FUNC_1(VAR_12, FUNC_0(VAR_4));

 VAR_25 = FUNC_9(VAR_24, VAR_29, VAR_26);

 if (VAR_25)
  goto init_mc_done;

 VAR_25 = FUNC_2(VAR_26, VAR_28);

 if (VAR_25)
  goto init_mc_done;

 FUNC_4(VAR_28);
 VAR_25 = FUNC_3(VAR_24, VAR_28);

 if (VAR_25)
  goto init_mc_done;

 FUNC_5(VAR_28);

init_mc_done:
 FUNC_7(VAR_26);

 return VAR_25;
}
