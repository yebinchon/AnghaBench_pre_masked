
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kv_power_info {scalar_t__ caps_uvd_pg; scalar_t__ caps_vce_pg; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_5__ {int boot_ps; TYPE_1__ thermal; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,int *,int ) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*,int) ;
 struct kv_power_info* FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_device*,int ) ;

__attribute__((used)) static void FUNC_14(struct amdgpu_device *VAR_5)
{
 struct kv_power_info *VAR_6 = FUNC_10(VAR_5);

 FUNC_0(VAR_5, &VAR_5->pm.dpm.thermal.irq,
         VAR_1);
 FUNC_0(VAR_5, &VAR_5->pm.dpm.thermal.irq,
         VAR_0);

 FUNC_2(VAR_5, 0);

 if (VAR_5->asic_type == VAR_2)
  FUNC_7(VAR_5, 0);


 FUNC_4(VAR_5, 0);
 FUNC_5(VAR_5, 0);
 if (VAR_6->caps_vce_pg)
  FUNC_1(VAR_5, VAR_4);
 if (VAR_6->caps_uvd_pg)
  FUNC_1(VAR_5, VAR_3);

 FUNC_8(VAR_5, 0);
 FUNC_6(VAR_5, 0);
 FUNC_3(VAR_5);
 FUNC_12(VAR_5);
 FUNC_9(VAR_5, 0);
 FUNC_11(VAR_5);

 FUNC_13(VAR_5, VAR_5->pm.dpm.boot_ps);
}
