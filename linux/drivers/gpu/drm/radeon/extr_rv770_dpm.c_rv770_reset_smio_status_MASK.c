
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv7xx_power_info {int s0_vid_lower_smio_cntl; } ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct rv7xx_power_info* FUNC_4 (struct radeon_device*) ;

void FUNC_5(struct radeon_device *VAR_7)
{
 struct rv7xx_power_info *VAR_8 = FUNC_4(VAR_7);
 u32 VAR_9, VAR_10;

 VAR_9 =
  (FUNC_0(VAR_0) & VAR_5) >> VAR_6;
 switch (VAR_9) {
 case 3:
  VAR_10 = FUNC_0(VAR_4);
  break;
 case 2:
  VAR_10 = FUNC_0(VAR_3);
  break;
 case 1:
  VAR_10 = FUNC_0(VAR_2);
  break;
 case 0:
  return;
 default:
  VAR_10 = VAR_8->s0_vid_lower_smio_cntl;
  break;
 }

 FUNC_2(VAR_1, VAR_10);
 FUNC_3(VAR_0, FUNC_1(0), ~VAR_5);
}
