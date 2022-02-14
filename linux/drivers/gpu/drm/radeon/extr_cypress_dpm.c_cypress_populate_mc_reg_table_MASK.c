
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct rv7xx_ps {int low; } ;
struct rv7xx_power_info {int sram_end; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct TYPE_5__ {int valid_flag; int last; int * mc_reg_table_entry; } ;
struct evergreen_power_info {int mc_reg_table_start; TYPE_1__ mc_reg_table; } ;
struct TYPE_6__ {int * data; int member_0; } ;
typedef TYPE_2__ SMC_Evergreen_MCRegisters ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int *,int *) ;
 int FUNC_1 (struct radeon_device*,struct radeon_ps*,TYPE_2__*) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (struct radeon_device*,TYPE_2__*) ;
 struct evergreen_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*,int ,int *,int,int ) ;
 struct rv7xx_power_info* FUNC_6 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_7 (struct radeon_ps*) ;
 int FUNC_8 (struct radeon_device*,int ,int) ;

int FUNC_9(struct radeon_device *VAR_1,
      struct radeon_ps *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_6(VAR_1);
 struct evergreen_power_info *VAR_4 = FUNC_4(VAR_1);
 struct rv7xx_ps *VAR_5 = FUNC_7(VAR_2);
 SMC_Evergreen_MCRegisters VAR_6 = { 0 };

 FUNC_8(VAR_1,
          VAR_0, 1);

 FUNC_3(VAR_1, &VAR_6);

 FUNC_0(VAR_1,
        &VAR_5->low,
        &VAR_6.data[0]);

 FUNC_2(&VAR_4->mc_reg_table.mc_reg_table_entry[0],
         &VAR_6.data[1], VAR_4->mc_reg_table.last,
         VAR_4->mc_reg_table.valid_flag);

 FUNC_1(VAR_1, VAR_2, &VAR_6);

 return FUNC_5(VAR_1, VAR_4->mc_reg_table_start,
           (u8 *)&VAR_6, sizeof(SMC_Evergreen_MCRegisters),
           VAR_3->sram_end);
}
