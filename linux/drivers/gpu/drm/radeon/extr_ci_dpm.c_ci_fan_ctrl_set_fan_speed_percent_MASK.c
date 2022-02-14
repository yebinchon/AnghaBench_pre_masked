
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ no_fan; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct ci_power_info {scalar_t__ fan_is_controlled_by_smc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct ci_power_info* FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct radeon_device *VAR_7,
          u32 VAR_8)
{
 u32 VAR_9;
 u32 VAR_10, VAR_11;
 u64 VAR_12;
 struct ci_power_info *VAR_13 = FUNC_3(VAR_7);

 if (VAR_7->pm.no_fan)
  return -VAR_3;

 if (VAR_13->fan_is_controlled_by_smc)
  return -VAR_2;

 if (VAR_8 > 100)
  return -VAR_2;

 VAR_11 = (FUNC_1(VAR_1) & VAR_5) >> VAR_6;

 if (VAR_11 == 0)
  return -VAR_2;

 VAR_12 = (u64)VAR_8 * VAR_11;
 FUNC_4(VAR_12, 100);
 VAR_10 = (u32)VAR_12;

 VAR_9 = FUNC_1(VAR_0) & ~VAR_4;
 VAR_9 |= FUNC_0(VAR_10);
 FUNC_2(VAR_0, VAR_9);

 return 0;
}
