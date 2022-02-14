
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {size_t num_entries; int valid_flag; int last; TYPE_2__* mc_reg_table_entry; } ;
struct ci_power_info {TYPE_1__ mc_reg_table; } ;
struct TYPE_4__ {size_t const mclk_max; } ;
typedef int SMU7_Discrete_MCRegisterSet ;


 int FUNC_0 (TYPE_2__*,int *,int ,int ) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
       const u32 VAR_1,
       SMU7_Discrete_MCRegisterSet *VAR_2)
{
 struct ci_power_info *VAR_3 = FUNC_1(VAR_0);
 u32 VAR_4 = 0;

 for(VAR_4 = 0; VAR_4 < VAR_3->mc_reg_table.num_entries; VAR_4++) {
  if (VAR_1 <= VAR_3->mc_reg_table.mc_reg_table_entry[VAR_4].mclk_max)
   break;
 }

 if ((VAR_4 == VAR_3->mc_reg_table.num_entries) && (VAR_4 > 0))
  --VAR_4;

 FUNC_0(&VAR_3->mc_reg_table.mc_reg_table_entry[VAR_4],
    VAR_2, VAR_3->mc_reg_table.last,
    VAR_3->mc_reg_table.valid_flag);
}
