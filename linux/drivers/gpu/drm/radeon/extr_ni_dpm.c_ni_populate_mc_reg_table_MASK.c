
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct rv7xx_power_info {int sram_end; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ni_ps {int * performance_levels; } ;
struct TYPE_6__ {int valid_flag; int last; int * mc_reg_table_entry; } ;
struct TYPE_7__ {int * data; } ;
struct ni_power_info {TYPE_1__ mc_reg_table; TYPE_2__ smc_mc_reg_table; } ;
struct evergreen_power_info {int mc_reg_table_start; } ;
typedef TYPE_2__ SMC_NIslands_MCRegisters ;


 int VAR_0 ;
 struct evergreen_power_info* FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct radeon_device*,int *,int *) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 struct ni_power_info* FUNC_5 (struct radeon_device*) ;
 struct ni_ps* FUNC_6 (struct radeon_ps*) ;
 int FUNC_7 (struct radeon_device*,TYPE_2__*) ;
 int FUNC_8 (struct radeon_device*,int ,int *,int,int ) ;
 struct rv7xx_power_info* FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_1,
        struct radeon_ps *VAR_2)
{
 struct rv7xx_power_info *VAR_3 = FUNC_9(VAR_1);
 struct evergreen_power_info *VAR_4 = FUNC_0(VAR_1);
 struct ni_power_info *VAR_5 = FUNC_5(VAR_1);
 struct ni_ps *VAR_6 = FUNC_6(VAR_2);
 SMC_NIslands_MCRegisters *VAR_7 = &VAR_5->smc_mc_reg_table;

 FUNC_1(VAR_7, 0, sizeof(SMC_NIslands_MCRegisters));

 FUNC_10(VAR_1, VAR_0, 1);

 FUNC_7(VAR_1, VAR_7);

 FUNC_2(VAR_1, &VAR_6->performance_levels[0],
          &VAR_7->data[0]);

 FUNC_4(&VAR_5->mc_reg_table.mc_reg_table_entry[0],
    &VAR_7->data[1],
    VAR_5->mc_reg_table.last,
    VAR_5->mc_reg_table.valid_flag);

 FUNC_3(VAR_1, VAR_2, VAR_7);

 return FUNC_8(VAR_1, VAR_4->mc_reg_table_start,
           (u8 *)VAR_7,
           sizeof(SMC_NIslands_MCRegisters),
           VAR_3->sram_end);
}
