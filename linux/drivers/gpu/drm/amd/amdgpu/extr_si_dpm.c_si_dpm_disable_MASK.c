
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv7xx_power_info {scalar_t__ thermal_protection; } ;
struct amdgpu_ps {int dummy; } ;
struct TYPE_3__ {struct amdgpu_ps* boot_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ps*) ;
 struct rv7xx_power_info* FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int ,int) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_ps*,int) ;
 int FUNC_8 (struct amdgpu_device*,struct amdgpu_ps*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;
 int FUNC_10 (struct amdgpu_device*,int) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_15(struct amdgpu_device *VAR_1)
{
 struct rv7xx_power_info *VAR_2 = FUNC_2(VAR_1);
 struct amdgpu_ps *VAR_3 = VAR_1->pm.dpm.boot_ps;

 if (!FUNC_0(VAR_1))
  return;
 FUNC_14(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 if (VAR_2->thermal_protection)
  FUNC_10(VAR_1, 0);
 FUNC_7(VAR_1, VAR_3, 0);
 FUNC_8(VAR_1, VAR_3, 0);
 FUNC_9(VAR_1, 0);
 FUNC_6(VAR_1, VAR_0, 0);
 FUNC_13(VAR_1);
 FUNC_12(VAR_1);
 FUNC_5(VAR_1);
 FUNC_11(VAR_1);

 FUNC_1(VAR_1, VAR_3);
}
