
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv7xx_power_info {int s0_vid_lower_smio_cntl; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct rv7xx_power_info* FUNC_1 (struct radeon_device*) ;

void FUNC_2(struct radeon_device *VAR_1)
{
 struct rv7xx_power_info *VAR_2 = FUNC_1(VAR_1);

 VAR_2->s0_vid_lower_smio_cntl =
  FUNC_0(VAR_0);
}
