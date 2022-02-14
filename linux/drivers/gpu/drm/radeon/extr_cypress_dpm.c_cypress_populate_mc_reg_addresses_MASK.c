
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_8__ {int last; int valid_flag; TYPE_2__* mc_reg_address; } ;
struct evergreen_power_info {TYPE_3__ mc_reg_table; } ;
struct TYPE_9__ {scalar_t__ last; TYPE_1__* address; } ;
struct TYPE_7__ {int s1; int s0; } ;
struct TYPE_6__ {void* s1; void* s0; } ;
typedef TYPE_4__ SMC_Evergreen_MCRegisters ;


 void* FUNC_0 (int ) ;
 struct evergreen_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
           SMC_Evergreen_MCRegisters *VAR_1)
{
 struct evergreen_power_info *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_4 < VAR_2->mc_reg_table.last; VAR_4++) {
  if (VAR_2->mc_reg_table.valid_flag & (1 << VAR_4)) {
   VAR_1->address[VAR_3].s0 =
    FUNC_0(VAR_2->mc_reg_table.mc_reg_address[VAR_4].s0);
   VAR_1->address[VAR_3].s1 =
    FUNC_0(VAR_2->mc_reg_table.mc_reg_address[VAR_4].s1);
   VAR_3++;
  }
 }

 VAR_1->last = (u8)VAR_3;
}
