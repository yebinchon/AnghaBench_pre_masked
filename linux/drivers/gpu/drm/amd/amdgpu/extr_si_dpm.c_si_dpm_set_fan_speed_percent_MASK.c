
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct si_power_info {scalar_t__ fan_is_controlled_by_smc; } ;
struct TYPE_2__ {scalar_t__ no_fan; } ;
struct amdgpu_device {TYPE_1__ pm; } ;


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
 int FUNC_3 (int,int) ;
 struct si_power_info* FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_7,
          u32 VAR_8)
{
 struct amdgpu_device *VAR_9 = (struct amdgpu_device *)VAR_7;
 struct si_power_info *VAR_10 = FUNC_4(VAR_9);
 u32 VAR_11;
 u32 VAR_12, VAR_13;
 u64 VAR_14;

 if (VAR_9->pm.no_fan)
  return -VAR_3;

 if (VAR_10->fan_is_controlled_by_smc)
  return -VAR_2;

 if (VAR_8 > 100)
  return -VAR_2;

 VAR_13 = (FUNC_1(VAR_1) & VAR_5) >> VAR_6;

 if (VAR_13 == 0)
  return -VAR_2;

 VAR_14 = (u64)VAR_8 * VAR_13;
 FUNC_3(VAR_14, 100);
 VAR_12 = (u32)VAR_14;

 VAR_11 = FUNC_1(VAR_0) & ~VAR_4;
 VAR_11 |= FUNC_0(VAR_12);
 FUNC_2(VAR_0, VAR_11);

 return 0;
}
