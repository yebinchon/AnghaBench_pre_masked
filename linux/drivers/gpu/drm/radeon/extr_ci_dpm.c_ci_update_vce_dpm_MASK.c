
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_ps {scalar_t__ evclk; } ;
struct radeon_device {int dummy; } ;
struct TYPE_2__ {int VceBootLevel; } ;
struct ci_power_info {TYPE_1__ smc_state_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;
 struct ci_power_info* FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct radeon_device *VAR_3,
        struct radeon_ps *VAR_4,
        struct radeon_ps *VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_4(VAR_3);
 int VAR_7 = 0;
 u32 VAR_8;

 if (VAR_5->evclk != VAR_4->evclk) {
  if (VAR_4->evclk) {

   FUNC_6(VAR_3, VAR_1, 0);

   VAR_6->smc_state_table.VceBootLevel = FUNC_5(VAR_3);
   VAR_8 = FUNC_0(VAR_0);
   VAR_8 &= ~VAR_2;
   VAR_8 |= FUNC_1(VAR_6->smc_state_table.VceBootLevel);
   FUNC_2(VAR_0, VAR_8);

   VAR_7 = FUNC_3(VAR_3, 1);
  } else {

   FUNC_6(VAR_3, VAR_1, 1);

   VAR_7 = FUNC_3(VAR_3, 0);
  }
 }
 return VAR_7;
}
