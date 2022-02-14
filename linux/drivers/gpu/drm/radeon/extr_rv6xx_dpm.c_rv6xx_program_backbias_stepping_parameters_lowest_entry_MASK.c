
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
 int FUNC_0 (int ,int ,int ) ;
 struct rv6xx_power_info* FUNC_1 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_2)
{
 struct rv6xx_power_info *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->hw.backbias[0])
  FUNC_0(VAR_1, VAR_0, ~VAR_0);
 else
  FUNC_0(VAR_1, 0, ~VAR_0);
}
