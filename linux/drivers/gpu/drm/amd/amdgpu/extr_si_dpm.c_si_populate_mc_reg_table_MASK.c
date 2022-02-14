
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {scalar_t__ vddc; } ;
struct si_ulv_param {TYPE_5__ pl; scalar_t__ supported; } ;
struct si_ps {TYPE_5__* performance_levels; } ;
struct TYPE_7__ {int valid_flag; int last; int * mc_reg_table_entry; } ;
struct TYPE_8__ {int * data; } ;
struct si_power_info {int sram_end; int mc_reg_table_start; TYPE_1__ mc_reg_table; TYPE_2__ smc_mc_reg_table; struct si_ulv_param ulv; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef TYPE_2__ SMC_SIslands_MCRegisters ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*,int ,int *,int,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct amdgpu_device*,TYPE_5__*,int *) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ps*,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 struct si_power_info* FUNC_5 (struct amdgpu_device*) ;
 struct si_ps* FUNC_6 (struct amdgpu_ps*) ;
 int FUNC_7 (struct amdgpu_device*,TYPE_2__*) ;
 int FUNC_8 (struct amdgpu_device*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_4,
        struct amdgpu_ps *VAR_5)
{
 struct si_ps *VAR_6 = FUNC_6(VAR_5);
 struct si_power_info *VAR_7 = FUNC_5(VAR_4);
 struct si_ulv_param *VAR_8 = &VAR_7->ulv;
 SMC_SIslands_MCRegisters *VAR_9 = &VAR_7->smc_mc_reg_table;

 FUNC_1(VAR_9, 0, sizeof(SMC_SIslands_MCRegisters));

 FUNC_8(VAR_4, VAR_3, 1);

 FUNC_7(VAR_4, VAR_9);

 FUNC_2(VAR_4, &VAR_6->performance_levels[0],
          &VAR_9->data[VAR_1]);

 FUNC_4(&VAR_7->mc_reg_table.mc_reg_table_entry[0],
    &VAR_9->data[VAR_0],
    VAR_7->mc_reg_table.last,
    VAR_7->mc_reg_table.valid_flag);

 if (VAR_8->supported && VAR_8->pl.vddc != 0)
  FUNC_2(VAR_4, &VAR_8->pl,
           &VAR_9->data[VAR_2]);
 else
  FUNC_4(&VAR_7->mc_reg_table.mc_reg_table_entry[0],
     &VAR_9->data[VAR_2],
     VAR_7->mc_reg_table.last,
     VAR_7->mc_reg_table.valid_flag);

 FUNC_3(VAR_4, VAR_5, VAR_9);

 return FUNC_0(VAR_4, VAR_7->mc_reg_table_start,
        (u8 *)VAR_9,
        sizeof(SMC_SIslands_MCRegisters), VAR_7->sram_end);
}
