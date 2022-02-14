
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct rv7xx_power_info {scalar_t__ max_vddc; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*,int ,int ,scalar_t__*) ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_0)
{
 struct rv7xx_power_info *VAR_1 = FUNC_1(VAR_0);
 u16 VAR_2;

 if (FUNC_0(VAR_0, 0, 0, &VAR_2))
  VAR_1->max_vddc = 0;
 else
  VAR_1->max_vddc = VAR_2;
}
