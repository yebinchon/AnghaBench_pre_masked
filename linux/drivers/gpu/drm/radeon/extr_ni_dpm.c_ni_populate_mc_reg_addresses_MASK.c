
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
struct ni_power_info {TYPE_3__ mc_reg_table; } ;
struct TYPE_9__ {scalar_t__ last; TYPE_1__* address; } ;
struct TYPE_7__ {int s1; int s0; } ;
struct TYPE_6__ {void* s1; void* s0; } ;
typedef TYPE_4__ SMC_NIslands_MCRegisters ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct ni_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_1,
      SMC_NIslands_MCRegisters *VAR_2)
{
 struct ni_power_info *VAR_3 = FUNC_1(VAR_1);
 u32 VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 0; VAR_5 < VAR_3->mc_reg_table.last; VAR_5++) {
  if (VAR_3->mc_reg_table.valid_flag & (1 << VAR_5)) {
   if (VAR_4 >= VAR_0)
    break;
   VAR_2->address[VAR_4].s0 =
    FUNC_0(VAR_3->mc_reg_table.mc_reg_address[VAR_5].s0);
   VAR_2->address[VAR_4].s1 =
    FUNC_0(VAR_3->mc_reg_table.mc_reg_address[VAR_5].s1);
   VAR_4++;
  }
 }
 VAR_2->last = (u8)VAR_4;
}
