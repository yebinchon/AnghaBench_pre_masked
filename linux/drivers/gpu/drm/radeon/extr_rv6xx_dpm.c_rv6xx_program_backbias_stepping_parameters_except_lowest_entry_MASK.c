
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* backbias; } ;
struct rv6xx_power_info {TYPE_1__ hw; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_3)
{
 struct rv6xx_power_info *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->hw.backbias[1])
  FUNC_0(VAR_2, VAR_1, ~VAR_1);
 else
  FUNC_0(VAR_2, 0, ~VAR_1);

 if (VAR_4->hw.backbias[2])
  FUNC_0(VAR_2, VAR_0, ~VAR_0);
 else
  FUNC_0(VAR_2, 0, ~VAR_0);
}
