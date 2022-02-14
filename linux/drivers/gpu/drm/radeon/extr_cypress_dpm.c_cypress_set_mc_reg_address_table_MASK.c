
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ last; TYPE_1__* mc_reg_address; } ;
struct evergreen_power_info {TYPE_2__ mc_reg_table; } ;
struct TYPE_3__ {int s0; int s1; } ;


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
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_25)
{
 struct evergreen_power_info *VAR_26 = FUNC_0(VAR_25);
 u32 VAR_27 = 0;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_15 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_14 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_4 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_3 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_10 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_7 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_9 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_8 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_17 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_16 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_19 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_18 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_22 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_21 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_24 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_23 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_11 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_0 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_13 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_1 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_12 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_2 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_5 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_5 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_20 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_20 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s0 = VAR_6 >> 2;
 VAR_26->mc_reg_table.mc_reg_address[VAR_27].s1 = VAR_6 >> 2;
 VAR_27++;

 VAR_26->mc_reg_table.last = (u8)VAR_27;
}
