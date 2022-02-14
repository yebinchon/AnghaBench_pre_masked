
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {size_t last; TYPE_2__* mc_reg_address; } ;
struct evergreen_power_info {TYPE_1__ mc_reg_table; } ;
struct TYPE_4__ {int s1; int s0; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int,size_t) ;
 struct evergreen_power_info* FUNC_2 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_0)
{
 struct evergreen_power_info *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->mc_reg_table.last; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1->mc_reg_table.mc_reg_address[VAR_3].s1 << 2);
  FUNC_1(VAR_1->mc_reg_table.mc_reg_address[VAR_3].s0 << 2, VAR_2);
 }
}
