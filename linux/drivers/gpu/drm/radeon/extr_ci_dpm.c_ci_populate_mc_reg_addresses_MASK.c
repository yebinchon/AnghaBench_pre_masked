
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
struct ci_power_info {TYPE_3__ mc_reg_table; } ;
struct TYPE_9__ {scalar_t__ last; TYPE_1__* address; } ;
struct TYPE_7__ {int s1; int s0; } ;
struct TYPE_6__ {void* s1; void* s0; } ;
typedef TYPE_4__ SMU7_Discrete_MCRegisters ;


 int VAR_0 ;
 int VAR_1 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_2,
     SMU7_Discrete_MCRegisters *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_6 < VAR_4->mc_reg_table.last; VAR_6++) {
  if (VAR_4->mc_reg_table.valid_flag & (1 << VAR_6)) {
   if (VAR_5 >= VAR_1)
    return -VAR_0;
   VAR_3->address[VAR_5].s0 = FUNC_1(VAR_4->mc_reg_table.mc_reg_address[VAR_6].s0);
   VAR_3->address[VAR_5].s1 = FUNC_1(VAR_4->mc_reg_table.mc_reg_address[VAR_6].s1);
   VAR_5++;
  }
 }

 VAR_3->last = (u8)VAR_5;

 return 0;
}
