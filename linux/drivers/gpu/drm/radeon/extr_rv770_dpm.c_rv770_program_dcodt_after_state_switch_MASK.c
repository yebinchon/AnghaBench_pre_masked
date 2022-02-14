
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mclk; } ;
struct rv7xx_ps {TYPE_1__ high; } ;
struct rv7xx_power_info {scalar_t__ mclk_odt_threshold; } ;
struct radeon_ps {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct radeon_device*,int) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;
 struct rv7xx_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2,
         struct radeon_ps *VAR_3,
         struct radeon_ps *VAR_4)
{
 struct rv7xx_power_info *VAR_5 = FUNC_1(VAR_2);
 struct rv7xx_ps *VAR_6 = FUNC_2(VAR_3);
 struct rv7xx_ps *VAR_7 = FUNC_2(VAR_4);
 bool VAR_8 = 0;
 bool VAR_9 = 0;

 if (VAR_5->mclk_odt_threshold == 0)
  return;

 if (VAR_7->high.mclk <= VAR_5->mclk_odt_threshold)
  VAR_8 = 1;

 if (VAR_6->high.mclk <= VAR_5->mclk_odt_threshold)
  VAR_9 = 1;

 if (VAR_8 == VAR_9)
  return;

 if (VAR_8 && !VAR_9)
  return;

 if ((VAR_2->family == VAR_1) || (VAR_2->family == VAR_0))
  FUNC_0(VAR_2, VAR_9);
}
